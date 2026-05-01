/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002C954
 * Callers:
 *     ?GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x180016ED4 (-GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z.c)
 *     ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x18002C2B0 (-UpdateTitle@CTaskWindow@@UEAAXXZ.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x18007A570 (-MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800DE818 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800DE994 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z @ 0x1800DFC80 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x1800E6760 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ?CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z @ 0x18013476C (-CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z.c)
 *     ?ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAHPEAU_GUID@@@Z @ 0x18018FC80 (-ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAHPEAU_GUID@@@Z.c)
 *     ?GetSourceAppIdViewGroupingPreference@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAA?AW4ViewGrouping@ViewManagement@UI@Windows@@XZ @ 0x1801F3028 (-GetSourceAppIdViewGroupingPreference@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAA-AW4ViewGro.c)
 *     ?GetEventByChangeCount@Details@WindowPropertyHelpers@@YAJPEAUHWND__@@JAEAV?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@Z @ 0x1801FF0BC (-GetEventByChangeCount@Details@WindowPropertyHelpers@@YAJPEAUHWND__@@JAEAV-$unique_any_t@V-$even.c)
 *     ?TrySubscribePropertiesChangedEvent@WindowPropertyChangedListener@@AEAA_NXZ @ 0x180200730 (-TrySubscribePropertiesChangedEvent@WindowPropertyChangedListener@@AEAA_NXZ.c)
 *     ?LaunchNewTabPage@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@AEBU_GUID@@@Z @ 0x1802022CC (-LaunchNewTabPage@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@AEBU_GUID@@@Z.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x18039F8B4 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 *     ?CreateComponentEventHandles@ViewEventHandlers@OneCore@Internal@Windows@@YAJW4_CUI_VIEW_EVENT_TYPE@@IIW4EventOptions@wil@@PEAPEAX@Z @ 0x1803A4E68 (-CreateComponentEventHandles@ViewEventHandlers@OneCore@Internal@Windows@@YAJW4_CUI_VIEW_EVENT_TY.c)
 * Callees:
 *     _vsnwprintf @ 0x18008516C (_vsnwprintf.c)
 */

__int64 StringCchPrintfW(wchar_t *Buffer, __int64 a2, const unsigned __int16 *a3, ...)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( a2 )
      *Buffer = 0;
  }
  else
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = vsnwprintf(Buffer, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      Buffer[v5] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v5 )
    {
      Buffer[v5] = 0;
    }
  }
  return (unsigned int)v4;
}
