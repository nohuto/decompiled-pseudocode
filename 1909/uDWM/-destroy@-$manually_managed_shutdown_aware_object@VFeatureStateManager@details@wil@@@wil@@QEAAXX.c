/*
 * XREFs of ?destroy@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18004E004
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800503E0 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180034584 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x180075DE0 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 */

void __fastcall wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::destroy(wil *a1)
{
  if ( wil::ProcessShutdownInProgress(a1) )
  {
    wil::details::g_featureStateManager = 0;
    if ( xmmword_1800DBEE0 )
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(xmmword_1800DBEE0);
  }
  else
  {
    wil::details::FeatureStateManager::~FeatureStateManager((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
  }
}
