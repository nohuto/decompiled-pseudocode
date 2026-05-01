/*
 * XREFs of ?InitializeEventChangedSignalSource@WindowPropertyChangedSource@@SAJPEAUHWND__@@AEAV?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@Z @ 0x180252AD8
 * Callers:
 *     ?SetupAppSpecifiedIconsForView@DefaultIconManager@@UEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180253370 (-SetupAppSpecifiedIconsForView@DefaultIconManager@@UEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801017C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?GetEventByChangeCount@Details@WindowPropertyHelpers@@YAJPEAUHWND__@@JAEAV?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@Z @ 0x180252324 (-GetEventByChangeCount@Details@WindowPropertyHelpers@@YAJPEAUHWND__@@JAEAV-$unique_any_t@V-$even.c)
 */

signed int __fastcall WindowPropertyChangedSource::InitializeEventChangedSignalSource(HWND a1, wil::details **a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details *v5; // rcx
  __int64 v6; // r8
  const char *v7; // r9
  int v9; // eax
  int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (unsigned int)a1;
  if ( !SetPropW(a1, L"WindowProperty.PropertyChangedCount", HANDLE_FLAG_INHERIT) )
    return wil::details::GetLastErrorFailHr(v5, v4, v6, v7);
  v9 = WindowPropertyHelpers::Details::GetEventByChangeCount(v3, v4, a2);
  v10 = v9;
  if ( v9 >= 0 )
    return 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5F,
    (__int64)"internal\\onecoreuapshell\\inc\\windowproperty.h",
    (const char *)(unsigned int)v9);
  return v10;
}
