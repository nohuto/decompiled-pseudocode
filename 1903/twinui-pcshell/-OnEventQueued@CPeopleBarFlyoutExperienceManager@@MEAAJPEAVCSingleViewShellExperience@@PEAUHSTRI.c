/*
 * XREFs of ?OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18018FD40
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002D758 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18003C2A8 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18003F9F4 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA @ 0x1800B3F20 (--_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA.c)
 *     ?HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ @ 0x18018F6C0 (-HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ.c)
 *     ?SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x180190AD0 (-SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnEventQueued(
        CPeopleBarFlyoutExperienceManager *this,
        ExperienceManagerUtils **a2,
        Microsoft::WRL::Wrappers::Details *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  HSTRING_HEADER *v8; // rax
  HSTRING v9; // r8
  HSTRING_HEADER *v10; // rbx
  HSTRING Reserved1; // rdx
  int PropVal; // ebx
  HSTRING v13; // r8
  int v14; // eax
  struct Windows::Foundation::IPropertyValue *v15; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v16; // rdx
  HWND v17; // rbx
  const WCHAR *StringRawBuffer; // rax
  HSTRING_HEADER *v20; // rax
  HSTRING v21; // r8
  CPeopleBarFlyoutExperienceManager *v22; // rcx
  int v23; // eax
  int v24; // eax
  unsigned int v25; // ebx
  struct Windows::Foundation::IPropertyValue *v26; // [rsp+28h] [rbp-48h] BYREF
  __int64 v27[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER v28; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v27[1] = -2LL;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v28, (const WCHAR **)off_180467870);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, (HSTRING)v8[1].Reserved.Reserved1, v9) )
  {
    v27[0] = (__int64)a4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v27);
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v28, (const WCHAR **)off_180467868);
    WindowsDeleteString(0LL);
    Reserved1 = (HSTRING)v10[1].Reserved.Reserved1;
    v26 = 0LL;
    PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)v27,
                Reserved1,
                &v26);
    if ( PropVal >= 0 )
    {
      v14 =  Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::`vcall'{152,{flat}}((__int64)v26);
      PropVal = v14;
      if ( v14 >= 0 )
      {
        v15 = v26;
        if ( v26 )
        {
          v26 = 0LL;
          (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v15 + 16LL))(v15);
        }
        PropVal = 0;
        goto LABEL_9;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v14);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
LABEL_9:
    if ( PropVal >= 0 )
    {
      if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(0LL, 0LL, v13) )
      {
        v17 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v16);
        StringRawBuffer = WindowsGetStringRawBuffer(0LL, 0LL);
        SetWindowTextW(v17, StringRawBuffer);
      }
    }
    WindowsDeleteString(0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v27);
    return 0LL;
  }
  v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v28, (const WCHAR **)off_180467878);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                       a3,
                       (HSTRING)v20[1].Reserved.Reserved1,
                       v21) )
    return 0LL;
  v23 = CPeopleBarFlyoutExperienceManager::SendFocusToTray(v22);
  if ( v23 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2EB,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v23);
  v24 = CPeopleBarFlyoutExperienceManager::HideFlyout((CPeopleBarFlyoutExperienceManager *)((char *)this - 64));
  v25 = v24;
  if ( v24 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2ED,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
    (const char *)(unsigned int)v24);
  return v25;
}
