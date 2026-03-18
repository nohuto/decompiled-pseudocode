/*
 * XREFs of ExpTimerDpcRoutine @ 0x1401015F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     KeSetCoalescableTimer @ 0x1400E29F0 (KeSetCoalescableTimer.c)
 *     KeInsertQueueApc @ 0x1400E5200 (KeInsertQueueApc.c)
 *     _local_unwind @ 0x1401A0030 (_local_unwind.c)
 *     RtlpComputeEpilogueOffset @ 0x1401BA574 (RtlpComputeEpilogueOffset.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine0 @ 0x1401CECB0 (KiCustomAccessRoutine0.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall ExpTimerDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  int v8; // esi
  __int64 v9; // [rsp+0h] [rbp-1C8h] BYREF
  int v10; // [rsp+34h] [rbp-194h]
  __int64 v11; // [rsp+A0h] [rbp-128h]
  _BYTE v12[89]; // [rsp+120h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+188h] [rbp-40h]
  __int64 *v14; // [rsp+198h] [rbp-30h]

  v14 = &v9;
  v13 = 0LL;
  v11 = 0LL;
  memset(v12, 0, sizeof(v12));
  if ( (unsigned __int64)((DeferredContext >> 47) + 1) > 1 )
  {
    v10 = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    *(_QWORD *)&v12[81] = SystemArgument1;
    *(_QWORD *)&v12[1] = __ROL8__(DeferredContext, SystemArgument1);
    *(_QWORD *)&v12[73] = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine0(DeferredContext);
  }
  v8 = 0;
  KxAcquireSpinLock((PKSPIN_LOCK)(DeferredContext + 64));
  if ( (*(_BYTE *)(DeferredContext + 304) & 1) != 0 )
  {
    v11 = MEMORY[0xFFFFF78000000014];
    v8 = KeInsertQueueApc(DeferredContext + 72, MEMORY[0xFFFFF78000000014], HIDWORD(MEMORY[0xFFFFF78000000014]), 0) == 0;
    if ( *(_DWORD *)(DeferredContext + 240) )
    {
      if ( --v8 < 0 )
      {
        ObfReferenceObjectWithTag((PVOID)DeferredContext, 0x746C6644u);
        v8 = 0;
      }
      if ( (*(_BYTE *)(DeferredContext + 304) & 2) == 0
        && KeSetCoalescableTimer(
             (PKTIMER)DeferredContext,
             (LARGE_INTEGER)(-10000LL * *(int *)(DeferredContext + 240)),
             0,
             *(_DWORD *)(DeferredContext + 320),
             Dpc) )
      {
        ++v8;
      }
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(DeferredContext + 64));
  if ( v8 )
    ObfDereferenceObjectWithTag((PVOID)DeferredContext, 0x746C6644u);
}
