/*
 * XREFs of ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B8A4
 * Callers:
 *     Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_fe718337787c493ce2d833414db25eba___ @ 0x18002B338 (Windows--Internal--NativeString_Windows--Internal--CoTaskMemPolicy_unsigned_short___--_Initializ.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18002B780 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005B3A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180136B2C (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     ?GetAppUserModelID@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18016A520 (-GetAppUserModelID@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetDesktopApplicationId@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18016A5A0 (-GetDesktopApplicationId@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetFilePath@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18016A610 (-GetFilePath@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetSecondaryTileId@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18016A690 (-GetSecondaryTileId@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180193560 (-Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?ConvertCapabilitiesFlagToCapabilitiesString@CortanaStoreAppHelper@@YAJW4CapabilityFlags@CortanaCapabilities@@PEAPEAUHSTRING__@@@Z @ 0x1801C667C (-ConvertCapabilitiesFlagToCapabilitiesString@CortanaStoreAppHelper@@YAJW4CapabilityFlags@Cortana.c)
 *     ?GetAppUserModelID@PWSLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801E8790 (-GetAppUserModelID@PWSLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetFilePath@PWSLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801E8810 (-GetFilePath@PWSLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x1802E2D54 (-GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE.c)
 *     ?UpdateAppId@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180307A80 (-UpdateAppId@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multit.c)
 *     ?UpdateDisplayName@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180307BA0 (-UpdateDisplayName@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@.c)
 *     ?get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18033B7E0 (-get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@AppResizeAcc@@QEAAJXZ @ 0x1803CCE24 (-RuntimeClassInitialize@AppResizeAcc@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@JointResizeAcc@@QEAAJXZ @ 0x1803D1E74 (-RuntimeClassInitialize@JointResizeAcc@@QEAAJXZ.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x18040B6F4 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 *     ?ReplaceChars@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAXGG@Z @ 0x18040D7A8 (-ReplaceChars@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAXGG@Z.c)
 *     s_DrawThemeTextPPIAware @ 0x1804172E0 (s_DrawThemeTextPPIAware.c)
 *     s_OnMeasureItem @ 0x180418250 (s_OnMeasureItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(
        _QWORD *a1)
{
  __int64 result; // rax

  result = -1LL;
  if ( a1[1] == -1LL )
  {
    if ( *a1 )
    {
      do
        ++result;
      while ( *(_WORD *)(*a1 + 2 * result) );
    }
    else
    {
      result = 0LL;
    }
    a1[1] = result;
  }
  return result;
}
