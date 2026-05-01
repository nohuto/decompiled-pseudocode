/*
 * XREFs of ?InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x1802F7E60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x180306440 (-InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 */

void __fastcall CAltTabViewController::InvokeSwitchItem(CAltTabViewController *this, struct ISwitchItem *a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 24LL))(*((_QWORD *)this + 15));
  CMultitaskingViewControllerBase::InvokeSwitchItem(this, a2);
  ViewHostTelemetry::SendAppSwitchTelemetry(a2, 1LL);
}
