/*
 * XREFs of ?DisableLightDismissRequested@CInsightsExperienceManager@@AEAAXXZ @ 0x1801D71E0
 * Callers:
 *     ?OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801D7DA0 (-OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@P.c)
 * Callees:
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x18004ED28 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?CreateAltTabProxyWindow@CInsightsExperienceManager@@AEAAXXZ @ 0x1801D6EF8 (-CreateAltTabProxyWindow@CInsightsExperienceManager@@AEAAXXZ.c)
 */

void __fastcall CInsightsExperienceManager::DisableLightDismissRequested(
        CInsightsExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  HWND v3; // rcx

  if ( *((_BYTE *)this + 280) )
  {
    SingleViewLightDismissHelper::UnregisterWithLightDismiss((CInsightsExperienceManager *)((char *)this + 264));
    *((_BYTE *)this + 280) = 0;
  }
  if ( !*((_QWORD *)this + 38) )
  {
    CInsightsExperienceManager::CreateAltTabProxyWindow(this, a2);
    v3 = (HWND)*((_QWORD *)this + 38);
    if ( v3 )
      ShowWindow(v3, 4);
  }
}
