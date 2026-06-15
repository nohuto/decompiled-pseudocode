/*
 * XREFs of memset_0 @ 0x18003508E
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1800011A0 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x1800013D0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001460 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     memcpy_s @ 0x180001504 (memcpy_s.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180002684 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18000292C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180003DB0 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     DllMain @ 0x180004C88 (DllMain.c)
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x1800054E8 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 *     ?CopyChars@?$CSimpleStringT@G$0A@@ATL@@SAXPEAG_KPEBGH@Z @ 0x18000D318 (-CopyChars@-$CSimpleStringT@G$0A@@ATL@@SAXPEAG_KPEBGH@Z.c)
 *     ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x180011F8C (-GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAA_NI_N@Z @ 0x1800161E8 (-InitHashTable@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementT.c)
 *     ?Rehash@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAAXI@Z @ 0x1800162BC (-Rehash@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@P.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180017110 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001B28C (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x180023290 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?GenerateMediaManagerNotification@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAPEAUMEDIAMANAGER_NOTIFICATION_BLOCK@@@Z @ 0x18002367C (-GenerateMediaManagerNotification@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCAp.c)
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x180023CE0 (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180027CCC (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z @ 0x180029F14 (-HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z.c)
 *     ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x18002A918 (-Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_T.c)
 *     ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x180031060 (-GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ.c)
 *     ?GetACE@CAccessObjectAce@CDacl@ATL@@UEBAPEAXXZ @ 0x180031310 (-GetACE@CAccessObjectAce@CDacl@ATL@@UEBAPEAXXZ.c)
 *     ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18003291C (-memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     __scrt_fastfail @ 0x180034CC4 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
