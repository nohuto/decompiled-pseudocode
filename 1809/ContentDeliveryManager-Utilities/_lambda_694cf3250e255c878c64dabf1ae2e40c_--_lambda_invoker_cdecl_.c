/*
 * XREFs of _lambda_694cf3250e255c878c64dabf1ae2e40c_::_lambda_invoker_cdecl_ @ 0x180009D30
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800098AC (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 */

void lambda_694cf3250e255c878c64dabf1ae2e40c_::_lambda_invoker_cdecl_()
{
  if ( wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_180185228);
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    byte_180185238 = 0;
    ReleaseSRWLockExclusive(&stru_180185228);
  }
}
