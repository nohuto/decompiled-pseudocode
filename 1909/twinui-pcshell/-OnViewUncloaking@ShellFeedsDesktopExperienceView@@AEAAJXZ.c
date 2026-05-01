/*
 * XREFs of ?OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009EA9C
 * Callers:
 *     ?OnViewChanged@ShellFeedsDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18009E000 (-OnViewChanged@ShellFeedsDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@I.c)
 * Callees:
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180017A94 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180023D64 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x1800627A4 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800942E8 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?GetAnimationClipRect@ShellFeedsDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18009C8CC (-GetAnimationClipRect@ShellFeedsDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?GetViewWrapper@ShellFeedsDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18009D360 (-GetViewWrapper@ShellFeedsDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerIntero.c)
 *     ?NotifyTrayOfFlyoutVisibility@ShellFeedsDesktopExperienceView@@AEAAJ_N@Z @ 0x18009DB18 (-NotifyTrayOfFlyoutVisibility@ShellFeedsDesktopExperienceView@@AEAAJ_N@Z.c)
 *     ?NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009DBF4 (-NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ?PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009EE24 (-PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?ShellFeedsDesktopExperienceView_HookKeyboard@ShellFeedsTelemetry@@SAXXZ @ 0x18009F708 (-ShellFeedsDesktopExperienceView_HookKeyboard@ShellFeedsTelemetry@@SAXXZ.c)
 *     ?ShellFeedsDesktopExperienceView_HookMouse@ShellFeedsTelemetry@@SAXXZ @ 0x18009F798 (-ShellFeedsDesktopExperienceView_HookMouse@ShellFeedsTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ShellFeedsDesktopExperienceView::OnViewUncloaking(UINT *this)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  int v4; // eax
  signed int LastError; // eax
  signed int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  HSTRING_HEADER *v9; // rax
  __int64 v10; // r8
  int AnimationClipRect; // eax
  __int64 v12; // rdx
  int v13; // eax
  int v14; // edi
  UINT v15; // ecx
  UINT v16; // ecx
  UINT v17; // ecx
  __int64 *ViewWrapper; // rax
  int v19; // eax
  __int64 v21; // [rsp+48h] [rbp-29h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v22; // [rsp+50h] [rbp-21h] BYREF
  __int64 v23[2]; // [rsp+58h] [rbp-19h] BYREF
  struct tagRECT rcDst; // [rsp+68h] [rbp-9h] BYREF
  HSTRING_HEADER pData; // [rsp+78h] [rbp+7h] BYREF
  __int64 v26; // [rsp+90h] [rbp+1Fh]
  __int64 *v27; // [rsp+98h] [rbp+27h]
  int v28; // [rsp+A0h] [rbp+2Fh]
  int v29; // [rsp+A4h] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v23[1] = -2LL;
  v2 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u && TlgKeywordOn(v2, 0x200000000000uLL) )
  {
    v21 = 0x1000000LL;
    v27 = &v21;
    v28 = 8;
    v29 = 0;
    TlgWrite(v3, &unk_1804ED32F, 0LL, 0LL, 3u, (EVENT_DATA_DESCRIPTOR *)&pData);
  }
  v4 = ShellFeedsDesktopExperienceView::NotifyTrayOfFlyoutVisibility(this, 1u);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2D8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v4);
  if ( `anonymous namespace'::g_hMouseHook
    || (ShellFeedsTelemetry::ShellFeedsDesktopExperienceView_HookMouse(),
        (`anonymous namespace'::g_hMouseHook = SetWindowsHookExW(
                                                 14,
                                                 (HOOKPROC)ShellFeedsDesktopExperienceView::LowLevelMouseHookProc,
                                                 &_ImageBase,
                                                 0)) != 0LL) )
  {
    LastError = 0;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
  }
  if ( LastError < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2D9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)LastError);
  if ( `anonymous namespace'::g_hKeyboardHook
    || (ShellFeedsTelemetry::ShellFeedsDesktopExperienceView_HookKeyboard(),
        (`anonymous namespace'::g_hKeyboardHook = SetWindowsHookExW(
                                                    13,
                                                    (HOOKPROC)ShellFeedsDesktopExperienceView::LowLevelKeyboardHookProc,
                                                    &_ImageBase,
                                                    0)) != 0LL) )
  {
    v6 = 0;
  }
  else
  {
    v6 = GetLastError();
    if ( v6 > 0 )
      v6 = (unsigned __int16)v6 | 0x80070000;
  }
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2DA,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v6);
  v22 = 0LL;
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &pData,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v26,
         (__int64 *)&v22);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v21 = (__int64)v22;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, (const WCHAR **)off_180451530);
    AnimationClipRect = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v21,
                          (HSTRING)v9[1].Reserved.Reserved1,
                          v10,
                          1);
    v8 = AnimationClipRect;
    if ( AnimationClipRect >= 0 )
    {
      AnimationClipRect = ShellFeedsDesktopExperienceView::NotifyView(
                            (ShellFeedsDesktopExperienceView *)this,
                            L"NotifyCloakStateChanged",
                            v22);
      v8 = AnimationClipRect;
      if ( AnimationClipRect >= 0 )
      {
        v13 = ShellFeedsDesktopExperienceView::PositionShellFeedsWindow((ShellFeedsDesktopExperienceView *)this);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2E9,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
            (const char *)(unsigned int)v13);
        v14 = 81;
        v15 = this[38];
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              if ( v17 == 1 )
                v14 = 79;
            }
            else
            {
              v14 = 77;
            }
          }
          else
          {
            v14 = 80;
          }
        }
        else
        {
          v14 = 78;
        }
        AnimationClipRect = ShellFeedsDesktopExperienceView::GetAnimationClipRect(
                              (ShellFeedsDesktopExperienceView *)this,
                              &rcDst);
        v8 = AnimationClipRect;
        if ( AnimationClipRect >= 0 )
        {
          ViewWrapper = ShellFeedsDesktopExperienceView::GetViewWrapper((__int64)this, v23);
          v19 = CExperienceManagerAnimationHelper::Begin(
                  (__int64)(this + 44),
                  (ExperienceManagerUtils *)*ViewWrapper,
                  v14 | 0x200000u,
                  0LL,
                  0);
          if ( v19 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x303,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
              (const char *)(unsigned int)v19);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
          v8 = 0;
          goto LABEL_42;
        }
        v12 = 768LL;
      }
      else
      {
        v12 = 742LL;
      }
    }
    else
    {
      v12 = 740LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)AnimationClipRect);
LABEL_42:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    goto LABEL_43;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2DF,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)(unsigned int)v7);
LABEL_43:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  return v8;
}
