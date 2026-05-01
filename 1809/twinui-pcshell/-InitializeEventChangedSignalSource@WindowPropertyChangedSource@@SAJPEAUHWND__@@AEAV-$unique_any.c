/*
 * XREFs of ?InitializeEventChangedSignalSource@WindowPropertyChangedSource@@SAJPEAUHWND__@@AEAV?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@Z @ 0x1801FF890
 * Callers:
 *     ?SetupAppSpecifiedIconsForView@DefaultIconManager@@UEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180200150 (-SetupAppSpecifiedIconsForView@DefaultIconManager@@UEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetEventByChangeCount@Details@WindowPropertyHelpers@@YAJPEAUHWND__@@JAEAV?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@Z @ 0x1801FF0BC (-GetEventByChangeCount@Details@WindowPropertyHelpers@@YAJPEAUHWND__@@JAEAV-$unique_any_t@V-$even.c)
 */

__int64 __fastcall WindowPropertyChangedSource::InitializeEventChangedSignalSource(HWND a1, wil::details **a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  const char *v5; // r9
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (unsigned int)a1;
  if ( !SetPropW(a1, L"WindowProperty.PropertyChangedCount", HANDLE_FLAG_INHERIT) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x5E,
             (__int64)"internal\\onecoreuapshell\\inc\\windowproperty.h",
             v5);
  v7 = WindowPropertyHelpers::Details::GetEventByChangeCount(v3, v4, a2);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5F,
    (__int64)"internal\\onecoreuapshell\\inc\\windowproperty.h",
    (const char *)(unsigned int)v7);
  return v8;
}
