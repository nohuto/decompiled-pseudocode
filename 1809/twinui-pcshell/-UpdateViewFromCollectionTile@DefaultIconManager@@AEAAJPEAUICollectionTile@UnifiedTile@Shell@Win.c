/*
 * XREFs of ?UpdateViewFromCollectionTile@DefaultIconManager@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180200D94
 * Callers:
 *     _lambda_2d66124cdfcf65a08201bdfe6f61e828_::operator() @ 0x1801FDAB4 (_lambda_2d66124cdfcf65a08201bdfe6f61e828_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIPackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@@?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIPackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800900F8 (--$query@UIPackagedUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@@-$com_ptr_t@UIUnifi.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?CreateShellTabIconForUnifiedTile@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUITileImageResourceOptions@567@@Z @ 0x1801FEA98 (-CreateShellTabIconForUnifiedTile@DefaultIconManager@@AEAA-AV-$com_ptr_t@UIShellTabImage@Tabs@Co.c)
 *     ?CreateTileLoadOptions@DefaultIconManager@@CAJHPEAPEAUITileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1801FED48 (-CreateTileLoadOptions@DefaultIconManager@@CAJHPEAPEAUITileImageResourceOptions@UnifiedTile@Shel.c)
 *     ?GetDefaultIconDpi@DefaultIconManager@@CAHXZ @ 0x1801FF078 (-GetDefaultIconDpi@DefaultIconManager@@CAHXZ.c)
 *     ?UpdateIconForAppUserModelId@DefaultIconManager@@AEAAJPEAUIShellTabImage@Tabs@ComposableShell@Internal@Windows@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180200830 (-UpdateIconForAppUserModelId@DefaultIconManager@@AEAAJPEAUIShellTabImage@Tabs@ComposableShell@In.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall DefaultIconManager::UpdateViewFromCollectionTile(
        DefaultIconManager *this,
        struct WindowsInternal::Shell::UnifiedTile::ICollectionTile *a2)
{
  int v3; // eax
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  unsigned int DefaultIconDpi; // eax
  int v8; // eax
  const char *v9; // r9
  int updated; // eax
  const char *v11; // r9
  __int64 result; // rax
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTabImage *v14; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING string; // [rsp+58h] [rbp+10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::ITileImageResourceOptions *v19; // [rsp+68h] [rbp+20h] BYREF

  v15[1] = -2LL;
  v18 = 0LL;
  try
  {
    v3 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 64LL))();
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        554LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
        (const char *)(unsigned int)v3);
    v13 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 48LL))(v18, &v13);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        557LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
        (const char *)(unsigned int)v4);
    wil::com_ptr_t<WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier,wil::err_exception_policy>::query<WindowsInternal::Shell::UnifiedTile::IPackagedUnifiedTileIdentifier>(
      &v13,
      (__int64)v15);
    string = 0LL;
    v5 = v15[0];
    WindowsDeleteString(0LL);
    string = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v5 + 48LL))(v5, &string);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        560LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
        (const char *)(unsigned int)v6);
    v19 = 0LL;
    DefaultIconDpi = DefaultIconManager::GetDefaultIconDpi();
    v8 = DefaultIconManager::CreateTileLoadOptions(DefaultIconDpi, &v19);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        563LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
        (const char *)(unsigned int)v8);
    DefaultIconManager::CreateShellTabIconForUnifiedTile((__int64)this, (__int64 *)&v14, v18, (__int64)v19);
    if ( v14 )
    {
      updated = DefaultIconManager::UpdateIconForAppUserModelId(
                  this,
                  v14,
                  (const struct Microsoft::WRL::Wrappers::HString *)&string,
                  v9);
      if ( updated < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          568LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
          (const char *)(unsigned int)updated);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v14);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v19);
    WindowsDeleteString(string);
    string = 0LL;
    if ( v15[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v13);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x23D,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
                           v11);
  }
  return result;
}
