/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800EDB60
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x1800AB2D4 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 */

wil::details::FeatureStateManager *__fastcall wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__(
        wil *a1)
{
  if ( !wil::ProcessShutdownInProgress(a1) )
    return wil::details::FeatureStateManager::`scalar deleting destructor'((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
  wil::details::g_featureStateManager = 0;
  return (wil::details::FeatureStateManager *)wil::details_abi::ProcessLocalStorage<wil::details_abi::FeatureStateData>::`scalar deleting destructor'((__int64)&qword_18033CA68);
}
