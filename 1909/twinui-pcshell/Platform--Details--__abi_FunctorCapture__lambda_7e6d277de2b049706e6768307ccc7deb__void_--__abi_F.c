/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_7e6d277de2b049706e6768307ccc7deb__void_::__abi_FunctorCapture__lambda_7e6d277de2b049706e6768307ccc7deb__void_ @ 0x1802F65C8
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_7e6d277de2b049706e6768307ccc7deb___ @ 0x1802F5A98 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_7e6d277de2b049706e6768307ccc7deb.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     _lambda_7e6d277de2b049706e6768307ccc7deb_::_lambda_7e6d277de2b049706e6768307ccc7deb_ @ 0x1802F6324 (_lambda_7e6d277de2b049706e6768307ccc7deb_--_lambda_7e6d277de2b049706e6768307ccc7deb_.c)
 *     ??1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802F6FA4 (--1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Platform::Details::__abi_FunctorCapture__lambda_7e6d277de2b049706e6768307ccc7deb__void_::__abi_FunctorCapture__lambda_7e6d277de2b049706e6768307ccc7deb__void_(
        _QWORD *a1,
        __int64 *a2)
{
  *a1 = &off_1805BCA10;
  lambda_7e6d277de2b049706e6768307ccc7deb_::_lambda_7e6d277de2b049706e6768307ccc7deb_(a1 + 1, a2);
  XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::~SwitchToSelectedItemAndDismiss((XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss *)(a2 + 1));
  if ( *a2 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*a2 + 16LL))(*a2, *(_QWORD *)*a2);
  return a1;
}
