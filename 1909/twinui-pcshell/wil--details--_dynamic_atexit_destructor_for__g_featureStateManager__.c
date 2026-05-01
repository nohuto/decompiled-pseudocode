/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800E97A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180016044 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x1800809CC (--_GFeatureStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     ??1?$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x180088EBC (--1-$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
wil::details::FeatureStateManager *__fastcall wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__(
        wil *a1)
{
  if ( !wil::ProcessShutdownInProgress(a1) )
    return wil::details::FeatureStateManager::`scalar deleting destructor'((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
  wil::details::g_featureStateManager = 0;
  return (wil::details::FeatureStateManager *)wil::details_abi::ProcessLocalStorage<wil::details_abi::FeatureStateData>::~ProcessLocalStorage<wil::details_abi::FeatureStateData>((__int64)&qword_1805C1C48);
}
