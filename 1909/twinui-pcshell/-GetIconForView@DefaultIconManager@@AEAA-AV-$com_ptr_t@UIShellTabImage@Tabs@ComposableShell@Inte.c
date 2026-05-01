/*
 * XREFs of ?GetIconForView@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1802719E8
 * Callers:
 *     _lambda_f27e537ed1ad8c8456023c324c3ce255_::operator() @ 0x180270BC0 (_lambda_f27e537ed1ad8c8456023c324c3ce255_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002B650 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x1800A6A20 (--$com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32Appl.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$_Insert_or_assign@AEBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@AEAPEAUHICON__@@@?$map@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHICON__@@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHICON__@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHICON__@@@std@@@std@@@std@@@std@@_N@1@AEBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@AEAPEAUHICON__@@@Z @ 0x18026F64C (--$_Insert_or_assign@AEBV-$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@AE.c)
 *     ?CreateRandomAccessStreamReferenceFromHIcon@@YAJPEAUIWICImagingFactory@@PEAUHICON__@@PEAUIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@@PEAPEAUIRandomAccessStreamReference@456@@Z @ 0x180271068 (-CreateRandomAccessStreamReferenceFromHIcon@@YAJPEAUIWICImagingFactory@@PEAUHICON__@@PEAUIRandom.c)
 *     ?CreateShellTabIconForUnifiedTile@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUITileImageResourceOptions@567@@Z @ 0x180271234 (-CreateShellTabIconForUnifiedTile@DefaultIconManager@@AEAA-AV-$com_ptr_t@UIShellTabImage@Tabs@Co.c)
 *     ?CreateTileLoadOptions@DefaultIconManager@@CAJHPEAPEAUITileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1802714F0 (-CreateTileLoadOptions@DefaultIconManager@@CAJHPEAPEAUITileImageResourceOptions@UnifiedTile@Shel.c)
 *     ?GetRawHIconForView@DefaultIconManager@@AEAAJPEAUIWin32ApplicationView@@PEAPEAUHICON__@@@Z @ 0x180271D24 (-GetRawHIconForView@DefaultIconManager@@AEAAJPEAUIWin32ApplicationView@@PEAPEAUHICON__@@@Z.c)
 *     ?GetTileForWinRtView@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIWinRTApplicationView@@@Z @ 0x180271E30 (-GetTileForWinRtView@DefaultIconManager@@AEAA-AV-$com_ptr_t@UIUnifiedTile@UnifiedTile@Shell@Wind.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall DefaultIconManager::GetIconForView(
        DefaultIconManager *this,
        __int64 *a2,
        struct Windows::Storage::Streams::IRandomAccessStreamReference *a3)
{
  struct IApplicationView *v6; // rdx
  __int64 WindowForView; // rax
  unsigned int DpiForWindow; // eax
  int v9; // eax
  __int64 *ShellTabIconForUnifiedTile; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int RawHIconForView; // eax
  RTL_SRWLOCK *v14; // rbx
  __int64 **v15; // r15
  __int64 *v16; // rdx
  __int64 v17; // rcx
  HICON v18; // r14
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64, struct Windows::Storage::Streams::IRandomAccessStreamReference *, _QWORD **); // r14
  _QWORD *v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  struct IWin32ApplicationView *v25; // [rsp+20h] [rbp-30h] BYREF
  __int64 v26; // [rsp+28h] [rbp-28h] BYREF
  HICON v27[2]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v28[16]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct Windows::Storage::Streams::IRandomAccessStreamReference *v30; // [rsp+90h] [rbp+40h] BYREF
  _QWORD *v31; // [rsp+98h] [rbp+48h] BYREF

  v30 = a3;
  v27[1] = (HICON)-2LL;
  v31 = 0LL;
  (**(void (__fastcall ***)(struct Windows::Storage::Streams::IRandomAccessStreamReference *, GUID *, __int64 *))a3)(
    a3,
    &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2,
    &v26);
  if ( v26 )
  {
    DefaultIconManager::GetTileForWinRtView(this, &v25);
    if ( v25 )
    {
      v30 = 0LL;
      WindowForView = ApplicationViewHelpers::GetWindowForView(
                        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a3,
                        v6);
      DpiForWindow = GetDpiForWindow(WindowForView);
      v30 = 0LL;
      v9 = DefaultIconManager::CreateTileLoadOptions(DpiForWindow, &v30);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          434LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
          (const char *)(unsigned int)v9);
        __debugbreak();
      }
      ShellTabIconForUnifiedTile = DefaultIconManager::CreateShellTabIconForUnifiedTile(
                                     (__int64)this,
                                     (__int64 *)v27,
                                     (__int64 *)v25,
                                     (__int64)v30);
      v11 = *ShellTabIconForUnifiedTile;
      *ShellTabIconForUnifiedTile = 0LL;
      v12 = (__int64)v31;
      v31 = (_QWORD *)v11;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v27);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v30);
    }
LABEL_36:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v25);
    v23 = (__int64)v31;
    v31 = 0LL;
    *a2 = v23;
    goto LABEL_37;
  }
  wil::com_query<IWin32ApplicationView,IApplicationView * &>((__int64)&v25, &v30);
  RawHIconForView = DefaultIconManager::GetRawHIconForView(this, v25, v27);
  if ( RawHIconForView < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      442LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)RawHIconForView);
    __debugbreak();
  }
  v14 = (RTL_SRWLOCK *)((char *)this + 496);
  AcquireSRWLockShared((PSRWLOCK)this + 62);
  v15 = (__int64 **)((char *)this + 80);
  v16 = (__int64 *)*((_QWORD *)this + 10);
  v17 = v16[1];
  if ( *(_BYTE *)(v17 + 25) )
    goto LABEL_18;
  do
  {
    if ( *(_QWORD *)(v17 + 32) >= (unsigned __int64)v25 )
    {
      v16 = (__int64 *)v17;
      v17 = *(_QWORD *)v17;
    }
    else
    {
      v17 = *(_QWORD *)(v17 + 16);
    }
  }
  while ( !*(_BYTE *)(v17 + 25) );
  if ( v16 == *v15 || (unsigned __int64)v25 < v16[4] )
LABEL_18:
    v16 = *v15;
  v18 = v27[0];
  if ( v16 != *v15 && (HICON)v16[5] == v27[0] )
  {
    *a2 = 0LL;
    if ( this != (DefaultIconManager *)-496LL )
      ReleaseSRWLockShared((PSRWLOCK)this + 62);
    goto LABEL_23;
  }
  if ( this != (DefaultIconManager *)-496LL )
    ReleaseSRWLockShared((PSRWLOCK)this + 62);
  if ( !v18 )
  {
LABEL_34:
    AcquireSRWLockExclusive(v14);
    v30 = (struct Windows::Storage::Streams::IRandomAccessStreamReference *)v14;
    std::map<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,HICON__ *>::_Insert_or_assign<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const &,HICON__ * &>(
      v15,
      (__int64)v28,
      (__int64 *)&v25,
      (__int64 *)v27);
    if ( v14 )
      ReleaseSRWLockExclusive(v14);
    goto LABEL_36;
  }
  v30 = 0LL;
  if ( (int)CreateRandomAccessStreamReferenceFromHIcon(
              *((struct IWICImagingFactory **)this + 16),
              v18,
              *((struct Windows::Storage::Streams::IRandomAccessStreamReferenceStatics **)this + 15),
              &v30) >= 0 )
  {
    v19 = *((_QWORD *)this + 17);
    v20 = *(__int64 (__fastcall **)(__int64, struct Windows::Storage::Streams::IRandomAccessStreamReference *, _QWORD **))(*(_QWORD *)v19 + 136LL);
    v21 = v31;
    v31 = 0LL;
    if ( v21 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v21 + 16LL))(v21, *v21);
    v22 = v20(v19, v30, &v31);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        464LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
        (const char *)(unsigned int)v22);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v30);
    goto LABEL_34;
  }
  *a2 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v30);
LABEL_23:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v25);
LABEL_37:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v26);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v31);
  return a2;
}
