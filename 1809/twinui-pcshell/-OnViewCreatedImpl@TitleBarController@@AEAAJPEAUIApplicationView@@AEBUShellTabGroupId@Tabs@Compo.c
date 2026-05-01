/*
 * XREFs of ?OnViewCreatedImpl@TitleBarController@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x1801F8174
 * Callers:
 *     ?OnViewRecovered@TitleBarController@@UEAAXPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x1801F8570 (-OnViewRecovered@TitleBarController@@UEAAXPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Composa.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4583b2cd47151c5f4a6d744938b764a0___ @ 0x1801F52E8 (Windows--Internal--ComTaskPool--QueueTask__lambda_4583b2cd47151c5f4a6d744938b764a0___.c)
 *     ??$make_unique@Vunique_animation_clock@@AEBU_GUID@@AEBHH$0A@@std@@YA?AV?$unique_ptr@Vunique_animation_clock@@U?$default_delete@Vunique_animation_clock@@@std@@@0@AEBU_GUID@@AEBH$$QEAH@Z @ 0x1801F5BDC (--$make_unique@Vunique_animation_clock@@AEBU_GUID@@AEBHH$0A@@std@@YA-AV-$unique_ptr@Vunique_anim.c)
 *     ??0?$com_ptr_t@VTitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTitleBarController@@@Z @ 0x1801F5E58 (--0-$com_ptr_t@VTitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTitleBarController.c)
 *     _lambda_4583b2cd47151c5f4a6d744938b764a0_::__lambda_4583b2cd47151c5f4a6d744938b764a0_ @ 0x1801F6100 (_lambda_4583b2cd47151c5f4a6d744938b764a0_--__lambda_4583b2cd47151c5f4a6d744938b764a0_.c)
 *     ?EnsureTitleBarFactoryStatics@TitleBarController@@AEAAJXZ @ 0x1801F7544 (-EnsureTitleBarFactoryStatics@TitleBarController@@AEAAJXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIViewGroupInternal@@UIViewGroup@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITitleBarRecovery@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F8B70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_1801F8B70.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TitleBarController::OnViewCreatedImpl(
        TitleBarController *this,
        void (***a2)(void),
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a3,
        char a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebx
  const char *v18; // r9
  __int64 v19; // [rsp+20h] [rbp-78h] BYREF
  __int64 v20; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+50h] [rbp-48h] BYREF
  __int128 v24; // [rsp+58h] [rbp-40h]
  char v25; // [rsp+68h] [rbp-30h]
  __int64 v26; // [rsp+70h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v21[1] = -2LL;
  v8 = TitleBarController::EnsureTitleBarFactoryStatics(this);
  v9 = v8;
  if ( v8 >= 0 )
  {
    try
    {
      (**a2)();
      if ( !v20 )
        goto LABEL_8;
      LODWORD(v19) = 0;
      std::make_unique<unique_animation_clock,_GUID const &,int const &,int,0>(v21, v11, v12, (unsigned int *)&v19);
      v13 = wil::com_ptr_t<TitleBarController,wil::err_exception_policy>::com_ptr_t<TitleBarController,wil::err_exception_policy>(
              &v19,
              (__int64)this);
      v22[0] = this;
      v14 = *v13;
      *v13 = 0LL;
      v22[1] = v14;
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v23,
        v20);
      v24 = *(_OWORD *)a3;
      v25 = a4;
      v26 = v21[0];
      v17 = Windows::Internal::ComTaskPool::QueueTask__lambda_4583b2cd47151c5f4a6d744938b764a0___(
              v16,
              v15,
              *((_DWORD *)this + 52),
              (__int64)v22);
      lambda_4583b2cd47151c5f4a6d744938b764a0_::__lambda_4583b2cd47151c5f4a6d744938b764a0_(v22);
      if ( v19 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(v19);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x296,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
          (const char *)(unsigned int)v17);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
        result = (unsigned int)v17;
      }
      else
      {
LABEL_8:
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
        result = 0LL;
      }
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x29A,
                             (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
                             v18);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x264,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
  return result;
}
