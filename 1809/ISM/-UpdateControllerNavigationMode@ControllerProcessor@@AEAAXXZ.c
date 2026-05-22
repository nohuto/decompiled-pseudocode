/*
 * XREFs of ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x1800370EC
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180033244 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     _lambda_392f984ef5794bdcbc8fc50916da8ef5_::_lambda_invoker_cdecl_ @ 0x180033850 (_lambda_392f984ef5794bdcbc8fc50916da8ef5_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002F774 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800315B4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamep.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x180034170 (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180034230 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x1800354F8 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 */

void __fastcall ControllerProcessor::UpdateControllerNavigationMode(ControllerProcessor *this)
{
  LSTATUS ValueW; // eax
  int v3; // ecx
  struct tagRECT v4; // [rsp+40h] [rbp-10h] BYREF
  struct tagPOINT v5; // [rsp+78h] [rbp+28h] BYREF
  int v6; // [rsp+80h] [rbp+30h] BYREF
  __int16 y; // [rsp+84h] [rbp+34h]
  struct tagPOINT v8; // [rsp+88h] [rbp+38h] BYREF

  v5.x = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\PointerModeOnDesktop",
             L"Enabled",
             0x10u,
             0LL,
             &v6,
             (LPDWORD)&v5);
  v3 = v6;
  if ( ValueW )
    v3 = 1;
  if ( v3 )
  {
    ControllerProcessor::GetCursorPosition(this, &v8);
    *(_QWORD *)&v4.left = 0LL;
    v4.right = GetSystemMetrics(78);
    v4.bottom = GetSystemMetrics(79);
    v5 = v8;
    if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
    {
      if ( (`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetCachedFeatureEnabledState();
      LOBYTE(v5.y) = 0;
      v6 = 0;
      y = v5.y;
      v5.x = 0;
      wil::details::ReportUsageToService(
        &`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetFeaturePropertyCache'::`2'::data,
        0xADAF72u,
        (const struct FEATURE_LOGGED_TRAITS *)&v6,
        0,
        3);
    }
    else
    {
      ControllerProcessor::NavigationEnable(this, 225, &v4, (struct tagPOINT)&v5);
    }
  }
  else if ( *((_DWORD *)this + 430) != 2 )
  {
    ControllerProcessor::UpdateNavigationState((__int64)this, 2, 0LL, 0LL);
  }
}
