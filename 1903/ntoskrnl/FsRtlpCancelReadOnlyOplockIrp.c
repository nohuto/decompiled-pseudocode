/*
 * XREFs of FsRtlpCancelReadOnlyOplockIrp @ 0x140283850
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140010090 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140283508 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpReadOnlyOplockIrpCancelRoutine @ 0x140283CA0 (FsRtlpReadOnlyOplockIrpCancelRoutine.c)
 * Callees:
 *     FsRtlpComputeShareableOplockState @ 0x1400109A0 (FsRtlpComputeShareableOplockState.c)
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140283CBC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 */

void __fastcall FsRtlpCancelReadOnlyOplockIrp(__int64 a1, char a2)
{
  __int64 v3; // rdi
  char v4; // r14
  _QWORD *i; // rbx

  v3 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  v4 = 0;
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v3 + 152));
  for ( i = *(_QWORD **)(v3 + 40); i != (_QWORD *)(v3 + 40); i = (_QWORD *)*i )
  {
    if ( *((_BYTE *)i - 100) )
    {
      i = (_QWORD *)i[1];
      FsRtlpRemoveAndCompleteReadOnlyIrp(*i, 3221225760LL, 0LL);
      v4 = 1;
    }
  }
  if ( v4 )
    FsRtlpComputeShareableOplockState(v3);
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v3 + 152));
}
