/*
 * XREFs of ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x180051AF0
 * Callers:
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x180051A60 (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A5E0 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18002AA2C (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039C30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _lambda_b8642ff14e560df3dcd31f4e91e1514d_::operator() @ 0x180051B78 (_lambda_b8642ff14e560df3dcd31f4e91e1514d_--operator().c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::QuerySizeConstraintsFromApp(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  struct IApplicationView *v4; // rdx
  __int64 WindowForView; // rax
  _QWORD *v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  _QWORD **v9; // [rsp+68h] [rbp+20h] BYREF

  v7 = 0LL;
  v9 = &v7;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v8);
  if ( v8 )
    lambda_b8642ff14e560df3dcd31f4e91e1514d_::operator()(&v9);
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v8);
  v2 = v7;
  v3 = *v7;
  WindowForView = ApplicationViewHelpers::GetWindowForView(this, v4);
  LODWORD(v2) = (*(__int64 (__fastcall **)(_QWORD *, __int64))(v3 + 24))(v2, WindowForView);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
  return (unsigned int)v2;
}
