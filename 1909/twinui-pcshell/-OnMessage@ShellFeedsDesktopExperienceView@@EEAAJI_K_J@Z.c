/*
 * XREFs of ?OnMessage@ShellFeedsDesktopExperienceView@@EEAAJI_K_J@Z @ 0x18009DC90
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180023D64 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180062390 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x1800627A4 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??$call@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@?$factory_cache_entry@UUISettings@ViewManagement@UI@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?AUUISettings@ViewManagement@UI@Windows@2@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@Z @ 0x18009B8F0 (--$call@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@-$factory_cache_entry@UUISettings@ViewMa.c)
 *     ?GetAppsUseLightTheme@ShellFeedsDesktopExperienceView@@AEAA_NXZ @ 0x18009CA54 (-GetAppsUseLightTheme@ShellFeedsDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetColorPrevalenceEnabled@ShellFeedsDesktopExperienceView@@AEAA_NXZ @ 0x18009CBE8 (-GetColorPrevalenceEnabled@ShellFeedsDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetColorValue@?$consume_Windows_UI_ViewManagement_IUISettings3@UUISettings@ViewManagement@UI@Windows@winrt@@@impl@winrt@@QEBA?AUColor@UI@Windows@3@AEBW4UIColorType@ViewManagement@563@@Z @ 0x18009CCB4 (-GetColorValue@-$consume_Windows_UI_ViewManagement_IUISettings3@UUISettings@ViewManagement@UI@Wi.c)
 *     ?NotifyShellModeChanged@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009D9C0 (-NotifyShellModeChanged@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009DBF4 (-NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A190C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?IsColorSchemeChangeMessage@CImmersiveColor@@SA_NI_J@Z @ 0x1801ED48C (-IsColorSchemeChangeMessage@CImmersiveColor@@SA_NI_J@Z.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::OnMessage(
        ShellFeedsDesktopExperienceView *this,
        int a2,
        char *a3,
        __int64 a4)
{
  ShellFeedsDesktopExperienceView *v5; // rcx
  unsigned int v6; // ebx
  __int64 v8; // rcx
  int v9; // eax
  ShellFeedsDesktopExperienceView *v10; // rcx
  char v11; // bl
  HSTRING_HEADER *v12; // rax
  __int64 v13; // r8
  int v14; // eax
  ShellFeedsDesktopExperienceView *v15; // rcx
  __int64 v16; // rdx
  char v17; // bl
  HSTRING_HEADER *v18; // rax
  __int64 v19; // r8
  HSTRING_HEADER *v20; // rax
  __int64 v21; // r8
  struct Windows::Foundation::Collections::IPropertySet *v22; // [rsp+20h] [rbp-50h] BYREF
  int v23; // [rsp+28h] [rbp-48h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v24; // [rsp+30h] [rbp-40h] BYREF
  void (__fastcall ***v25[2])(_QWORD, void *, __int64 *); // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v27; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v25[1] = (void (__fastcall ***)(_QWORD, void *, __int64 *))-2LL;
  if ( a2 != 1025 )
  {
    if ( a2 != 26 || !CImmersiveColor::IsColorSchemeChangeMessage(0x1Au, a4) )
      return 0LL;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory>::call<_lambda_f92aa4e0a61c3892856266e5a8e834f7_ &>(
      v8,
      v25);
    LODWORD(v22) = 5;
    winrt::impl::consume_Windows_UI_ViewManagement_IUISettings3<winrt::Windows::UI::ViewManagement::UISettings>::GetColorValue(
      v25,
      &v23,
      (unsigned int *)&v22);
    v24 = 0LL;
    v27 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v9 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v27,
           (__int64 *)&v24);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v22 = v24;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
      v11 = ShellFeedsDesktopExperienceView::GetColorPrevalenceEnabled(v10) != 0;
      v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_180451540);
      v14 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
              (HSTRING)v12[1].Reserved.Reserved1,
              v13,
              v11);
      v6 = v14;
      if ( v14 >= 0 )
      {
        v17 = ShellFeedsDesktopExperienceView::GetAppsUseLightTheme(v15) != 0;
        v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                &hstringHeader,
                (const WCHAR **)off_180451538);
        v14 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
                (HSTRING)v18[1].Reserved.Reserved1,
                v19,
                v17);
        v6 = v14;
        if ( v14 >= 0 )
        {
          v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  &hstringHeader,
                  (const WCHAR **)off_180451500);
          v14 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
                  (HSTRING)v20[1].Reserved.Reserved1,
                  v21,
                  BYTE1(v23) | ((BYTE2(v23) | ((HIBYTE(v23) | ((unsigned __int8)v23 << 8)) << 8)) << 8));
          v6 = v14;
          if ( v14 >= 0 )
          {
            v14 = ShellFeedsDesktopExperienceView::NotifyView(
                    (ShellFeedsDesktopExperienceView *)((char *)this - 32),
                    L"NotifyThemeChange",
                    v24);
            v6 = v14;
            if ( v14 >= 0 )
            {
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
              winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(v25);
              return 0LL;
            }
            v16 = 524LL;
          }
          else
          {
            v16 = 523LL;
          }
        }
        else
        {
          v16 = 522LL;
        }
      }
      else
      {
        v16 = 521LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x206,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
        (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(v25);
    return v6;
  }
  v5 = (ShellFeedsDesktopExperienceView *)((char *)this - 32);
  if ( a3 == (char *)v5 )
  {
    if ( (_WORD)a4 )
    {
      v6 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x356,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
        (const char *)0x8000FFFFLL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FB,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
        (const char *)0x8000FFFFLL);
      return v6;
    }
    *((_BYTE *)v5 + 156) = WORD1(a4) != 0;
    ShellFeedsDesktopExperienceView::NotifyShellModeChanged(v5);
  }
  return 0LL;
}
