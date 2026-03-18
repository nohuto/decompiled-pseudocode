/*
 * XREFs of ?LockExclusiveWithoutGuard@CInpLockGuard@@QEAAXXZ @ 0x1C0179540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuard::LockExclusiveWithoutGuard(PERESOURCE *this)
{
  ExEnterCriticalRegionAndAcquireResourceExclusive(*this);
}
