/*
 * XREFs of ?GetMonitor@CWin32ApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x180076C50
 * Callers:
 *     <none>
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18001A7A8 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_89023de2c692254e9855fc87aa845524_::operator() @ 0x180076D08 (_lambda_89023de2c692254e9855fc87aa845524_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::GetMonitor(CWin32ApplicationView *this, struct IImmersiveMonitor **a2)
{
  volatile signed __int32 *v4; // rbx
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v12; // [rsp+68h] [rbp+10h] BYREF
  volatile signed __int32 *v13; // [rsp+70h] [rbp+18h] BYREF
  _QWORD **v14; // [rsp+78h] [rbp+20h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  v14 = &v12;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v13);
  v4 = v13;
  if ( v13 )
  {
    lambda_89023de2c692254e9855fc87aa845524_::operator()(&v14, v13);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v4);
  }
  v5 = v12;
  if ( v12 )
  {
    v6 = *((_QWORD *)this + 27);
    v7 = *v12;
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
    v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64, GUID *, GUID *, struct IImmersiveMonitor **))(v7 + 88))(
           v5,
           v8,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           a2);
    if ( v9 >= 0 )
      v9 = 0;
  }
  else
  {
    v9 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDD,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)0x80070490LL);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  return (unsigned int)v9;
}
