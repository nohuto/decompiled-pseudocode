/*
 * XREFs of ?OnEventQueued@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180090FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18003C2A8 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18003F9F4 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?GetViewWindow@CBaseTrayFlyoutExperienceManager@@QEAAJPEAPEAUHWND__@@@Z @ 0x180090404 (-GetViewWindow@CBaseTrayFlyoutExperienceManager@@QEAAJPEAPEAUHWND__@@@Z.c)
 *     ?HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ @ 0x1800906F8 (-HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA @ 0x1800B3F20 (--_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnEventQueued(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        Microsoft::WRL::Wrappers::Details *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  int PropVal; // ebx
  HSTRING_HEADER *v9; // rax
  HSTRING v10; // r8
  HSTRING_HEADER *v11; // rbx
  HSTRING Reserved1; // rbx
  HSTRING v13; // r8
  int v14; // eax
  const WCHAR *StringRawBuffer; // rax
  HSTRING_HEADER *v16; // rax
  HSTRING v17; // r8
  __int64 v18; // rcx
  HSTRING string; // [rsp+30h] [rbp-29h] BYREF
  HWND hWnd; // [rsp+38h] [rbp-21h] BYREF
  __int64 v22[2]; // [rsp+40h] [rbp-19h] BYREF
  HSTRING_HEADER v23; // [rsp+50h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v22[1] = -2LL;
  PropVal = 0;
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, (const WCHAR **)off_180431440);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a3,
                        (HSTRING)v9[1].Reserved.Reserved1,
                        v10) )
  {
    v22[0] = (__int64)a4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v22);
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, (const WCHAR **)off_180431430);
    WindowsDeleteString(0LL);
    string = 0LL;
    Reserved1 = (HSTRING)v11[1].Reserved.Reserved1;
    string = 0LL;
    hWnd = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
    PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)v22,
                Reserved1,
                (struct Windows::Foundation::IPropertyValue **)&hWnd);
    if ( PropVal >= 0 )
    {
      v14 =  Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::`vcall'{152,{flat}}(hWnd, &string);
      PropVal = v14;
      if ( v14 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
        PropVal = 0;
LABEL_7:
        if ( PropVal >= 0 )
        {
          if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                               (Microsoft::WRL::Wrappers::Details *)string,
                               0LL,
                               v13) )
          {
            PropVal = CBaseTrayFlyoutExperienceManager::GetViewWindow(
                        (CBaseTrayFlyoutExperienceManager *)((char *)this - 48),
                        &hWnd);
            if ( PropVal >= 0 )
            {
              StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
              SetWindowTextW(hWnd, StringRawBuffer);
            }
          }
        }
        WindowsDeleteString(string);
        string = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v22);
        goto LABEL_14;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v14);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
    goto LABEL_7;
  }
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, (const WCHAR **)off_180431438);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a3,
                        (HSTRING)v16[1].Reserved.Reserved1,
                        v17) )
    CBaseTrayFlyoutExperienceManager::HideFlyout((CBaseTrayFlyoutExperienceManager *)((char *)this - 48));
LABEL_14:
  v18 = *((_QWORD *)this + 40);
  if ( v18 )
    (*(void (__fastcall **)(__int64, struct CSingleViewShellExperience *, Microsoft::WRL::Wrappers::Details *, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v18 + 88LL))(
      v18,
      a2,
      a3,
      a4);
  return (unsigned int)PropVal;
}
