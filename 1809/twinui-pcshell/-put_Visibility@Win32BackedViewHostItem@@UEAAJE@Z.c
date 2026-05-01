/*
 * XREFs of ?put_Visibility@Win32BackedViewHostItem@@UEAAJE@Z @ 0x1801C1220
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$AsyncInvokeAll@PEAVWin32BackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVWin32BackedViewHostItem@@AEBQEAVPresentationReadyChangedEventArgs@@@Z @ 0x1801BAE44 (--$AsyncInvokeAll@PEAVWin32BackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@-$AsyncEv.c)
 *     ??$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVPresentationReadyChangedEventArgs@@AEA_N@Z @ 0x1801BB934 (--$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAP.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x1801BE650 (-InternalRelease@-$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_CloseWin32ExclusivesOnHide@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801BFC60 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_CloseWin32ExclusivesOnHide@@@wil@@CA.c)
 *     ?TryClose@Win32BackedViewHostItem@@UEAAJE@Z @ 0x1801C03D0 (-TryClose@Win32BackedViewHostItem@@UEAAJE@Z.c)
 *     _anonymous_namespace_::_DisplayInHeadset @ 0x1801C06F8 (_anonymous_namespace_--_DisplayInHeadset.c)
 *     ?_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@@AEAAJXZ @ 0x1801C0908 (-_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@@AEAAJXZ.c)
 *     ?get_FrameworkViewType@Win32BackedViewHostItem@@UEAAJPEAH@Z @ 0x1801C0FC0 (-get_FrameworkViewType@Win32BackedViewHostItem@@UEAAJPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32BackedViewHostItem::put_Visibility(HWND *this, char a2)
{
  const char *v4; // r9
  bool v6; // zf
  int ready; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  __int64 v21; // [rsp+60h] [rbp+28h] BYREF
  int v22; // [rsp+68h] [rbp+30h] BYREF
  __int64 v23; // [rsp+70h] [rbp+38h] BYREF
  HWND *v24; // [rsp+78h] [rbp+40h] BYREF

  if ( !PostMessageW(this[14], 0x18u, a2 != 0, 0LL) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x91,
             (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
             v4);
  v6 = a2 == 0;
  if ( !a2 )
  {
    v21 = 0LL;
    LOBYTE(v22) = 0;
    Microsoft::WRL::ComPtr<CVirtualDesktop>::InternalRelease(&v21);
    ready = Microsoft::WRL::Details::MakeAndInitialize<PresentationReadyChangedEventArgs,PresentationReadyChangedEventArgs,bool &>(
              &v21,
              &v22);
    v8 = ready;
    if ( ready < 0 )
    {
      v9 = 154LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)(unsigned int)ready);
      Microsoft::WRL::ComPtr<CVirtualDesktop>::InternalRelease(&v21);
      return v8;
    }
    v23 = v21;
    v24 = this;
    ready = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<Win32BackedViewHostItem *,PresentationReadyChangedEventArgs *>(
              this + 49,
              (__int64 *)&v24,
              &v23);
    v8 = ready;
    if ( ready < 0 )
    {
      v9 = 155LL;
      goto LABEL_8;
    }
    if ( (unsigned __int8)GetPropW(this[14], L"Windows.Graphics.Holographic.DisableForegroundOnPresence") )
    {
      if ( anonymous_namespace_::_DisplayInHeadset(v11, v10, v12, v13) )
      {
        v14 = (*(__int64 (__fastcall **)(HWND))(*(_QWORD *)this[17] + 56LL))(this[17]);
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            162LL,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
            (const char *)(unsigned int)v14);
      }
    }
    Microsoft::WRL::ComPtr<CVirtualDesktop>::InternalRelease(&v21);
    v6 = 1;
  }
  *((_BYTE *)this + 320) = !v6;
  Win32BackedViewHostItem::_RaiseTitleBarChangedEvent(this);
  if ( a2 )
    return 0LL;
  wil::Feature<__WilFeatureTraits_Feature_CloseWin32ExclusivesOnHide>::ReportUsageToService(v16, v15, v17);
  if ( !SHRegGetBoolValueFromHKCUHKLM(
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Holographic",
          L"CloseWin32ExclusivesOnHide",
          1) )
    return 0LL;
  if ( (int)Win32BackedViewHostItem::get_FrameworkViewType((Win32BackedViewHostItem *)this, &v22) < 0 )
    return 0LL;
  if ( v22 != 1 )
    return 0LL;
  v18 = Win32BackedViewHostItem::TryClose(this);
  v19 = v18;
  if ( v18 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB7,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v18);
  return v19;
}
