/*
 * XREFs of ?GetNumTabsInGroupForView@TabViewManager@@AEAAIPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18024F804
 * Callers:
 *     ?CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18024C1DC (-CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplica.c)
 *     ?OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerThumbnailEventArgs@3456@@Z @ 0x180253F70 (-OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Wind.c)
 *     ?TryFindAndNotifyReplacementTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIApplicationView@@@Z @ 0x18025ED18 (-TryFindAndNotifyReplacementTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShe.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??Dvector_iterator@?$vector_range@U?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEBV?$ComPtr@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18012DC10 (--Dvector_iterator@-$vector_range@U-$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Wind.c)
 *     ?end@?$vector_range@U?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA?AVvector_iterator@12@XZ @ 0x18013F8E4 (-end@-$vector_range@U-$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collecti.c)
 *     ?GetViewForTabLockHeld@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802506A0 (-GetViewForTabLockHeld@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_poli.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabViewManager::GetNumTabsInGroupForView(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a2,
        struct IApplicationView *a3)
{
  RTL_SRWLOCK *v6; // rbx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *, struct IApplicationView **); // rax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  int i; // eax
  __int64 *v13; // rax
  const char *v14; // r9
  __int64 result; // rax
  struct IApplicationView *v16; // [rsp+30h] [rbp-48h] BYREF
  int v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v19[8]; // [rsp+48h] [rbp-30h] BYREF
  int v20; // [rsp+50h] [rbp-28h]
  __int64 v21[4]; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v23; // [rsp+80h] [rbp+8h] BYREF
  struct IApplicationView *v24; // [rsp+88h] [rbp+10h] BYREF
  struct IApplicationView *v25; // [rsp+98h] [rbp+20h] BYREF

  v6 = this + 181;
  AcquireSRWLockShared(this + 181);
  v7 = *(_QWORD *)a2;
  v24 = 0LL;
  v8 = *(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *, struct IApplicationView **))(v7 + 56);
  try
  {
    v9 = v8(a2, &v24);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3493LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v9);
    v23 = 0;
    v10 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v24 + 56LL))(v24, &v23);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3496LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v10);
    v11 = 0;
    v25 = v24;
    v16 = v24;
    v17 = 0;
    v18 = 0LL;
    wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Tabs::ShellTab *>,wil::err_exception_policy>::end(
      &v25,
      (__int64)v19);
    for ( i = 0; i != v20; i = ++v17 )
    {
      v13 = wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Tabs::ShellTab *>,wil::err_exception_policy>::vector_iterator::operator*((__int64 *)&v16);
      TabViewManager::GetViewForTabLockHeld(this, &v25, *v13);
      if ( a3 == v25 )
        ++v11;
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v25);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v24);
    if ( v6 )
      ReleaseSRWLockShared(v6);
    result = v11;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xDB6,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      v14);
    return 0LL;
  }
  return result;
}
