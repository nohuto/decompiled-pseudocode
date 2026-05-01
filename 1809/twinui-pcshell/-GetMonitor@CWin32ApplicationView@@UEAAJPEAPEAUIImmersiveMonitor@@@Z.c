/*
 * XREFs of ?GetMonitor@CWin32ApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x180073300
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A5E0 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18002AA2C (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_89023de2c692254e9855fc87aa845524_::operator() @ 0x1800733B8 (_lambda_89023de2c692254e9855fc87aa845524_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::GetMonitor(CWin32ApplicationView *this, struct IImmersiveMonitor **a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  _QWORD **v13; // [rsp+78h] [rbp+20h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  v13 = &v11;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v12);
  if ( v12 )
    lambda_89023de2c692254e9855fc87aa845524_::operator()(&v13);
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v12);
  v4 = v11;
  if ( v11 )
  {
    v5 = *((_QWORD *)this + 27);
    v6 = *v11;
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
    v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, GUID *, GUID *, struct IImmersiveMonitor **))(v6 + 88))(
           v4,
           v7,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           a2);
    if ( v8 >= 0 )
      v8 = 0;
  }
  else
  {
    v8 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDD,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)0x80070490LL);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  return (unsigned int)v8;
}
