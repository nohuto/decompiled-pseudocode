/*
 * XREFs of ?SetGhostVisualStyleInternal@CImmersiveApp@@UEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0319_0001@@@Z @ 0x180168A50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800248E8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::SetGhostVisualStyleInternal(__int64 a1, int a2)
{
  if ( a2 != *(_DWORD *)(a1 + 392) )
  {
    wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsageToService(a1, 3u);
    if ( *(_DWORD *)(a1 + 396) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 336) + 48LL))(
        *(_QWORD *)(a1 + 336),
        2 - (unsigned int)(a2 != 0));
    *(_DWORD *)(a1 + 392) = a2;
  }
}
