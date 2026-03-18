/*
 * XREFs of ?isOwned@CInpLockGuard@@QEAAHXZ @ 0x1C009F274
 * Callers:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?EnterGuard@CInpLockGuard@@QEAAXXZ @ 0x1C0124900 (-EnterGuard@CInpLockGuard@@QEAAXXZ.c)
 *     ?LeaveGuard@CInpLockGuard@@QEAAXXZ @ 0x1C01249F0 (-LeaveGuard@CInpLockGuard@@QEAAXXZ.c)
 *     ?LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ @ 0x1C0124A70 (-LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockShared@CInpLockGuard@@QEAAXXZ @ 0x1C0124AF0 (-LockShared@CInpLockGuard@@QEAAXXZ.c)
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
