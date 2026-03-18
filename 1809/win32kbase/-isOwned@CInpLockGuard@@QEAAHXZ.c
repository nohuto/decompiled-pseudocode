/*
 * XREFs of ?isOwned@CInpLockGuard@@QEAAHXZ @ 0x1C0062FA0
 * Callers:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C0062F60 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C014E570 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockShared@CInpLockGuard@@QEAAXXZ @ 0x1C014E5B0 (-LockShared@CInpLockGuard@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInpLockGuard::isOwned(PERESOURCE *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( ExIsResourceAcquiredExclusiveLite(*this) || ExIsResourceAcquiredSharedLite(*this) )
    return 1;
  return v2;
}
