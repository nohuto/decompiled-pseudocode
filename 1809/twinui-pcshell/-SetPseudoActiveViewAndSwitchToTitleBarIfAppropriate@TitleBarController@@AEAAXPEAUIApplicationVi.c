/*
 * XREFs of ?SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate@TitleBarController@@AEAAXPEAUIApplicationView@@_N@Z @ 0x1801F8E00
 * Callers:
 *     _lambda_662c9e03a7f7cb620b2a10f3e52d88d6_::operator() @ 0x1801F692C (_lambda_662c9e03a7f7cb620b2a10f3e52d88d6_--operator().c)
 *     ?OnShellHookMessage@TitleBarController@@UEAAJ_K_J@Z @ 0x1801F7F80 (-OnShellHookMessage@TitleBarController@@UEAAJ_K_J@Z.c)
 *     ?SwitchToTitleBar@TitleBarController@@UEAAJPEAUIApplicationView@@@Z @ 0x1801F9290 (-SwitchToTitleBar@TitleBarController@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?TryToggleTitleBarFocusForForegroundWindow@TitleBarController@@UEAAJXZ @ 0x1801F9390 (-TryToggleTitleBarFocusForForegroundWindow@TitleBarController@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_662c9e03a7f7cb620b2a10f3e52d88d6_____lambda_662c9e03a7f7cb620b2a10f3e52d88d6___ @ 0x1801F4D40 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_662c9e03a7f7c.c)
 *     ??0?$com_ptr_t@VTitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTitleBarController@@@Z @ 0x1801F5E58 (--0-$com_ptr_t@VTitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTitleBarController.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIViewGroupInternal@@UIViewGroup@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITitleBarRecovery@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F8B70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_1801F8B70.c)
 */

void __fastcall TitleBarController::SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate(
        TitleBarController *this,
        struct IApplicationView *a2,
        char a3)
{
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // r11
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 *v10; // rax
  volatile int *v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  TitleBarController *v16; // [rsp+38h] [rbp-28h] BYREF
  char v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 v21; // [rsp+70h] [rbp+10h] BYREF
  __int64 v22; // [rsp+88h] [rbp+28h] BYREF

  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v15,
    (__int64)a2);
  v5 = wil::com_ptr_t<TitleBarController,wil::err_exception_policy>::com_ptr_t<TitleBarController,wil::err_exception_policy>(
         &v22,
         (__int64)this);
  v16 = this;
  v17 = a3;
  v6 = *v5;
  *v5 = 0LL;
  v8 = *v7;
  *v7 = 0LL;
  v9 = *((_DWORD *)this + 52);
  v19 = v8;
  v18 = v6;
  v10 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_662c9e03a7f7cb620b2a10f3e52d88d6_____lambda_662c9e03a7f7cb620b2a10f3e52d88d6___(
          &v21,
          (__int64)&v16);
  v12 = *v10;
  *v10 = 0LL;
  v13 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v13,
      v11);
  }
  v14 = SHTaskPoolQueueTask(0LL, 2LL, v9, 0LL, v12, 0LL);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
  if ( v18 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(v18);
  if ( v22 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(v22);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v15);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      770LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
}
