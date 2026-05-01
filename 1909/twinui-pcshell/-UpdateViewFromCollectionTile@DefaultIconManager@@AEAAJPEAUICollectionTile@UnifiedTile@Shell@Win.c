/*
 * XREFs of ?UpdateViewFromCollectionTile@DefaultIconManager@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18027348C
 * Callers:
 *     _lambda_2d66124cdfcf65a08201bdfe6f61e828_::operator() @ 0x18027024C (_lambda_2d66124cdfcf65a08201bdfe6f61e828_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIPackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@@?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIPackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A6D40 (--$query@UIPackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@@-$com_ptr_t@UIUnifi.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?CreateShellTabIconForUnifiedTile@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUITileImageResourceOptions@567@@Z @ 0x180271234 (-CreateShellTabIconForUnifiedTile@DefaultIconManager@@AEAA-AV-$com_ptr_t@UIShellTabImage@Tabs@Co.c)
 *     ?CreateTileLoadOptions@DefaultIconManager@@CAJHPEAPEAUITileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1802714F0 (-CreateTileLoadOptions@DefaultIconManager@@CAJHPEAPEAUITileImageResourceOptions@UnifiedTile@Shel.c)
 *     ?GetDefaultIconDpi@DefaultIconManager@@CAHXZ @ 0x180271830 (-GetDefaultIconDpi@DefaultIconManager@@CAHXZ.c)
 *     ?UpdateIconForAppUserModelId@DefaultIconManager@@AEAAJPEAUIShellTabImage@Tabs@ComposableShell@Internal@Windows@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180272F18 (-UpdateIconForAppUserModelId@DefaultIconManager@@AEAAJPEAUIShellTabImage@Tabs@ComposableShell@In.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall DefaultIconManager::UpdateViewFromCollectionTile(
        DefaultIconManager *this,
        struct WindowsInternal::Shell::UnifiedTile::ICollectionTile *a2)
{
  __int64 v3; // rax
  __int64 (*v4)(void); // rax
  int v5; // eax
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, HSTRING *); // rdi
  int v10; // eax
  unsigned int DefaultIconDpi; // eax
  int v12; // eax
  const char *v13; // r9
  int updated; // eax
  const char *v15; // r9
  __int64 result; // rax
  struct WindowsInternal::Shell::UnifiedTile::ITileImageResourceOptions *v17; // [rsp+20h] [rbp-38h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTabImage *v18; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v19[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING string; // [rsp+68h] [rbp+10h] BYREF
  __int64 v22; // [rsp+70h] [rbp+18h] BYREF
  __int64 *v23; // [rsp+78h] [rbp+20h] BYREF

  v19[1] = -2LL;
  v3 = *(_QWORD *)a2;
  v23 = 0LL;
  v4 = *(__int64 (**)(void))(v3 + 64);
  try
  {
    v5 = v4();
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        554LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
        (const char *)(unsigned int)v5);
    v22 = 0LL;
    v6 = *v23;
    v22 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v6 + 48))(v23, &v22);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        557LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
        (const char *)(unsigned int)v7);
    wil::com_ptr_t<WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier,wil::err_exception_policy>::query<WindowsInternal::Shell::UnifiedTile::IPackagedUnifiedTileIdentifier>(
      &v22,
      (__int64)v19);
    string = 0LL;
    v8 = v19[0];
    v9 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v19[0] + 48LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v10 = v9(v8, &string);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        560LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
        (const char *)(unsigned int)v10);
    v17 = 0LL;
    DefaultIconDpi = DefaultIconManager::GetDefaultIconDpi();
    v12 = DefaultIconManager::CreateTileLoadOptions(DefaultIconDpi, &v17);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        563LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
        (const char *)(unsigned int)v12);
    DefaultIconManager::CreateShellTabIconForUnifiedTile((__int64)this, (__int64 *)&v18, v23, (__int64)v17);
    if ( v18 )
    {
      updated = DefaultIconManager::UpdateIconForAppUserModelId(
                  this,
                  v18,
                  (const struct Microsoft::WRL::Wrappers::HString *)&string,
                  v13);
      if ( updated < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          568LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
          (const char *)(unsigned int)updated);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v17);
    WindowsDeleteString(string);
    string = 0LL;
    if ( v19[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19[0] + 16LL))(v19[0]);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v22);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v23);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(string) = wil::details::in1diag3::Return_CaughtException(
                        retaddr,
                        (void *)0x23D,
                        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
                        v15);
    return (unsigned int)string;
  }
  return result;
}
