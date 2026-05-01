/*
 * XREFs of ?UpdateImageCache@DefaultIconManager@@AEAAJXZ @ 0x180200A54
 * Callers:
 *     ?OnMessage@DefaultIconManager@@UEAAJI_K_J@Z @ 0x1801FFA70 (-OnMessage@DefaultIconManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18001B5FC (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801D5F9C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     ??$_Try_emplace@VHString@Wrappers@WRL@Microsoft@@$$V@?$map@VHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@8@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@$$QEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1801FCFD0 (--$_Try_emplace@VHString@Wrappers@WRL@Microsoft@@$$V@-$map@VHString@Wrappers@WRL@Microsoft@@V-$c.c)
 *     ?CreateShellTabIconForUnifiedTile@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUITileImageResourceOptions@567@@Z @ 0x1801FEA98 (-CreateShellTabIconForUnifiedTile@DefaultIconManager@@AEAA-AV-$com_ptr_t@UIShellTabImage@Tabs@Co.c)
 *     ?CreateTileLoadOptions@DefaultIconManager@@CAJHPEAPEAUITileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1801FED48 (-CreateTileLoadOptions@DefaultIconManager@@CAJHPEAPEAUITileImageResourceOptions@UnifiedTile@Shel.c)
 *     ?GetDefaultIconDpi@DefaultIconManager@@CAHXZ @ 0x1801FF078 (-GetDefaultIconDpi@DefaultIconManager@@CAHXZ.c)
 *     ?UpdateIconForAppUserModelId@DefaultIconManager@@AEAAJPEAUIShellTabImage@Tabs@ComposableShell@Internal@Windows@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180200830 (-UpdateIconForAppUserModelId@DefaultIconManager@@AEAAJPEAUIShellTabImage@Tabs@ComposableShell@In.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall DefaultIconManager::UpdateImageCache(DefaultIconManager *this)
{
  DefaultIconManager *v1; // rsi
  _BYTE *v2; // r14
  unsigned int DefaultIconDpi; // eax
  int v4; // eax
  unsigned int v5; // ebx
  _QWORD *v7; // rbx
  __int64 v8; // rax
  HSTRING *v9; // r13
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v15; // r12
  const char *v16; // r9
  int updated; // eax
  __int64 v18; // [rsp+20h] [rbp-88h] BYREF
  __int64 v19; // [rsp+28h] [rbp-80h] BYREF
  __int64 v20; // [rsp+30h] [rbp-78h] BYREF
  HSTRING v21; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *v22; // [rsp+40h] [rbp-68h]
  char *v23; // [rsp+48h] [rbp-60h]
  __int64 v24; // [rsp+50h] [rbp-58h]
  char *v25; // [rsp+58h] [rbp-50h]
  _QWORD v26[9]; // [rsp+60h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  HSTRING string; // [rsp+B8h] [rbp+10h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTabImage *v31; // [rsp+C0h] [rbp+18h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::ITileImageResourceOptions *v32; // [rsp+C8h] [rbp+20h] BYREF

  v24 = -2LL;
  v1 = this;
  v2 = (char *)this + 72;
  v23 = (char *)this + 72;
  *((_BYTE *)this + 72) = 0;
  v32 = 0LL;
  DefaultIconDpi = DefaultIconManager::GetDefaultIconDpi();
  v4 = DefaultIconManager::CreateTileLoadOptions(DefaultIconDpi, &v32);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = (_QWORD *)*((_QWORD *)v1 + 7);
    v8 = *v7;
    v20 = *v7;
    v22 = v7;
    while ( (_QWORD *)v8 != v7 )
    {
      try
      {
        v9 = (HSTRING *)(v8 + 32);
        v10 = *((_QWORD *)v1 + 13);
        v19 = 0LL;
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 48LL))(
                v10,
                *(_QWORD *)(v8 + 32),
                &v19);
        if ( v11 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            275LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
            (const char *)(unsigned int)v11);
        v12 = *((_QWORD *)v1 + 12);
        v18 = 0LL;
        v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v12 + 72LL))(v12, v19, &v18);
        if ( v13 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            278LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
            (const char *)(unsigned int)v13);
        if ( v18 )
        {
          DefaultIconManager::CreateShellTabIconForUnifiedTile((__int64)v1, (__int64 *)&v31, v18, (__int64)v32);
          AcquireSRWLockExclusive((PSRWLOCK)v1 + 60);
          v25 = (char *)v1 + 480;
          string = 0LL;
          v21 = *v9;
          v14 = Microsoft::WRL::Wrappers::HString::Set(&string, &v21);
          if ( v14 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              287LL,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
              (const char *)(unsigned int)v14);
          std::map<Microsoft::WRL::Wrappers::HString,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabImage,wil::err_exception_policy>>::_Try_emplace<Microsoft::WRL::Wrappers::HString,>(
            (__int64 *)v1 + 7,
            (__int64)v26,
            &string);
          v15 = *(_QWORD *)(v26[0] + 40LL);
          *(_QWORD *)(v26[0] + 40LL) = v31;
          if ( v31 )
            (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTabImage *))(*(_QWORD *)v31 + 8LL))(v31);
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          WindowsDeleteString(string);
          string = 0LL;
          if ( v1 != (DefaultIconManager *)-480LL )
            ReleaseSRWLockExclusive((PSRWLOCK)v1 + 60);
          updated = DefaultIconManager::UpdateIconForAppUserModelId(
                      v1,
                      v31,
                      (const struct Microsoft::WRL::Wrappers::HString *)v9,
                      v16);
          if ( updated < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              291LL,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
              (const char *)(unsigned int)updated);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v31);
        }
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
      }
      catch ( ... )
      {
        v1 = this;
        v7 = v22;
        v2 = v23;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,Windows::Internal::ApplicationModel::WindowManagement::WindowId>>>,std::_Iterator_base0>::operator++(&v20);
      v8 = v20;
    }
    *v2 = 1;
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v32);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10D,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)v4);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v32);
    return v5;
  }
}
