/*
 * XREFs of IopTimerDispatch @ 0x1400018F0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010E9A0 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14011BCDC (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _local_unwind @ 0x140195300 (_local_unwind.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine1 @ 0x1401C7780 (KiCustomAccessRoutine1.c)
 */

void __fastcall IopTimerDispatch(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  int v5; // esi
  KIRQL v6; // r12
  int v7; // r14d
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *v9; // r15
  _DWORD v10[66]; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v11; // [rsp+108h] [rbp-E0h]
  _DWORD *v12; // [rsp+128h] [rbp-C0h]
  __int64 v13; // [rsp+13Ah] [rbp-AEh]
  __int64 v14; // [rsp+172h] [rbp-76h]
  unsigned __int64 v15; // [rsp+182h] [rbp-66h]
  _BYTE v16[32]; // [rsp+190h] [rbp-58h] BYREF

  v12 = v10;
  v11 = DeferredContext;
  v5 = DWORD2(PerfGlobalGroupMask) & 0x800000;
  v10[33] = DWORD2(PerfGlobalGroupMask) & 0x800000;
  if ( (unsigned __int64)((DeferredContext >> 47) + 1) > 1 )
  {
    v10[14] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    v15 = SystemArgument1;
    v13 = __ROL8__(DeferredContext, SystemArgument1);
    v14 = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine1(DeferredContext);
  }
  if ( *(_DWORD *)DeferredContext )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
    v7 = *(_DWORD *)DeferredContext;
    for ( i = IopTimerQueueHead.Flink; i != &IopTimerQueueHead && v7; i = i->Flink )
    {
      if ( WORD1(i[-1].Blink) )
      {
        v9 = i + 1;
        if ( v5 )
        {
          EtwGetKernelTraceTimestamp(v16, 1082130432LL);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))v9->Flink)(i[2].Flink, i[1].Blink);
          EtwTraceTimedEvent(3910, 1082130432, (_DWORD)i + 16, 8, 4196866, (__int64)v16);
        }
        else
        {
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))v9->Flink)(i[2].Flink, i[1].Blink);
        }
        --v7;
      }
    }
    KxReleaseSpinLock(&IopTimerLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick();
    }
    __writecr8(v6);
  }
}
