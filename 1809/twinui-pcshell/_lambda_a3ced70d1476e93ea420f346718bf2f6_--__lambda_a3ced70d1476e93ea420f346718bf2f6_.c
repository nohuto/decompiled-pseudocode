/*
 * XREFs of _lambda_a3ced70d1476e93ea420f346718bf2f6_::__lambda_a3ced70d1476e93ea420f346718bf2f6_ @ 0x18027E1EC
 * Callers:
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_a3ced70d1476e93ea420f346718bf2f6____::_1_::dtor$0 @ 0x18027CDF1 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_a3ced70d1476e93ea420f346718bf2f.c)
 *     _XamlAltTabViewHost::SwitchToSelectedItemAndDismiss_::_1_::dtor$3 @ 0x180282505 (_XamlAltTabViewHost--SwitchToSelectedItemAndDismiss_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18027E478 (--1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_a3ced70d1476e93ea420f346718bf2f6_::__lambda_a3ced70d1476e93ea420f346718bf2f6_(_QWORD *a1)
{
  XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::~SwitchToSelectedItemAndDismiss((XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss *)(a1 + 1));
  if ( *a1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
}
