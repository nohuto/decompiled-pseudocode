/*
 * XREFs of ?_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@@AEAAJXZ @ 0x1801C0908
 * Callers:
 *     ?OnShellHookMessage@Win32BackedViewHostItem@@UEAAJ_K_J@Z @ 0x1801BF240 (-OnShellHookMessage@Win32BackedViewHostItem@@UEAAJ_K_J@Z.c)
 *     ?put_Visibility@Win32BackedViewHostItem@@UEAAJE@Z @ 0x1801C1220 (-put_Visibility@Win32BackedViewHostItem@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??$AsyncInvokeAll@PEAVWin32BackedViewHostItem@@PEAUITitleBarChangedEventArgs@Holographic@Shell@Internal@Windows@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUITitleBarChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVWin32BackedViewHostItem@@AEBQEAUITitleBarChangedEventArgs@Holographic@Shell@Internal@Windows@@@Z @ 0x1801BAD20 (--$AsyncInvokeAll@PEAVWin32BackedViewHostItem@@PEAUITitleBarChangedEventArgs@Holographic@Shell@I.c)
 *     ??$MakeAndInitialize@VTitleBarChangedEventArgs@@UITitleBarChangedEventArgs@Holographic@Shell@Internal@Windows@@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAUITitleBarChangedEventArgs@Holographic@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@@Z @ 0x1801BB9F0 (--$MakeAndInitialize@VTitleBarChangedEventArgs@@UITitleBarChangedEventArgs@Holographic@Shell@Int.c)
 */

__int64 __fastcall Win32BackedViewHostItem::_RaiseTitleBarChangedEvent(HWND *this)
{
  const char *v2; // r9
  UINT32 v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  HSTRING v8; // [rsp+20h] [rbp-E0h] BYREF
  HSTRING v9; // [rsp+28h] [rbp-D8h] BYREF
  HWND *v10; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v12; // [rsp+50h] [rbp-B0h]
  WCHAR pString[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  if ( !InternalGetWindowText(this[14], pString, 260) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x21E,
             (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
             v2);
  v4 = wcsnlen(pString, 0x104uLL);
  v12 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, pString, 0x104u, v4);
  v8 = 0LL;
  v9 = v12;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<TitleBarChangedEventArgs,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs,HSTRING__ *>(
         (__int64 *)&v8,
         &v9);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v9 = v8;
    v10 = this;
    v5 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<Win32BackedViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *>(
           this + 81,
           (__int64 *)&v10,
           (__int64 *)&v9);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      goto LABEL_9;
    }
    v7 = 549LL;
  }
  else
  {
    v7 = 548LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v5);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return v6;
}
