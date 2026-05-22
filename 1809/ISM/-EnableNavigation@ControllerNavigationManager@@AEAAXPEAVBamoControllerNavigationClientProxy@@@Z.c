/*
 * XREFs of ?EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x1800305F8
 * Callers:
 *     ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x1800309E4 (-SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientP.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002F774 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800315B4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamep.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x180034170 (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ControllerNavigationManager::EnableNavigation(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationClientProxy *a2)
{
  struct BamoControllerNavigationClientProxy *v3; // rbx
  unsigned int v4; // r14d
  struct tagRECT v5; // xmm6
  struct tagPOINT *v6; // rax
  __int64 ***v7; // rdi
  struct tagPOINT v8; // rsi
  __int64 **i; // rbx
  struct tagRECT v10; // [rsp+30h] [rbp-20h] BYREF
  __int16 v11; // [rsp+84h] [rbp+34h]
  int v12; // [rsp+88h] [rbp+38h] BYREF
  __int16 v13; // [rsp+8Ch] [rbp+3Ch]
  struct tagPOINT v14; // [rsp+90h] [rbp+40h] BYREF

  v3 = a2;
  LOBYTE(a2) = 1;
  (*(void (__fastcall **)(char *, struct BamoControllerNavigationClientProxy *))(*((_QWORD *)this + 1) + 32LL))(
    (char *)this + 8,
    a2);
  v3 = (struct BamoControllerNavigationClientProxy *)((char *)v3 + 8);
  v4 = (*(__int64 (__fastcall **)(struct BamoControllerNavigationClientProxy *))(*(_QWORD *)v3 + 40LL))(v3);
  v5 = *(struct tagRECT *)(*(__int64 (__fastcall **)(struct BamoControllerNavigationClientProxy *))(*(_QWORD *)v3 + 48LL))(v3);
  v6 = (struct tagPOINT *)(*(__int64 (__fastcall **)(struct BamoControllerNavigationClientProxy *))(*(_QWORD *)v3 + 56LL))(v3);
  v7 = (__int64 ***)*((_QWORD *)this + 9);
  v8 = *v6;
  for ( i = *v7; i != (__int64 **)v7; i = (__int64 **)*i )
  {
    v10 = v5;
    v14 = v8;
    if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
    {
      if ( (`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetCachedFeatureEnabledState();
      LOBYTE(v11) = 0;
      v12 = 0;
      v13 = v11;
      wil::details::ReportUsageToService(
        &`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetFeaturePropertyCache'::`2'::data,
        0xADAF72u,
        (const struct FEATURE_LOGGED_TRAITS *)&v12,
        0,
        3);
    }
    else
    {
      ControllerProcessor::NavigationEnable((ControllerProcessor *)i[3], v4, &v10, (struct tagPOINT)&v14, 1, 1);
    }
  }
}
