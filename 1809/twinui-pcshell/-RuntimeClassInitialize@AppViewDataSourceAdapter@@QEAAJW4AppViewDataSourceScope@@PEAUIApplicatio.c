/*
 * XREFs of ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4AppViewDataSourceScope@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@PEAUIInspectable@@5PEAUITabViewManager@@@Z @ 0x1802AED90
 * Callers:
 *     ??$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@W4AppViewDataSourceScope@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@$$T$$T$$T@Details@WRL@Microsoft@@YAJPEAPEAVAppViewDataSourceAdapter@@$$QEAW4AppViewDataSourceScope@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@$$QEA$$T66@Z @ 0x1802A84FC (--$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@W4AppViewDataSourceScope@@AEAPEAUIApplication.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@UIIconFactoryStatics@Multitasking@ComposableShell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIIconFactoryStatics@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1802A7DF0 (--$GetActivationFactory@UIIconFactoryStatics@Multitasking@ComposableShell@Internal@Windows@@@wil.c)
 *     ?InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@PEAUIInspectable@@4PEAUITabViewManager@@@Z @ 0x1802AC828 (-InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIAp.c)
 *     ?InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x1802ACB9C (-InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?RegisterTabWatcher@AppViewDataSourceAdapter@@AEAAXXZ @ 0x1802AE8A8 (-RegisterTabWatcher@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?AppViewSwitchItemZOrderSort_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B1544 (-AppViewSwitchItemZOrderSort_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewDataSourceAdapter::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        struct IApplicationViewCollection *a3,
        struct IApplicationViewIconLoader *a4,
        struct IImmersiveShellHookService *a5,
        struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *a6,
        struct IInspectable *a7,
        struct IInspectable *a8,
        struct ITabViewManager *a9)
{
  const WCHAR *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  const struct _GUID *v16; // rcx
  int Instance; // eax
  void *v18; // rbx
  int v19; // eax
  const char *v20; // r9
  __int64 result; // rax
  void *v22[4]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v22[1] = (void *)-2LL;
  try
  {
    if ( a2 )
    {
      if ( !a7 || !a8 || !a9 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          141LL,
          (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
          (const char *)0x80070057LL);
    }
    *(_DWORD *)(a1 + 336) = a2;
    v13 = wil::GetActivationFactory<Windows::Internal::ComposableShell::Multitasking::IIconFactoryStatics>((const WCHAR *)v22);
    v14 = *(_QWORD *)v13;
    *(_QWORD *)v13 = 0LL;
    v15 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 248) = v14;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v22);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 176));
    v22[2] = (void *)(a1 + 176);
    AppViewDataSourceAdapterBase::InitializeDataSource(
      (AppViewDataSourceAdapterBase *)(a1 + 8),
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9);
    v22[0] = 0LL;
    Instance = AppViewSwitchItemZOrderSort_CreateInstance(v16, v22);
    if ( Instance < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        157LL,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)Instance);
    v18 = v22[0];
    v19 = (*(__int64 (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 32) + 72LL))(*(_QWORD *)(a1 + 32), v22[0]);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        158LL,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v19);
    if ( *(_DWORD *)(a1 + 336) == 2 )
      AppViewDataSourceAdapter::RegisterTabWatcher((AppViewDataSourceAdapter *)a1);
    AppViewDataSourceAdapter::InitializeItems((AppViewDataSourceAdapter *)a1);
    if ( v18 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 16LL))(v18);
    if ( a1 != -176 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 176));
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAB,
                           (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
                           v20);
  }
  return result;
}
