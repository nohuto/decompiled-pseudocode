/*
 * XREFs of ?LockIfNotTokenThread@CTokenManager@@UEAAXXZ @ 0x1C0053880
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C00079E0 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::LockIfNotTokenThread(CTokenManager *this)
{
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)this + 3) )
    CTokenManager::AcquireTokenManagerLock(this);
}
