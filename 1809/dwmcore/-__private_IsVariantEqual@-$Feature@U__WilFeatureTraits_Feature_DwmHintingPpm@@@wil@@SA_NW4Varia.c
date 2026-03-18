/*
 * XREFs of ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Variant_DwmHintingPpm@@W4VariantReportingKind@2@_N@Z @ 0x1800580F0
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180049690 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x1800C8F90 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x1800CC774 (-FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x1800CEAD0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18008674C (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800EE138 (-ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details.c)
 *     ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureVariantPropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HEW4wil_VariantReportingKind@@_K@Z @ 0x1800EE1E4 (-ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureVariantPropertyCache@@IPEBUF.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA?AW4Variant_DwmHintingPpm@@XZ @ 0x18014A348 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA-AW4Variant_.c)
 */

_BOOL8 __fastcall wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::__private_IsVariantEqual(
        char a1,
        __int64 a2,
        char a3)
{
  char v4; // bl
  char v5; // r12
  int v6; // r14d
  unsigned int (*v7)(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *); // rax
  unsigned int v8; // eax
  int v9; // ecx
  char v10; // al
  char v11; // di
  BOOL v12; // r15d
  unsigned int v13; // ebx
  int v14; // r15d
  int v15; // ecx
  unsigned __int32 v16; // eax
  unsigned int v17; // ebx
  int v19; // [rsp+58h] [rbp+7h] BYREF
  __int16 v20; // [rsp+5Ch] [rbp+Bh]
  int v21; // [rsp+60h] [rbp+Fh] BYREF
  __int16 v22; // [rsp+64h] [rbp+13h]
  int v23; // [rsp+B8h] [rbp+67h] BYREF
  unsigned int v24; // [rsp+C0h] [rbp+6Fh] BYREF
  unsigned int v25; // [rsp+C8h] [rbp+77h]
  int v26; // [rsp+D0h] [rbp+7Fh] BYREF
  __int16 v27; // [rsp+D4h] [rbp+83h]

  LOBYTE(v25) = a3;
  v24 = a2;
  v4 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F;
  v5 = v4;
  v6 = `wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data & 3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
  {
    v7 = g_wil_details_internalGetFeatureVariant;
    v23 = 0;
    if ( g_wil_details_internalGetFeatureVariant || (v7 = g_wil_details_apiGetFeatureVariant) != 0LL )
      v8 = ((__int64 (__fastcall *)(__int64, _QWORD, unsigned int *, int *))v7)(12805652LL, 0LL, &v24, &v23);
    else
      v8 = 0;
    v9 = (v8 >> 7) & 1;
    v10 = v8 & 0x7F;
    if ( !v10 )
      v24 = 0;
    v11 = v10;
    v12 = v4 != 0;
    v13 = (unsigned int)`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data >> 2;
    v14 = v12 + 1;
    if ( v6 )
    {
      v14 = v6;
      v11 = v5;
    }
    else
    {
      LOBYTE(v13) = v9;
    }
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      &wil::details::g_enabledStateManager,
      &`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data,
      0LL);
    v15 = 16;
    v25 = `wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data;
    if ( v23 )
      v15 = 32;
    v16 = v15 | v25 & 0xFFFFFFCF;
    v25 = v16;
    if ( !v6 )
    {
      a2 = v24;
      v17 = v14 | v16 & 0xFFFFFFF8 | (4 * (v13 & 1));
      v25 = v17;
      if ( dword_18030C034 != v24
        || (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F) != v11 )
      {
        dword_18030C034 = v24;
        v25 = v17 & 0xFFFFE03F | ((v11 & 0x3F) << 7);
      }
    }
    v4 = v11;
    if ( `wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data != v25 )
      _InterlockedExchange(
        &`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data,
        v25);
  }
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetCachedVariantState();
  LOBYTE(v27) = 3;
  v19 = 0;
  v20 = v27;
  v26 = 0;
  wil::details::ReportVariantUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data,
    a2,
    &v19,
    v4 == a1,
    a1);
  if ( !v4 && a1 )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetCachedVariantState();
    LOBYTE(v27) = 3;
    v21 = 0;
    v22 = v27;
    v26 = 2;
    if ( (unsigned int)wil::details::ReportUsageToServiceDirect(
                         &`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data,
                         12805652LL,
                         320LL,
                         0LL)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      g_wil_details_pfnFeatureLoggingHook(
        0xC36614u,
        (const struct FEATURE_LOGGED_TRAITS *)&v21,
        0LL,
        1,
        0LL,
        (const enum wil_VariantReportingKind *)&v26,
        0,
        1uLL);
    }
  }
  return v4 == a1;
}
