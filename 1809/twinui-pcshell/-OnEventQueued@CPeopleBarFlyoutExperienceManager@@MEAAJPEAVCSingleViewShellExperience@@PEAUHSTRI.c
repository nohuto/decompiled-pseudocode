/*
 * XREFs of ?OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180163500
 * Callers:
 *     <none>
 * Callees:
 *     ??8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z @ 0x180021DE8 (--8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180025DAC (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18002785C (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003F6A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA @ 0x18009DF9C (--_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA.c)
 *     ?HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ @ 0x180162E30 (-HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ.c)
 *     ?SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x180164214 (-SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnEventQueued(
        CPeopleBarFlyoutExperienceManager *this,
        ExperienceManagerUtils **a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  HSTRING_HEADER *v7; // rax
  HSTRING_HEADER *v8; // rbx
  HSTRING Reserved1; // rdx
  int PropVal; // ebx
  HSTRING v11; // r8
  int v12; // eax
  struct Windows::Foundation::IPropertyValue *v13; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v14; // rdx
  HWND v15; // rbx
  const WCHAR *StringRawBuffer; // rax
  HSTRING_HEADER *v18; // rax
  CPeopleBarFlyoutExperienceManager *v19; // rcx
  int v20; // eax
  int v21; // eax
  unsigned int v22; // ebx
  struct Windows::Foundation::IPropertyValue *v23; // [rsp+28h] [rbp-48h] BYREF
  HSTRING v24[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER v25; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v24[1] = (HSTRING)-2LL;
  v24[0] = a3;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, (const WCHAR **)&off_180400078);
  if ( Microsoft::WRL::Wrappers::operator==(v24, (__int64)v7) )
  {
    v24[0] = (HSTRING)a4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v24);
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, (const WCHAR **)&off_180400070);
    WindowsDeleteString(0LL);
    Reserved1 = (HSTRING)v8[1].Reserved.Reserved1;
    v23 = 0LL;
    PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)v24,
                Reserved1,
                &v23);
    if ( PropVal >= 0 )
    {
      v12 =  Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::`vcall'{152,{flat}}((__int64)v23);
      PropVal = v12;
      if ( v12 >= 0 )
      {
        v13 = v23;
        if ( v23 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v13 + 16LL))(v13);
        }
        PropVal = 0;
        goto LABEL_9;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v12);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
LABEL_9:
    if ( PropVal >= 0 )
    {
      if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(0LL, 0LL, v11) )
      {
        v15 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v14);
        StringRawBuffer = WindowsGetStringRawBuffer(0LL, 0LL);
        SetWindowTextW(v15, StringRawBuffer);
      }
    }
    WindowsDeleteString(0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
    return 0LL;
  }
  v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, (const WCHAR **)&off_180400068);
  if ( !Microsoft::WRL::Wrappers::operator==(v24, (__int64)v18) )
    return 0LL;
  v20 = CPeopleBarFlyoutExperienceManager::SendFocusToTray(v19);
  if ( v20 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      747LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v20);
  v21 = CPeopleBarFlyoutExperienceManager::HideFlyout((CPeopleBarFlyoutExperienceManager *)((char *)this - 64));
  v22 = v21;
  if ( v21 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2ED,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
    (const char *)(unsigned int)v21);
  return v22;
}
