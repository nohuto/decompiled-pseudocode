/*
 * XREFs of ?LockIfNotTokenThread@CTokenManager@@UEAAXXZ @ 0x1C005A250
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C00135A0 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::LockIfNotTokenThread(CTokenManager *this)
{
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)this + 3) )
    CTokenManager::AcquireTokenManagerLock(this);
}
