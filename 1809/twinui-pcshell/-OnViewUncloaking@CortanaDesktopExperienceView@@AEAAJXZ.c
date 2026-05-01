/*
 * XREFs of ?OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18000FE48
 * Callers:
 *     ?OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18000FDB0 (-OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@@Z @ 0x18000CF04 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000FFA4 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180014D04 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?GetViewWrapper@CortanaDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x180015F88 (-GetViewWrapper@CortanaDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@S.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180026320 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180027064 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CortanaDesktopExperienceView::OnViewUncloaking(CortanaDesktopExperienceView *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  HSTRING v4; // rdx
  int v5; // eax
  int v6; // eax
  __int64 v8; // rdx
  __int64 *ViewWrapper; // rax
  int v10; // eax
  struct Windows::Foundation::Collections::IPropertySet *v11; // [rsp+20h] [rbp-50h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v12; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v13[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v14 = -2LL;
  v11 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v16,
         &v11);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4CF,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v2,
      (int)v11);
    goto LABEL_9;
  }
  v12 = v11;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
  v4 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &off_1803C1420) + 24);
  v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)&v12,
         v4);
  v3 = v5;
  if ( v5 < 0 )
  {
    v8 = 1236LL;
  }
  else
  {
    v5 = CortanaDesktopExperienceView::NotifyView(this, L"NotifyCloakStateChanged", v11);
    v3 = v5;
    if ( v5 >= 0 )
    {
      if ( *((_BYTE *)this + 264) )
      {
        ViewWrapper = (__int64 *)CortanaDesktopExperienceView::GetViewWrapper(this, v13);
        v10 = CExperienceManagerAnimationHelper::Begin((__int64)this + 288, *ViewWrapper, 2097231LL);
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x4DA,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v10,
            (int)v11);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
      }
      else
      {
        v6 = CortanaDesktopExperienceView::PositionCortanaWindow(this, 1, 0);
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x4DF,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v6,
            (int)v11);
      }
      v3 = 0;
      goto LABEL_8;
    }
    v8 = 1238LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v5,
    (int)v11);
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v3;
}
