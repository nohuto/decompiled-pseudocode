/*
 * XREFs of ?UpdateViewAnimationStateForTab@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EF41C
 * Callers:
 *     ?TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1801EE0F0 (-TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ViewPosChanged@TabViewManager@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x1801EF59C (-ViewPosChanged@TabViewManager@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?end@?$VectorRange@U?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA?AVVectorIterator@12@XZ @ 0x1800FA898 (-end@-$VectorRange@U-$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collectio.c)
 *     ??0TabWrapper@@QEAA@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@W4TabWrapperOptions@@@Z @ 0x1801D4D6C (--0TabWrapper@@QEAA@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@W4TabWrapperOptions@@@Z.c)
 *     ??DVectorIterator@?$VectorRange@U?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEBV?$ComPtr@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1801D5F38 (--DVectorIterator@-$VectorRange@U-$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Window.c)
 *     ?SetViewTransitionsEnabled@TabViewManager@@CAXPEAUIApplicationView@@_N@Z @ 0x1801E5180 (-SetViewTransitionsEnabled@TabViewManager@@CAXPEAUIApplicationView@@_N@Z.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EE088 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TabViewManager::UpdateViewAnimationStateForTab(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a3)
{
  struct IApplicationView *v5; // rdx
  bool v6; // di
  int v7; // eax
  int i; // eax
  unsigned __int64 *v9; // rax
  struct IApplicationView *v10; // rdx
  __int64 *v11; // [rsp+28h] [rbp-29h] BYREF
  __int64 *v12; // [rsp+30h] [rbp-21h] BYREF
  __int64 *v13; // [rsp+38h] [rbp-19h] BYREF
  int v14; // [rsp+40h] [rbp-11h]
  __int64 v15[2]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v16[8]; // [rsp+58h] [rbp+7h] BYREF
  int v17; // [rsp+60h] [rbp+Fh]
  __int64 v18; // [rsp+68h] [rbp+17h] BYREF
  __int64 v19[3]; // [rsp+70h] [rbp+1Fh] BYREF
  unsigned int v20; // [rsp+88h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v15[1] = -2LL;
  TabWrapper::TabWrapper(v19, (__int64)a3, 5);
  if ( v19[0] )
  {
    v6 = v20 <= 1;
    v12 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v19[0] + 56LL))(v19[0], &v12);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2691LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    v11 = v12;
    v13 = v12;
    v14 = 0;
    v15[0] = 0LL;
    wil::VectorRange<Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Tabs::ShellTab *>,wil::err_exception_policy>::end(
      &v11,
      (__int64)v16);
    for ( i = v14; i != v17; i = ++v14 )
    {
      v9 = wil::VectorRange<Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Tabs::ShellTab *>,wil::err_exception_policy>::VectorIterator::operator*((__int64 *)&v13);
      TabViewManager::TryGetViewForTab(this, &v11, *v9);
      if ( v11 )
      {
        LOBYTE(v10) = v6;
        TabViewManager::SetViewTransitionsEnabled(a2, v10);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v11);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v12);
  }
  else
  {
    LOBYTE(v5) = 1;
    TabViewManager::SetViewTransitionsEnabled(a2, v5);
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v19);
}
