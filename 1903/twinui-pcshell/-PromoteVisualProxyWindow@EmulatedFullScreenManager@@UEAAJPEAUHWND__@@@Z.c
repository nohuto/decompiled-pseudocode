/*
 * XREFs of ?PromoteVisualProxyWindow@EmulatedFullScreenManager@@UEAAJPEAUHWND__@@@Z @ 0x180403EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DXGI_FullscreenProxyWindowPromotion@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180403F78 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DXGI_FullscreenProxyWindowPromotion@.c)
 */

__int64 __fastcall EmulatedFullScreenManager::PromoteVisualProxyWindow(EmulatedFullScreenManager *this, HWND a2)
{
  wil::Feature<__WilFeatureTraits_Feature_DXGI_FullscreenProxyWindowPromotion>::ReportUsageToService();
  if ( GetPropW(a2, L"__D3DVisualProxyProp__") )
    return (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD, __int64))(**((_QWORD **)this + 6) + 32LL))(
             *((_QWORD *)this + 6),
             a2,
             0LL,
             8LL);
  else
    return 2147942487LL;
}
