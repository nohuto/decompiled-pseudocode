/*
 * XREFs of ?PrepareTabAndViewForDrag@TabTransferManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180258904
 * Callers:
 *     ?AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z @ 0x180256DAC (-AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18000B7EC (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UITabViewManager@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITabViewManager@@Uerr_exception_policy@wil@@@1@XZ @ 0x180099D88 (--$query@UITabViewManager@@@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA-A.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18016D6F4 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x180246690 (--$MakeOrThrow@VApplicationViewOperation@@$$V@wil@@YA-AV-$ComPtr@VApplicationViewOperation@@@WRL.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_6bddbf0d24291becc987c4f70b09177c___ @ 0x180255660 (ShellPositionerHelpers--PerformCallbackOnView__lambda_6bddbf0d24291becc987c4f70b09177c___.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TabTransferManager::PrepareTabAndViewForDrag(
        TabTransferManager *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  void **v4; // rax
  void *v5; // rdi
  void (__fastcall *v6)(void *, struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64 *); // rbx
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF
  volatile signed __int64 *v12; // [rsp+70h] [rbp+40h] BYREF
  void *v13; // [rsp+78h] [rbp+48h] BYREF

  if ( !*((_BYTE *)this + 253) )
  {
    v11 = 0LL;
    v4 = wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::query<ITabViewManager>(
           (struct IWeakReference **)this + 8,
           &v13);
    v5 = *v4;
    v6 = *(void (__fastcall **)(void *, struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64 *))(*(_QWORD *)*v4 + 24LL);
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v11);
    v6(v5, a2, &v11);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v13);
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      &v13,
      v11);
    v7 = ShellPositionerHelpers::PerformCallbackOnView__lambda_6bddbf0d24291becc987c4f70b09177c___(
           *((IUnknown **)this + 12),
           v11,
           (__int64 *)&v13);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v13);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        694LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    wil::MakeOrThrow<ApplicationViewOperation,>(&v12);
    *((_WORD *)v12 + 56) = 1;
    v8 = (*(__int64 (__fastcall **)(__int64, volatile signed __int64 *))(*(_QWORD *)v11 + 320LL))(v11, v12);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        698LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v12);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v11);
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::ComposableShell::Tabs::IShellTab *))(**((_QWORD **)this + 10) + 216LL))(
         *((_QWORD *)this + 10),
         a2);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      702LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
}
