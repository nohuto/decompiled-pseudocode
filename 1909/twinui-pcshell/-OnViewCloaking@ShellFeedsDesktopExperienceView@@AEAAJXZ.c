/*
 * XREFs of ?OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009E0D4
 * Callers:
 *     ?OnViewChanged@ShellFeedsDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18009E000 (-OnViewChanged@ShellFeedsDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@I.c)
 * Callees:
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180017A94 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180017BC8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@C.c)
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
 *     ?UnhookKeyboard@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009FD38 (-UnhookKeyboard@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?UnhookMouse@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009FD70 (-UnhookMouse@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ShellFeedsDesktopExperienceView::OnViewCloaking(ShellFeedsDesktopExperienceView *this)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  int v4; // eax
  ShellFeedsDesktopExperienceView *v5; // rcx
  int v6; // eax
  ShellFeedsDesktopExperienceView *v7; // rcx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  HSTRING_HEADER *v11; // rax
  __int64 v12; // r8
  int AnimationClipRect; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // esi
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  __int64 *ViewWrapper; // rax
  int v23; // eax
  __int64 v25; // [rsp+48h] [rbp-19h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v26; // [rsp+50h] [rbp-11h] BYREF
  __int64 v27[2]; // [rsp+58h] [rbp-9h] BYREF
  HSTRING_HEADER pData; // [rsp+68h] [rbp+7h] BYREF
  __int64 v29; // [rsp+80h] [rbp+1Fh]
  __int64 *v30; // [rsp+88h] [rbp+27h]
  int v31; // [rsp+90h] [rbp+2Fh]
  int v32; // [rsp+94h] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v27[1] = -2LL;
  v2 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u && TlgKeywordOn(v2, 0x200000000000uLL) )
  {
    v25 = 0x1000000LL;
    v30 = &v25;
    v31 = 8;
    v32 = 0;
    TlgWrite(v3, &unk_1804ED45F, 0LL, 0LL, 3u, (EVENT_DATA_DESCRIPTOR *)&pData);
  }
  *((_BYTE *)this + 158) = 0;
  v4 = ShellFeedsDesktopExperienceView::NotifyTrayOfFlyoutVisibility((UINT *)this, 0);
  v5 = retaddr;
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x267,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v4);
  v6 = ShellFeedsDesktopExperienceView::UnhookMouse(v5);
  v7 = retaddr;
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x268,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v6);
  v8 = ShellFeedsDesktopExperienceView::UnhookKeyboard(v7);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x269,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v8);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
  v26 = 0LL;
  v29 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &pData,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v9 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v29,
         (__int64 *)&v26);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v25 = (__int64)v26;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v25);
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, (const WCHAR **)off_180451530);
    AnimationClipRect = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v25,
                          (HSTRING)v11[1].Reserved.Reserved1,
                          v12,
                          0);
    v10 = AnimationClipRect;
    if ( AnimationClipRect >= 0 )
    {
      AnimationClipRect = ShellFeedsDesktopExperienceView::NotifyView(this, L"NotifyCloakStateChanged", v26);
      v10 = AnimationClipRect;
      if ( AnimationClipRect >= 0 )
      {
        wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::ReportUsageToService(v16, v15, v17);
        v18 = 81;
        v19 = *((_DWORD *)this + 38);
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              if ( v21 == 1 )
                v18 = 80;
            }
            else
            {
              v18 = 78;
            }
          }
          else
          {
            v18 = 79;
          }
        }
        else
        {
          v18 = 77;
        }
        AnimationClipRect = ShellFeedsDesktopExperienceView::GetAnimationClipRect(this, (LPRECT)&pData);
        v10 = AnimationClipRect;
        if ( AnimationClipRect >= 0 )
        {
          ViewWrapper = ShellFeedsDesktopExperienceView::GetViewWrapper((__int64)this, v27);
          v23 = CExperienceManagerAnimationHelper::Begin(
                  (__int64)this + 208,
                  (ExperienceManagerUtils *)*ViewWrapper,
                  v18 | 0x20000000u,
                  0LL,
                  0);
          if ( v23 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x293,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
              (const char *)(unsigned int)v23);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v27);
          v10 = 0;
          goto LABEL_30;
        }
        v14 = 656LL;
      }
      else
      {
        v14 = 631LL;
      }
    }
    else
    {
      v14 = 629LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)AnimationClipRect);
LABEL_30:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x270,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)(unsigned int)v9);
LABEL_31:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
  return v10;
}
