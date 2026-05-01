/*
 * XREFs of ?GetNumTabsInGroupForView@TabViewManager@@AEAAIPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1801DCCA0
 * Callers:
 *     ?CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1801D8B98 (-CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplica.c)
 *     ?OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerThumbnailEventArgs@3456@@Z @ 0x1801E1A30 (-OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Wind.c)
 *     ?TryFindAndNotifyReplacementTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIApplicationView@@@Z @ 0x1801ED48C (-TryFindAndNotifyReplacementTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShe.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?end@?$VectorRange@U?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA?AVVectorIterator@12@XZ @ 0x1800FA898 (-end@-$VectorRange@U-$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collectio.c)
 *     ??DVectorIterator@?$VectorRange@U?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEBV?$ComPtr@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1801D5F38 (--DVectorIterator@-$VectorRange@U-$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Window.c)
 *     ?GetViewForTabLockHeld@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801DDAE0 (-GetViewForTabLockHeld@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_poli.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabViewManager::GetNumTabsInGroupForView(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a2,
        struct IApplicationView *a3)
{
  RTL_SRWLOCK *v6; // rbx
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edi
  int i; // eax
  _QWORD *v11; // rax
  const char *v12; // r9
  __int64 result; // rax
  struct IApplicationView *v14; // [rsp+30h] [rbp-48h] BYREF
  int v15; // [rsp+38h] [rbp-40h]
  __int64 v16; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v17[8]; // [rsp+48h] [rbp-30h] BYREF
  int v18; // [rsp+50h] [rbp-28h]
  __int64 v19[4]; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v21; // [rsp+80h] [rbp+8h] BYREF
  struct IApplicationView *v22; // [rsp+88h] [rbp+10h] BYREF
  struct IApplicationView *v23; // [rsp+98h] [rbp+20h] BYREF

  v6 = this + 184;
  AcquireSRWLockShared(this + 184);
  v22 = 0LL;
  try
  {
    v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *, struct IApplicationView **))(*(_QWORD *)a2 + 56LL))(
           a2,
           &v22);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3889LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v7);
    v21 = 0;
    v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v22 + 56LL))(v22, &v21);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3892LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v8);
    v9 = 0;
    v23 = v22;
    v14 = v22;
    v15 = 0;
    v16 = 0LL;
    wil::VectorRange<Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Tabs::ShellTab *>,wil::err_exception_policy>::end(
      &v23,
      (__int64)v17);
    for ( i = 0; i != v18; i = ++v15 )
    {
      v11 = wil::VectorRange<Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Tabs::ShellTab *>,wil::err_exception_policy>::VectorIterator::operator*((__int64 *)&v14);
      TabViewManager::GetViewForTabLockHeld(this, &v23, *v11);
      if ( a3 == v23 )
        ++v9;
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v23);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v22);
    if ( v6 )
      ReleaseSRWLockShared(v6);
    result = v9;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xF42,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      v12);
    return 0LL;
  }
  return result;
}
