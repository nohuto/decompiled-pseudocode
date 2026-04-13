/*
 * XREFs of _lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_ @ 0x180015200
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180009B1C (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 */

void __fastcall lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rdi

  if ( LOBYTE(Context->Ptr) )
  {
    v4 = Context + 1;
    AcquireSRWLockExclusive(Context + 1);
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)Context);
    LOBYTE(Context[3].Ptr) = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
