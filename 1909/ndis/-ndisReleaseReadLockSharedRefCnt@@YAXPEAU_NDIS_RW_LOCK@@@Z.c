/*
 * XREFs of ?ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z @ 0x1C0091558
 * Callers:
 *     NdisReleaseReadWriteLock @ 0x1C0034460 (NdisReleaseReadWriteLock.c)
 *     ?ndisReleaseReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@PEAU_LOCK_STATE@@E@Z @ 0x1C00915FC (-ndisReleaseReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@PEAU_LOCK_STATE@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReleaseReadLockSharedRefCnt(PKSPIN_LOCK SpinLock)
{
  __int64 v2; // rbx
  int v3; // eax
  char *v4; // rdx
  unsigned int v5; // eax
  unsigned int v6; // eax

  KeAcquireSpinLockAtDpcLevel(SpinLock + 2);
  v2 = 0LL;
  v3 = *((_DWORD *)SpinLock + 6) - 1;
  *((_DWORD *)SpinLock + 6) = v3;
  if ( !v3 )
    KeReleaseSpinLockFromDpcLevel(SpinLock);
  KeReleaseSpinLockFromDpcLevel(SpinLock + 2);
  v4 = (char *)ndisRWLocksOwnedByThread + 520 * KeGetPcr()->Prcb.Number;
  v5 = *((_DWORD *)v4 + 128);
  if ( v5 )
  {
    while ( SpinLock != *(PKSPIN_LOCK *)&v4[8 * v2] )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= v5 )
        return;
    }
    v6 = v5 - 1;
    *((_DWORD *)v4 + 128) = v6;
    *(_QWORD *)&v4[8 * v2] = *(_QWORD *)&v4[8 * v6];
  }
}
