/*
 * XREFs of ?SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate@TitleBarController@@AEAAXPEAUIApplicationView@@_N@Z @ 0x180249D00
 * Callers:
 *     _lambda_8c677c44027c68cbd42f9970f610ae83_::operator() @ 0x18024777C (_lambda_8c677c44027c68cbd42f9970f610ae83_--operator().c)
 *     ?OnShellHookMessage@TitleBarController@@UEAAJ_K_J@Z @ 0x180248EC0 (-OnShellHookMessage@TitleBarController@@UEAAJ_K_J@Z.c)
 *     ?SwitchToTitleBar@TitleBarController@@UEAAJPEAUIApplicationView@@@Z @ 0x18024A0D0 (-SwitchToTitleBar@TitleBarController@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?TryToggleTitleBarFocusForForegroundWindow@TitleBarController@@UEAAJXZ @ 0x18024A1D0 (-TryToggleTitleBarFocusForForegroundWindow@TitleBarController@@UEAAJXZ.c)
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18000B7EC (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8c677c44027c68cbd42f9970f610ae83_____lambda_8c677c44027c68cbd42f9970f610ae83___ @ 0x180246208 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8c677c44027c6.c)
 *     ??0?$com_ptr_t@VTitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTitleBarController@@@Z @ 0x180247058 (--0-$com_ptr_t@VTitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTitleBarController.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIViewGroupInternal@@UIViewGroup@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITitleBarRecovery@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180249A80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_180249A80.c)
 */

void __fastcall TitleBarController::SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate(
        TitleBarController *this,
        struct IApplicationView *a2,
        char a3)
{
  volatile signed __int64 **v5; // rax
  volatile signed __int64 *v6; // rdx
  __int64 *v7; // r10
  __int64 v8; // rcx
  unsigned int v9; // edi
  volatile signed __int32 **v10; // rax
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rcx
  int v13; // edi
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  TitleBarController *v15; // [rsp+38h] [rbp-28h] BYREF
  char v16; // [rsp+40h] [rbp-20h]
  volatile signed __int64 *v17; // [rsp+48h] [rbp-18h]
  __int64 v18; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  volatile signed __int32 *v20; // [rsp+70h] [rbp+10h] BYREF
  volatile signed __int64 *v21; // [rsp+88h] [rbp+28h] BYREF

  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v14,
    (__int64)a2);
  v5 = (volatile signed __int64 **)wil::com_ptr_t<TitleBarController,wil::err_exception_policy>::com_ptr_t<TitleBarController,wil::err_exception_policy>(
                                     &v21,
                                     (__int64)this);
  v15 = this;
  v16 = a3;
  v6 = *v5;
  *v5 = 0LL;
  v8 = *v7;
  *v7 = 0LL;
  v9 = *((_DWORD *)this + 52);
  v18 = v8;
  v17 = v6;
  v10 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8c677c44027c68cbd42f9970f610ae83_____lambda_8c677c44027c68cbd42f9970f610ae83___(
          &v20,
          (__int64)&v15);
  v11 = *v10;
  *v10 = 0LL;
  v12 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v12);
  }
  v13 = SHTaskPoolQueueTask(0LL, 2LL, v9, 0LL, v11, 0LL);
  if ( v11 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
  if ( v17 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(v17);
  if ( v21 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(v21);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      749LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
}
