/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_bb329e9869818a924204dbfd8ac58224__void_::__abi_FunctorCapture__lambda_bb329e9869818a924204dbfd8ac58224__void_ @ 0x18027D9F8
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bb329e9869818a924204dbfd8ac58224___ @ 0x18027CE24 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_bb329e9869818a924204dbfd8ac58224.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _lambda_bb329e9869818a924204dbfd8ac58224_::_lambda_bb329e9869818a924204dbfd8ac58224_ @ 0x18027D6E0 (_lambda_bb329e9869818a924204dbfd8ac58224_--_lambda_bb329e9869818a924204dbfd8ac58224_.c)
 *     ??1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18027E420 (--1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Platform::Details::__abi_FunctorCapture__lambda_bb329e9869818a924204dbfd8ac58224__void_::__abi_FunctorCapture__lambda_bb329e9869818a924204dbfd8ac58224__void_(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  *a1 = &off_18050A670;
  lambda_bb329e9869818a924204dbfd8ac58224_::_lambda_bb329e9869818a924204dbfd8ac58224_((__int64)(a1 + 1), a2);
  XamlSwitcherTelemetry::NavigateAltTab::~NavigateAltTab((XamlSwitcherTelemetry::NavigateAltTab *)(a2 + 16));
  v4 = *(_QWORD **)(a2 + 8);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v4 + 16LL))(v4, *v4);
  return a1;
}
