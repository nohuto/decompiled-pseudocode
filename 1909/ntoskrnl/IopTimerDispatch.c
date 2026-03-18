/*
 * XREFs of IopTimerDispatch @ 0x140293B70
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     EtwGetKernelTraceTimestamp @ 0x1401094D0 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14011D1F0 (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _local_unwind @ 0x1401A0030 (_local_unwind.c)
 *     RtlpComputeEpilogueOffset @ 0x1401BA574 (RtlpComputeEpilogueOffset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine1 @ 0x1401CE770 (KiCustomAccessRoutine1.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall IopTimerDispatch(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  int v8; // r14d
  KIRQL v9; // r12
  unsigned int v10; // r15d
  struct _LIST_ENTRY *i; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD v13[72]; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 v14; // [rsp+120h] [rbp-D8h]
  _WORD v15[45]; // [rsp+130h] [rbp-C8h] BYREF
  _DWORD *v16; // [rsp+1A0h] [rbp-58h]
  LARGE_INTEGER v17[4]; // [rsp+1A8h] [rbp-50h] BYREF

  v16 = v13;
  v14 = DeferredContext;
  v8 = DWORD2(PerfGlobalGroupMask) & 0x800000;
  v13[39] = DWORD2(PerfGlobalGroupMask) & 0x800000;
  memset(v15, 0, sizeof(v15));
  if ( (unsigned __int64)((DeferredContext >> 47) + 1) > 1 )
  {
    v13[16] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    *(_QWORD *)&v15[41] = SystemArgument1;
    *(_QWORD *)&v15[5] = __ROL8__(DeferredContext, SystemArgument1);
    *(_QWORD *)&v15[33] = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine1((unsigned int *)DeferredContext);
  }
  if ( *(_DWORD *)DeferredContext )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
    v10 = *(_DWORD *)DeferredContext;
    for ( i = IopTimerQueueHead.Flink; i != &IopTimerQueueHead && v10; i = i->Flink )
    {
      if ( WORD1(i[-1].Blink) )
      {
        if ( v8 )
        {
          memset(v17, 0, sizeof(v17));
          EtwGetKernelTraceTimestamp(v17, 0x40800000u);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))i[1].Flink)(i[2].Flink, i[1].Blink);
          EtwTraceTimedEvent(0xF46u, 0x40800000u, (__int64)&i[1], 8, 0x400A02u, (__int64)v17);
        }
        else
        {
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))i[1].Flink)(i[2].Flink, i[1].Blink);
        }
        --v10;
      }
    }
    KxReleaseSpinLock(&IopTimerLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v9);
  }
}
