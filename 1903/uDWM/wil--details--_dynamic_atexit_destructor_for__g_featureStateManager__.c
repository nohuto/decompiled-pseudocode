/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800506D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__(wil *a1)
{
  wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::destroy(a1);
}
