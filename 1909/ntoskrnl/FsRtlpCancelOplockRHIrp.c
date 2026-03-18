/*
 * XREFs of FsRtlpCancelOplockRHIrp @ 0x1401037BC
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1400102C0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockRHIrpCancelRoutine @ 0x1401037A0 (FsRtlpOplockRHIrpCancelRoutine.c)
 * Callees:
 *     FsRtlpComputeShareableOplockState @ 0x140010BD0 (FsRtlpComputeShareableOplockState.c)
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1401038C8 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1401040E4 (FsRtlpReleaseIrpsWaitingForRH.c)
 */

void __fastcall FsRtlpCancelOplockRHIrp(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdi
  char v6; // r14
  _QWORD *v7; // rsi
  _QWORD *i; // rbx

  v5 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  v6 = 0;
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v5 + 152));
  v7 = (_QWORD *)(v5 + 56);
  for ( i = *(_QWORD **)(v5 + 56); i != v7; i = (_QWORD *)*i )
  {
    if ( !i[7] )
    {
      if ( *(_BYTE *)(i[2] + 68LL) )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndBreakRHIrp((PVOID)*i, 0, 0, 0, 0);
        v6 = 1;
      }
    }
  }
  if ( v6 )
  {
    if ( a3 )
      FsRtlpReleaseIrpsWaitingForRH(v5);
    if ( (_QWORD *)*v7 == v7 )
      FsRtlpComputeShareableOplockState(v5);
  }
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 152));
}
