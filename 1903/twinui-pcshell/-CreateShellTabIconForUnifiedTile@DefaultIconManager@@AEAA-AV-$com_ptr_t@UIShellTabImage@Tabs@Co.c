/*
 * XREFs of ?CreateShellTabIconForUnifiedTile@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUITileImageResourceOptions@567@@Z @ 0x180251CE4
 * Callers:
 *     ?GetIconForView@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180252498 (-GetIconForView@DefaultIconManager@@AEAA-AV-$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Inte.c)
 *     ?UpdateImageCache@DefaultIconManager@@AEAAJXZ @ 0x180253BDC (-UpdateImageCache@DefaultIconManager@@AEAAJXZ.c)
 *     ?UpdateViewFromCollectionTile@DefaultIconManager@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180253F2C (-UpdateViewFromCollectionTile@DefaultIconManager@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@Win.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTileImageResourceCandidate@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18024E96C (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTileImageResourceCandidate@UnifiedTile@Shell@Wind.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall DefaultIconManager::CreateShellTabIconForUnifiedTile(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  DWORD v13; // edx
  int v14; // r8d
  void (__fastcall ***v15)(__int64, GUID *, __int64 *); // rdi
  __int64 v16; // rax
  int v17; // eax
  __int64 *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  __int64 *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  void (__fastcall ***v26)(__int64, GUID *, __int64 *); // [rsp+20h] [rbp-40h] BYREF
  __int64 *v27; // [rsp+28h] [rbp-38h] BYREF
  __int64 v28; // [rsp+30h] [rbp-30h] BYREF
  __int64 v29; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v30; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v33; // [rsp+90h] [rbp+30h] BYREF

  v31[1] = -2LL;
  v7 = *a3;
  v31[0] = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 56))(a3, v31);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      598LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  if ( !v31[0] )
    goto LABEL_20;
  v27 = 0LL;
  v9 = *(_QWORD *)v31[0];
  v27 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 **))(v9 + 64))(v31[0], &v27);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      602LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  if ( !v27 )
  {
LABEL_19:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v27);
LABEL_20:
    *a2 = 0LL;
    goto LABEL_21;
  }
  v26 = 0LL;
  v11 = *v27;
  v26 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v11 + 72))(v27, a4, &v26);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      606LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)v12);
  v30 = 0LL;
  v15 = v26;
  if ( (int)wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<WindowsInternal::Shell::UnifiedTile::TileImageResourceCandidate *> *>(
              v26,
              v13,
              v14) < 0
    || ((int (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *), __int64 **))(*v15)[8])(v15, &v30) < 0 )
  {
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v30);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v26);
    goto LABEL_19;
  }
  v29 = 0LL;
  v16 = *v30;
  v29 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v16 + 72))(v30, &v29);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      612LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)v17);
    __debugbreak();
  }
  v28 = 0LL;
  v18 = *(__int64 **)(a1 + 120);
  v19 = *v18;
  v28 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v19 + 64))(v18, v29, &v28);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      614LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)v20);
    __debugbreak();
  }
  v33 = 0LL;
  v21 = *(__int64 **)(a1 + 136);
  v22 = *v21;
  v33 = 0LL;
  v23 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v22 + 136))(v21, v28, &v33);
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      617LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)v23);
    __debugbreak();
  }
  v24 = v33;
  v33 = 0LL;
  *a2 = v24;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v33);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v28);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v29);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v30);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v26);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v27);
LABEL_21:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v31);
  return a2;
}
