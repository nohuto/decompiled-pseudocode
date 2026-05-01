/*
 * XREFs of ?GetShellItemForView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellItem@@@Z @ 0x1801DCED0
 * Callers:
 *     ?DuplicateTab@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z @ 0x1801DAEC0 (-DuplicateTab@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z.c)
 *     ?GetDisplayNameForShellTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAPEAUHSTRING__@@@Z @ 0x1801DC640 (-GetDisplayNameForShellTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Wind.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::GetApplicationViewImageName @ 0x1801DBE48 (_anonymous_namespace_--GetApplicationViewImageName.c)
 *     ?GetAumid@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801DBF84 (-GetAumid@@YA-AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabViewManager::GetShellItemForView(
        TabViewManager *this,
        struct IApplicationView *a2,
        struct IShellItem **a3)
{
  HRESULT v5; // eax
  LPVOID v6; // rbx
  PCWSTR StringRawBuffer; // rax
  HRESULT v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  const WCHAR *v11; // rax
  HRESULT v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  PCWSTR pszPath[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING string; // [rsp+50h] [rbp+8h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF
  LPVOID ppv; // [rsp+68h] [rbp+20h] BYREF

  string = (HSTRING)this;
  pszPath[1] = (PCWSTR)-2LL;
  *a3 = 0LL;
  ppv = 0LL;
  v5 = CoCreateInstance(&CLSID_StartMenuCacheAndAppResolver, 0LL, 3u, &GUID_de25675a_72de_44b4_9373_05170450c140, &ppv);
  try
  {
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3542LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v5);
    GetAumid(&string, (__int64)a2);
    (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
      a2,
      &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
      &v19);
    if ( v19 )
    {
      v6 = ppv;
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( (*(int (__fastcall **)(LPVOID, PCWSTR, struct IShellItem **))(*(_QWORD *)v6 + 64LL))(v6, StringRawBuffer, a3) < 0 )
      {
        anonymous_namespace_::GetApplicationViewImageName((void **)pszPath, v19);
        v8 = SHCreateItemFromParsingName(pszPath[0], 0LL, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, (void **)a3);
        if ( v8 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            3554LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v8);
        if ( pszPath[0] )
          CoTaskMemFree((LPVOID)pszPath[0]);
      }
    }
    else
    {
      v11 = WindowsGetStringRawBuffer(string, 0LL);
      v12 = SHCreateItemInKnownFolder(
              &FOLDERID_AppsFolder,
              0x4100u,
              v11,
              &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
              (void **)a3);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          3560LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v12);
        __debugbreak();
        return TabViewManager::GetShellItemForView_::_1_::dtor_0(v14, v13, v15);
      }
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
    WindowsDeleteString(string);
    string = 0LL;
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xDEC,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v9);
  }
  return result;
}
