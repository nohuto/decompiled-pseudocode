/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_a3ced70d1476e93ea420f346718bf2f6__void_::__abi_FunctorCapture__lambda_a3ced70d1476e93ea420f346718bf2f6__void_ @ 0x18027D994
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_a3ced70d1476e93ea420f346718bf2f6___ @ 0x18027CCF4 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_a3ced70d1476e93ea420f346718bf2f6.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _lambda_a3ced70d1476e93ea420f346718bf2f6_::_lambda_a3ced70d1476e93ea420f346718bf2f6_ @ 0x18027D680 (_lambda_a3ced70d1476e93ea420f346718bf2f6_--_lambda_a3ced70d1476e93ea420f346718bf2f6_.c)
 *     ??1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18027E478 (--1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Platform::Details::__abi_FunctorCapture__lambda_a3ced70d1476e93ea420f346718bf2f6__void_::__abi_FunctorCapture__lambda_a3ced70d1476e93ea420f346718bf2f6__void_(
        _QWORD *a1,
        __int64 *a2)
{
  *a1 = &off_18050A660;
  lambda_a3ced70d1476e93ea420f346718bf2f6_::_lambda_a3ced70d1476e93ea420f346718bf2f6_(a1 + 1, a2);
  XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::~SwitchToSelectedItemAndDismiss((XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss *)(a2 + 1));
  if ( *a2 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*a2 + 16LL))(*a2, *(_QWORD *)*a2);
  return a1;
}
