/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800127B0
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000E820 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x18000EF74 (-GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z.c)
 *     ?UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ @ 0x180014A34 (-UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F090 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1800355CC (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CA-AW4.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18004D408 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA-AW4.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18004D52C (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@w.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800147EC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004CFEC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA-AW4wil_de.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3)
{
  __int16 v5; // [rsp+54h] [rbp+1Ch]
  int v6; // [rsp+58h] [rbp+20h] BYREF
  __int16 v7; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v5) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetCachedFeatureEnabledState();
  LOBYTE(v5) = 1;
  v6 = 0;
  v7 = v5;
  return wil_details_FeaturePropertyCache_ReportUsageToService(
           &`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data,
           10727725LL,
           &v6,
           0LL,
           a2);
}
