/*
 * XREFs of ?AttachTitleBarToView@TitleBarController@@UEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801F6FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180141C8C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x1801CFAE4 (--$MakeOrThrow@VApplicationViewOperation@@$$V@wil@@YA-AV-$ComPtr@VApplicationViewOperation@@@WRL.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5f9e95539f8e1465166802ff2b1874b7___ @ 0x1801F5370 (Windows--Internal--ComTaskPool--QueueTask__lambda_5f9e95539f8e1465166802ff2b1874b7___.c)
 *     ??$make_unique@Vunique_animation_clock@@AEBU_GUID@@AEBHH$0A@@std@@YA?AV?$unique_ptr@Vunique_animation_clock@@U?$default_delete@Vunique_animation_clock@@@std@@@0@AEBU_GUID@@AEBH$$QEAH@Z @ 0x1801F5BDC (--$make_unique@Vunique_animation_clock@@AEBU_GUID@@AEBHH$0A@@std@@YA-AV-$unique_ptr@Vunique_anim.c)
 *     ??0?$com_ptr_t@VTitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTitleBarController@@@Z @ 0x1801F5E58 (--0-$com_ptr_t@VTitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTitleBarController.c)
 *     _lambda_5f9e95539f8e1465166802ff2b1874b7_::__lambda_5f9e95539f8e1465166802ff2b1874b7_ @ 0x1801F616C (_lambda_5f9e95539f8e1465166802ff2b1874b7_--__lambda_5f9e95539f8e1465166802ff2b1874b7_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIViewGroupInternal@@UIViewGroup@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITitleBarRecovery@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F8B70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_1801F8B70.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TitleBarController::AttachTitleBarToView(
        TitleBarController *this,
        struct IApplicationView *a2,
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a3)
{
  struct IApplicationView *v4; // rbx
  __int64 *v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // r11
  __int64 v9; // rcx
  void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  const char *v14; // r9
  __int128 *v15; // rbx
  __int64 result; // rax
  __int64 v17; // [rsp+20h] [rbp-68h] BYREF
  void *v18; // [rsp+28h] [rbp-60h] BYREF
  __int128 v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+40h] [rbp-48h]
  _QWORD v21[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v22; // [rsp+58h] [rbp-30h] BYREF
  __int128 v23; // [rsp+60h] [rbp-28h]
  void *v24; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v20 = -2LL;
  v4 = a2;
  LODWORD(v17) = 0;
  try
  {
    std::make_unique<unique_animation_clock,_GUID const &,int const &,int,0>(
      &v18,
      (__int64)a2,
      (__int64)a3,
      (unsigned int *)&v17);
    (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int128 *))v4)(
      v4,
      &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
      &v19);
    v6 = &v17;
    if ( (_QWORD)v19 )
    {
      v7 = wil::com_ptr_t<TitleBarController,wil::err_exception_policy>::com_ptr_t<TitleBarController,wil::err_exception_policy>(
             &v17,
             (__int64)this - 8);
      v21[0] = v8;
      v9 = *v7;
      *v7 = 0LL;
      v21[1] = v9;
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v22,
        v19);
      v23 = *(_OWORD *)a3;
      v10 = v18;
      v18 = 0LL;
      v24 = v10;
      v4 = (struct IApplicationView *)(unsigned int)Windows::Internal::ComTaskPool::QueueTask__lambda_5f9e95539f8e1465166802ff2b1874b7___(
                                                      v12,
                                                      v11,
                                                      *((_DWORD *)this + 50),
                                                      (__int64)v21);
      lambda_5f9e95539f8e1465166802ff2b1874b7_::__lambda_5f9e95539f8e1465166802ff2b1874b7_(v21);
      if ( v17 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(v17);
      if ( (int)v4 >= 0 )
        goto LABEL_10;
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        276LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v4);
    }
    wil::MakeOrThrow<ApplicationViewOperation,>(v6);
    *(_BYTE *)(v17 + 272) = 1;
    *(_OWORD *)(v17 + 256) = *(_OWORD *)a3;
    v13 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)v4 + 320LL))(v4, v17);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        285LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v13);
    *((_BYTE *)v18 + 16) = 0;
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v17);
LABEL_10:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v19);
    v15 = (__int128 *)v18;
    if ( v18 )
    {
      if ( *((_BYTE *)v18 + 16) )
      {
        *((_BYTE *)v18 + 16) = 0;
        v19 = *v15;
        DwmpEndAnimationClock(&v19);
      }
      operator delete(v15, (const struct std::nothrow_t *)0x14);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x125,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
                           v14);
  }
  return result;
}
