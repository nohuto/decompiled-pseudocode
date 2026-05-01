/*
 * XREFs of _lambda_7e6d277de2b049706e6768307ccc7deb_::__lambda_7e6d277de2b049706e6768307ccc7deb_ @ 0x1802F6DA8
 * Callers:
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_7e6d277de2b049706e6768307ccc7deb____::_1_::dtor$0 @ 0x1802F5B95 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_7e6d277de2b049706e6768307ccc7de.c)
 *     _XamlAltTabViewHost::SwitchToSelectedItemAndDismiss_::_1_::dtor$3 @ 0x1802FB06F (_XamlAltTabViewHost--SwitchToSelectedItemAndDismiss_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802F6FA4 (--1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_7e6d277de2b049706e6768307ccc7deb_::__lambda_7e6d277de2b049706e6768307ccc7deb_(_QWORD *a1)
{
  XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::~SwitchToSelectedItemAndDismiss((XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss *)(a1 + 1));
  if ( *a1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
}
