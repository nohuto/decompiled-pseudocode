/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_adedda421da4a00589298a86f7993fb7__void_::__abi_FunctorCapture__lambda_adedda421da4a00589298a86f7993fb7__void_ @ 0x1802F662C
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_adedda421da4a00589298a86f7993fb7___ @ 0x1802F5BC8 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_adedda421da4a00589298a86f7993fb7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     _lambda_adedda421da4a00589298a86f7993fb7_::_lambda_adedda421da4a00589298a86f7993fb7_ @ 0x1802F6384 (_lambda_adedda421da4a00589298a86f7993fb7_--_lambda_adedda421da4a00589298a86f7993fb7_.c)
 *     ??1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802F6F4C (--1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Platform::Details::__abi_FunctorCapture__lambda_adedda421da4a00589298a86f7993fb7__void_::__abi_FunctorCapture__lambda_adedda421da4a00589298a86f7993fb7__void_(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  *a1 = &off_1805BC9F0;
  lambda_adedda421da4a00589298a86f7993fb7_::_lambda_adedda421da4a00589298a86f7993fb7_((__int64)(a1 + 1), a2);
  XamlSwitcherTelemetry::NavigateAltTab::~NavigateAltTab((XamlSwitcherTelemetry::NavigateAltTab *)(a2 + 16));
  v4 = *(_QWORD **)(a2 + 8);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v4 + 16LL))(v4, *v4);
  return a1;
}
