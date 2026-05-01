/*
 * XREFs of ?GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x180052080
 * Callers:
 *     ?GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180051F80 (-GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ff74802286da7733b76df6a3bea32e5e___::Invoke @ 0x180052000 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_ff74802286da7733b76df6a3bea32e5.c)
 *     _lambda_9024690539981ae791e8a4389c3f5331_::operator() @ 0x1801301DC (_lambda_9024690539981ae791e8a4389c3f5331_--operator().c)
 *     ?IsMirrored@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x180132030 (-IsMirrored@CWin32ApplicationView@@UEAAJPEAH@Z.c)
 *     ?SetViewState@CWin32ApplicationView@@UEAAJI@Z @ 0x1801327A0 (-SetViewState@CWin32ApplicationView@@UEAAJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::GetWindow(CWin32ApplicationView *this, HWND *a2)
{
  *a2 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8));
  return 0LL;
}
