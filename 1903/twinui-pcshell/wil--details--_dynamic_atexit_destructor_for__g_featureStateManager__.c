/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800C7010
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180049DE4 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x18007E51C (--_GFeatureStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     ??1?$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x18008643C (--1-$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
wil::details::FeatureStateManager *__fastcall wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__(
        wil *a1)
{
  if ( !wil::ProcessShutdownInProgress(a1) )
    return wil::details::FeatureStateManager::`scalar deleting destructor'((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
  wil::details::g_featureStateManager = 0;
  return (wil::details::FeatureStateManager *)wil::details_abi::ProcessLocalStorage<wil::details_abi::FeatureStateData>::~ProcessLocalStorage<wil::details_abi::FeatureStateData>((__int64)&qword_1805992E8);
}
