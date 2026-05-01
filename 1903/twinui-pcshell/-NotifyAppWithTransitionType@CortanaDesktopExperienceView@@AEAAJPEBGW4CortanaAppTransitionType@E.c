/*
 * XREFs of ?NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1800418C8
 * Callers:
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180051870 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 *     ?Relaunch@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180054588 (-Relaunch@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experienc.c)
 *     ?PrepareForAppTransition@CortanaDesktopExperienceView@@UEAAJW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1801D08B0 (-PrepareForAppTransition@CortanaDesktopExperienceView@@UEAAJW4CortanaAppTransitionType@Experienc.c)
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003AD54 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800428D8 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x18007B4C8 (--$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x18007D550 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaDesktopExperienceView::NotifyAppWithTransitionType(
        CortanaDesktopExperienceView *a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  HSTRING Reserved1; // rdx
  int v9; // eax
  HSTRING v10; // rdx
  HSTRING_HEADER *v11; // rax
  __int64 v13; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v14; // [rsp+20h] [rbp-50h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v15; // [rsp+28h] [rbp-48h] BYREF
  const WCHAR *v16[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v16[1] = (const WCHAR *)-2LL;
  v16[0] = a2;
  v15 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v6 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v18,
         (__int64 *)&v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE6,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v6,
      (int)v14);
    goto LABEL_8;
  }
  v14 = v15;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
  if ( a4 )
  {
    Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                           &hstringHeader,
                           (const WCHAR **)&off_18042C680)[1].Reserved.Reserved1;
    v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v14,
           Reserved1);
    v7 = v9;
    if ( v9 < 0 )
    {
      v13 = 3053LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v9,
        (int)v14);
      goto LABEL_7;
    }
  }
  v10 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                   &hstringHeader,
                   (const WCHAR **)&off_18042C648)[1].Reserved.Reserved1;
  v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)&v14,
         v10);
  v7 = v9;
  if ( v9 < 0 )
  {
    v13 = 3058LL;
    goto LABEL_13;
  }
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v16);
  v9 = CortanaDesktopExperienceView::NotifyView(a1, (HSTRING)v11[1].Reserved.Reserved1, v15);
  v7 = v9;
  if ( v9 < 0 )
  {
    v13 = 3060LL;
    goto LABEL_13;
  }
  v7 = 0;
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return v7;
}
