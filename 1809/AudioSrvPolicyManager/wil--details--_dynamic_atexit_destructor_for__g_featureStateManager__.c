/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x18003A490
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180007394 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x180007A58 (--_GFeatureStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__()
{
  int v0; // eax

  if ( wil::details::g_processShutdownInProgress )
    goto LABEL_6;
  v0 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
  if ( wil::details::g_pfnRtlDllShutdownInProgress )
    v0 = wil::details::g_pfnRtlDllShutdownInProgress();
  if ( v0 )
  {
LABEL_6:
    LOBYTE(wil::details::g_featureStateManager.Ptr) = 0;
    if ( lpMem )
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(lpMem);
  }
  else
  {
    wil::details::FeatureStateManager::`scalar deleting destructor'((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
  }
}
