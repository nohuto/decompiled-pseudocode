/*
 * XREFs of ?SetGhostVisualStyleInternal@CImmersiveApp@@UEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0001@@@Z @ 0x180120190
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18004AD20 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::SetGhostVisualStyleInternal(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 != *(_DWORD *)(a1 + 360) )
  {
    result = wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsageToService(a1, 3u, a3);
    if ( *(_DWORD *)(a1 + 364) )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 304) + 48LL))(
                 *(_QWORD *)(a1 + 304),
                 2 - (unsigned int)(a2 != 0));
    *(_DWORD *)(a1 + 360) = a2;
  }
  return result;
}
