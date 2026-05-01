/*
 * XREFs of ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x180189970
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000FFA4 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180026320 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180027064 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x18007BA08 (-GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetAppsUseLightTheme@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x18007BAB4 (-GetAppsUseLightTheme@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?IsColorSchemeChangeMessage@CImmersiveColor@@SA_NI_J@Z @ 0x180189174 (-IsColorSchemeChangeMessage@CImmersiveColor@@SA_NI_J@Z.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180189C40 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnMessage(
        CortanaDesktopExperienceView *this,
        int a2,
        char *a3,
        const WCHAR *a4)
{
  char *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  CortanaDesktopExperienceView *v10; // rcx
  char v11; // bl
  HSTRING_HEADER *v12; // rax
  __int64 v13; // r8
  int v14; // eax
  CortanaDesktopExperienceView *v15; // rcx
  __int64 v16; // rdx
  char v17; // bl
  HSTRING_HEADER *v18; // rax
  __int64 v19; // r8
  struct Windows::Foundation::Collections::IPropertySet *v20; // [rsp+20h] [rbp-40h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v21[2]; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v21[1] = (struct Windows::Foundation::Collections::IPropertySet *)-2LL;
  if ( a2 != 1025 )
  {
    if ( a2 != 26 || !CImmersiveColor::IsColorSchemeChangeMessage(26, a4) )
      return 0LL;
    v21[0] = 0LL;
    v23 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v9 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v23,
           v21);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v20 = v21[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
      v11 = CortanaDesktopExperienceView::GetColorPrevalenceEnabled(v10) != 0;
      v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1804001B8);
      v14 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v20,
              (HSTRING)v12[1].Reserved.Reserved1,
              v13,
              v11);
      v7 = v14;
      if ( v14 >= 0 )
      {
        v17 = CortanaDesktopExperienceView::GetAppsUseLightTheme(v15) != 0;
        v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                &hstringHeader,
                (const WCHAR **)&off_180400198);
        v14 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v20,
                (HSTRING)v18[1].Reserved.Reserved1,
                v19,
                v17);
        v7 = v14;
        if ( v14 >= 0 )
        {
          v14 = CortanaDesktopExperienceView::NotifyView(
                  (CortanaDesktopExperienceView *)((char *)this - 40),
                  L"NotifyThemeChange",
                  v21[0]);
          v7 = v14;
          if ( v14 >= 0 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
            return 0LL;
          }
          v16 = 826LL;
        }
        else
        {
          v16 = 824LL;
        }
      }
      else
      {
        v16 = 823LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x334,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
    return v7;
  }
  v5 = (char *)this - 40;
  if ( a3 == v5 )
  {
    v6 = CortanaDesktopExperienceView::OnTargetedMessage(v5, (unsigned __int16)a4, (unsigned __int64)a4 >> 16);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32B,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  return 0LL;
}
