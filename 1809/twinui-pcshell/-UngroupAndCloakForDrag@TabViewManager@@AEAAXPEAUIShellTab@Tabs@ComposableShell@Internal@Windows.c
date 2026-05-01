/*
 * XREFs of ?UngroupAndCloakForDrag@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EE68C
 * Callers:
 *     ?DragEnterForSystemTab@TabViewManager@@UEAAJPEAUIInspectable@@@Z @ 0x1801DAE30 (-DragEnterForSystemTab@TabViewManager@@UEAAJPEAUIInspectable@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180141C8C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x1801CFAE4 (--$MakeOrThrow@VApplicationViewOperation@@$$V@wil@@YA-AV-$ComPtr@VApplicationViewOperation@@@WRL.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_aa2cf94f0290717a2ddf105a3ddda7cf___ @ 0x1801D01C4 (ShellPositionerHelpers--PerformCallbackOnView__lambda_aa2cf94f0290717a2ddf105a3ddda7cf___.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EE088 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall TabViewManager::UngroupAndCloakForDrag(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  __int64 *v4; // rbx
  int v5; // edi
  int v6; // eax
  int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v9[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  IUnknown *punk; // [rsp+80h] [rbp+40h] BYREF
  __int64 v12; // [rsp+88h] [rbp+48h] BYREF

  v9[1] = (__int64 *)-2LL;
  TabViewManager::TryGetViewForTab(this, v9, (unsigned __int64)a2);
  v4 = v9[0];
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v8,
    (__int64)v9[0]);
  punk = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  (*((void (__fastcall **)(RTL_SRWLOCK *, GUID *, IUnknown **))this[1].Ptr + 4))(
    this + 1,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  v5 = ShellPositionerHelpers::PerformCallbackOnView__lambda_aa2cf94f0290717a2ddf105a3ddda7cf___(punk, (__int64)v4, &v8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v8);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      4096LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (*(__int64 (__fastcall **)(PVOID, struct Windows::Internal::ComposableShell::Tabs::IShellTab *))(*(_QWORD *)this[145].Ptr + 216LL))(
         this[145].Ptr,
         a2);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      4097LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  wil::MakeOrThrow<ApplicationViewOperation,>(&v12);
  *(_WORD *)(v12 + 112) = 1;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v4 + 320))(v4, v12);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      4101LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v7);
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v12);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v9);
}
