/*
 * XREFs of ?GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x180059550
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_07b9f11f8de93b612f17f3c1dda448fc___::Invoke @ 0x180059330 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_07b9f11f8de93b612f17f3c1dda448f.c)
 *     ?GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180059440 (-GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     _lambda_9024690539981ae791e8a4389c3f5331_::operator() @ 0x180159C6C (_lambda_9024690539981ae791e8a4389c3f5331_--operator().c)
 *     ?IsMirrored@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x18015BAB0 (-IsMirrored@CWin32ApplicationView@@UEAAJPEAH@Z.c)
 *     ?SetViewState@CWin32ApplicationView@@UEAAJI@Z @ 0x18015C1B0 (-SetViewState@CWin32ApplicationView@@UEAAJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::GetWindow(CWin32ApplicationView *this, HWND *a2)
{
  *a2 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8));
  return 0LL;
}
