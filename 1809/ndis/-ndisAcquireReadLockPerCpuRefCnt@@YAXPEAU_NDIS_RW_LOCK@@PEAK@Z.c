/*
 * XREFs of ?ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z @ 0x1C00124DC
 * Callers:
 *     NdisAcquireReadWriteLock @ 0x1C00207A0 (NdisAcquireReadWriteLock.c)
 *     ndisAcquireReadWriteLockX @ 0x1C005D7E0 (ndisAcquireReadWriteLockX.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAcquireReadLockPerCpuRefCnt(PKSPIN_LOCK SpinLock, unsigned int *a2)
{
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  ++*a2;
  _InterlockedOr(v4, 0);
  if ( !KeTestSpinLock(SpinLock) && *a2 == 1 && (struct _KTHREAD *)SpinLock[1] != KeGetCurrentThread() )
  {
    *a2 = 0;
    KeAcquireSpinLockAtDpcLevel(SpinLock);
    ++*a2;
    KeReleaseSpinLockFromDpcLevel(SpinLock);
  }
}
