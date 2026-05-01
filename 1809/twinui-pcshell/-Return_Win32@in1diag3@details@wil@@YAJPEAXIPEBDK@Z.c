/*
 * XREFs of ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800E7180
 * Callers:
 *     ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x180029D0C (-_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z.c)
 *     ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x18002A100 (-_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x180035340 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18003DA00 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800E7C04 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x180183758 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregist_ea_180183758.c)
 *     ?put_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJE@Z @ 0x1801F4810 (-put_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJE@Z.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1801FE788 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?LoadQuirksForApp@LegacyViewWrapper@@AEAAJXZ @ 0x18023C4CC (-LoadQuirksForApp@LegacyViewWrapper@@AEAAJXZ.c)
 *     ?EnumKeys@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV?$CCoSimpleArray@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@@@@Z @ 0x180381900 (-EnumKeys@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV-$CCoSimpleArray@V-$NativeString@V-$CoTa.c)
 *     ?EnumValues@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV?$CCoSimpleArray@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@@@@Z @ 0x180381B10 (-EnumValues@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV-$CCoSimpleArray@V-$NativeString@V-$Co.c)
 *     ?ReadData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEAPEAXPEA_K@Z @ 0x180381DD0 (-ReadData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEAPEAXPEA_K@Z.c)
 *     ?WriteData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEBX_K@Z @ 0x1803822C0 (-WriteData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEBX_K@Z.c)
 * Callees:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x1800E7090 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_Win32(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_Win32((__int64)this, a2, a3, (__int64)a4, v5, retaddr, 1, (int)a4);
}
