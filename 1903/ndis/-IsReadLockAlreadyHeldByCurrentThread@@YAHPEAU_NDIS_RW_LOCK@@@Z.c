/*
 * XREFs of ?IsReadLockAlreadyHeldByCurrentThread@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1C0090E04
 * Callers:
 *     ?ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1C0091090 (-ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 *     ?ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1C00912D4 (-ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsReadLockAlreadyHeldByCurrentThread(struct _NDIS_RW_LOCK *a1)
{
  unsigned int v1; // edx
  char *v2; // rax
  unsigned int v3; // r8d

  v1 = 0;
  v2 = (char *)ndisRWLocksOwnedByThread + 520 * KeGetPcr()->Prcb.Number;
  v3 = *((_DWORD *)v2 + 128);
  if ( !v3 )
    return 0LL;
  while ( a1 != *(struct _NDIS_RW_LOCK **)v2 )
  {
    ++v1;
    v2 += 8;
    if ( v1 >= v3 )
      return 0LL;
  }
  return 1LL;
}
