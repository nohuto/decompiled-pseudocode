/*
 * XREFs of ?UpdateImageCache@DefaultIconManager@@AEAAJXZ @ 0x180253BDC
 * Callers:
 *     ?OnMessage@DefaultIconManager@@UEAAJI_K_J@Z @ 0x180252CA0 (-OnMessage@DefaultIconManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800524BC (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A7B74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$_Try_emplace@VHString@Wrappers@WRL@Microsoft@@$$V@?$map@VHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@8@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@$$QEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180250244 (--$_Try_emplace@VHString@Wrappers@WRL@Microsoft@@$$V@-$map@VHString@Wrappers@WRL@Microsoft@@V-$c.c)
 *     ?CreateShellTabIconForUnifiedTile@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUITileImageResourceOptions@567@@Z @ 0x180251CE4 (-CreateShellTabIconForUnifiedTile@DefaultIconManager@@AEAA-AV-$com_ptr_t@UIShellTabImage@Tabs@Co.c)
 *     ?CreateTileLoadOptions@DefaultIconManager@@CAJHPEAPEAUITileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180251FA0 (-CreateTileLoadOptions@DefaultIconManager@@CAJHPEAPEAUITileImageResourceOptions@UnifiedTile@Shel.c)
 *     ?GetDefaultIconDpi@DefaultIconManager@@CAHXZ @ 0x1802522E0 (-GetDefaultIconDpi@DefaultIconManager@@CAHXZ.c)
 *     ?UpdateIconForAppUserModelId@DefaultIconManager@@AEAAJPEAUIShellTabImage@Tabs@ComposableShell@Internal@Windows@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1802539B8 (-UpdateIconForAppUserModelId@DefaultIconManager@@AEAAJPEAUIShellTabImage@Tabs@ComposableShell@In.c)
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
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  __int64 v17; // r12
  const char *v18; // r9
  int updated; // eax
  __int64 v20; // [rsp+20h] [rbp-88h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::ITileImageResourceOptions *v21; // [rsp+28h] [rbp-80h] BYREF
  __int64 v22; // [rsp+30h] [rbp-78h] BYREF
  HSTRING v23; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *v24; // [rsp+40h] [rbp-68h]
  char *v25; // [rsp+48h] [rbp-60h]
  __int64 v26; // [rsp+50h] [rbp-58h]
  char *v27; // [rsp+58h] [rbp-50h]
  _QWORD v28[9]; // [rsp+60h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  HSTRING string; // [rsp+B8h] [rbp+10h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTabImage *v33; // [rsp+C0h] [rbp+18h] BYREF
  __int64 *v34; // [rsp+C8h] [rbp+20h] BYREF

  v26 = -2LL;
  v1 = this;
  v2 = (char *)this + 72;
  v25 = (char *)this + 72;
  *((_BYTE *)this + 72) = 0;
  v21 = 0LL;
  DefaultIconDpi = DefaultIconManager::GetDefaultIconDpi();
  v4 = DefaultIconManager::CreateTileLoadOptions(DefaultIconDpi, &v21);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = (_QWORD *)*((_QWORD *)v1 + 7);
    v8 = *v7;
    v22 = *v7;
    v24 = v7;
    while ( (_QWORD *)v8 != v7 )
    {
      try
      {
        v9 = (HSTRING *)(v8 + 32);
        v20 = 0LL;
        v10 = (__int64 *)*((_QWORD *)v1 + 13);
        v11 = *v10;
        v20 = 0LL;
        v12 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, __int64 *))(v11 + 48))(v10, *v9, &v20);
        if ( v12 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            275LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
            (const char *)(unsigned int)v12);
        v34 = 0LL;
        v13 = (__int64 *)*((_QWORD *)v1 + 12);
        v14 = *v13;
        v34 = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 **))(v14 + 72))(v13, v20, &v34);
        if ( v15 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            278LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
            (const char *)(unsigned int)v15);
        if ( v34 )
        {
          DefaultIconManager::CreateShellTabIconForUnifiedTile((__int64)v1, (__int64 *)&v33, v34, (__int64)v21);
          AcquireSRWLockExclusive((PSRWLOCK)v1 + 62);
          v27 = (char *)v1 + 496;
          string = 0LL;
          v23 = *v9;
          v16 = Microsoft::WRL::Wrappers::HString::Set(&string, &v23);
          if ( v16 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              287LL,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
              (const char *)(unsigned int)v16);
          std::map<Microsoft::WRL::Wrappers::HString,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabImage,wil::err_exception_policy>>::_Try_emplace<Microsoft::WRL::Wrappers::HString,>(
            (__int64 *)v1 + 7,
            (__int64)v28,
            &string);
          v17 = *(_QWORD *)(v28[0] + 40LL);
          *(_QWORD *)(v28[0] + 40LL) = v33;
          if ( v33 )
            (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTabImage *))(*(_QWORD *)v33 + 8LL))(v33);
          if ( v17 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          WindowsDeleteString(string);
          string = 0LL;
          if ( v1 != (DefaultIconManager *)-496LL )
            ReleaseSRWLockExclusive((PSRWLOCK)v1 + 62);
          updated = DefaultIconManager::UpdateIconForAppUserModelId(
                      v1,
                      v33,
                      (const struct Microsoft::WRL::Wrappers::HString *)v9,
                      v18);
          if ( updated < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              291LL,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
              (const char *)(unsigned int)updated);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v33);
        }
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v34);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
      }
      catch ( ... )
      {
        v1 = this;
        v7 = v24;
        v2 = v25;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v22);
      v8 = v22;
    }
    *v2 = 1;
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v21);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10D,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)v4);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v21);
    return v5;
  }
}
