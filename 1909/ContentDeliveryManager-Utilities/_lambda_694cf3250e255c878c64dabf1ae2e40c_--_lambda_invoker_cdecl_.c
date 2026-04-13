/*
 * XREFs of _lambda_694cf3250e255c878c64dabf1ae2e40c_::_lambda_invoker_cdecl_ @ 0x18000A240
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180009B1C (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 */

void lambda_694cf3250e255c878c64dabf1ae2e40c_::_lambda_invoker_cdecl_()
{
  if ( wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_18018F858);
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    byte_18018F868 = 0;
    ReleaseSRWLockExclusive(&stru_18018F858);
  }
}
