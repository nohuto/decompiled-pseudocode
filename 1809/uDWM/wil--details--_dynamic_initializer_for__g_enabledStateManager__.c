/*
 * XREFs of wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001000
 * Callers:
 *     <none>
 * Callees:
 *     ?Construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18004BC5C (-Construct@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAA.c)
 */

int wil::details::_dynamic_initializer_for__g_enabledStateManager__()
{
  wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::Construct();
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__);
}
