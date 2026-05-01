/*
 * XREFs of ?NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x18002617C
 * Callers:
 *     ?Relaunch@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800103DC (-Relaunch@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experienc.c)
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18001DE50 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 *     ?PrepareForAppTransition@CortanaDesktopExperienceView@@UEAAJW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800808F0 (-PrepareForAppTransition@CortanaDesktopExperienceView@@UEAAJW4CortanaAppTransitionType@Experienc.c)
 * Callees:
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18001001C (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x180071804 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ??$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x180075A7C (--$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaDesktopExperienceView::NotifyAppWithTransitionType(
        CortanaDesktopExperienceView *a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbx
  int v7; // ebx
  __int64 v8; // rax
  struct Windows::Foundation::Collections::IPropertySet *v9; // rax
  HSTRING Reserved1; // rdx
  int v11; // eax
  HSTRING v12; // rdx
  HSTRING_HEADER *v13; // rax
  __int64 v15; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v16; // [rsp+20h] [rbp-50h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v17; // [rsp+28h] [rbp-48h] BYREF
  const WCHAR *v18[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v20; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v18[1] = (const WCHAR *)-2LL;
  v18[0] = a2;
  v17 = 0LL;
  v20 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v6 = v20;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  v17 = 0LL;
  v7 = RoActivateInstance(v6, &v16);
  if ( v7 < 0 )
    goto LABEL_19;
  v8 = *(_QWORD *)&GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data1
     - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
  if ( *(_QWORD *)&GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
    v8 = *(_QWORD *)GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data4
       - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
  if ( v8 )
  {
    v7 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))v16)(
           v16,
           &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
           &v17);
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v16 + 16LL))(v16);
    v9 = v17;
  }
  else
  {
    v9 = v16;
    v17 = v16;
  }
  if ( v7 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA7F,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v7,
      (int)v16);
    goto LABEL_13;
  }
  v16 = v9;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
  if ( a4 )
  {
    Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                           &hstringHeader,
                           (const WCHAR **)&off_1803C8C40)[1].Reserved.Reserved1;
    v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v16,
            Reserved1);
    v7 = v11;
    if ( v11 < 0 )
    {
      v15 = 2694LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v11,
        (int)v16);
      goto LABEL_12;
    }
  }
  v12 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                   &hstringHeader,
                   (const WCHAR **)&off_1803C8C20)[1].Reserved.Reserved1;
  v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v16,
          v12);
  v7 = v11;
  if ( v11 < 0 )
  {
    v15 = 2699LL;
    goto LABEL_18;
  }
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v18);
  v11 = CortanaDesktopExperienceView::NotifyView(a1, (HSTRING)v13[1].Reserved.Reserved1, v17);
  v7 = v11;
  if ( v11 < 0 )
  {
    v15 = 2701LL;
    goto LABEL_18;
  }
  v7 = 0;
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return (unsigned int)v7;
}
