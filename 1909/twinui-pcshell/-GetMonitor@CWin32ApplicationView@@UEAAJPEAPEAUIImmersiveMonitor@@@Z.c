/*
 * XREFs of ?GetMonitor@CWin32ApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x180079C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003E8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18003E9AC (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_89023de2c692254e9855fc87aa845524_::operator() @ 0x180079D18 (_lambda_89023de2c692254e9855fc87aa845524_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::GetMonitor(CWin32ApplicationView *this, struct IImmersiveMonitor **a2)
{
  __int64 v4; // rbx
  volatile int *v5; // rdx
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v13; // [rsp+68h] [rbp+10h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF
  _QWORD **v15; // [rsp+78h] [rbp+20h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  v15 = &v13;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v14);
  v4 = v14;
  if ( v14 )
  {
    lambda_89023de2c692254e9855fc87aa845524_::operator()(&v15, v14);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(
      v4,
      v5);
  }
  v6 = v13;
  if ( v13 )
  {
    v7 = *((_QWORD *)this + 27);
    v8 = *v13;
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
    v10 = (*(__int64 (__fastcall **)(_QWORD *, __int64, GUID *, GUID *, struct IImmersiveMonitor **))(v8 + 88))(
            v6,
            v9,
            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
            a2);
    if ( v10 >= 0 )
      v10 = 0;
  }
  else
  {
    v10 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDD,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)0x80070490LL);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
  return (unsigned int)v10;
}
