/*
 * XREFs of ?wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180005824
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180008D6C (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 *     ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1800097D4 (-OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18000C530 (-LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU-$IAsyncOperation@_.c)
 *     ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18000CE30 (-LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001407C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180014758 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wi.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180032BD8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@wil@@CA.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FrameworkScalability@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180032D40 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FrameworkScalability@@@wil@@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SettingsHomeProgrammableMultiPromoCard@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180033BF8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SettingsHomeProgrammableMult.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SettingsAccountsInfoProgrammablePromoCard@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180033D60 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SettingsAccountsInfoProgramm.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_MinuteZeroExperiences@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180033EC8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_MinuteZeroExperiences@@@wil@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowsTips@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180034030 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WindowsTips@@@wil@@CA-AW4wil.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ActionCenterNotification@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800341A8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ActionCenterNotification@@@w.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SilentInstalledApps@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180034310 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SilentInstalledApps@@@wil@@C.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AppDefaultsEdgeCoinCampaign@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800344B8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AppDefaultsEdgeCoinCampaign@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_MobilityExperience@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180034620 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_MobilityExperience@@@wil@@CA.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180041D24 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA.c)
 *     ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180054C70 (-UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x180055330 (-StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z.c)
 *     ?StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z @ 0x1800558D0 (-StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_InstallAttribution@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180057064 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_InstallAttribution@@@wil@@CA.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800571CC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductIns.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AppInstallBatching@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180057334 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AppInstallBatching@@@wil@@CA.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CortanaOnSpotlight@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18007FDC8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CortanaOnSpotlight@@@wil@@CA.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_PinWebsiteAction@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18007FF70 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_PinWebsiteAction@@@wil@@CA-A.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_PinWebsiteActionV2@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180096034 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_PinWebsiteActionV2@@@wil@@CA.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800961DC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles@@@w.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetEnabledAndHasNotificationStateCallback(
        union wil_details_FeaturePropertyCache *a1,
        void *a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax

  v2 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 3) == (unsigned __int8)a2
    && ((v2 >> 4) & 3) == BYTE1(a2)
    && ((*(_DWORD *)a1 & 4) != 0) == BYTE2(a2) )
  {
    return 0LL;
  }
  result = 1LL;
  *(_DWORD *)a1 = v2 & 0xFFFFFFC8 | (unsigned __int8)a2 & 3 | (4 * (BYTE2(a2) & 1 | (4 * (BYTE1(a2) & 3))));
  return result;
}
