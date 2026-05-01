/*
 * XREFs of _lambda_bb329e9869818a924204dbfd8ac58224_::__lambda_bb329e9869818a924204dbfd8ac58224_ @ 0x18027E22C
 * Callers:
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bb329e9869818a924204dbfd8ac58224____::_1_::dtor$0 @ 0x18027CF22 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_bb329e9869818a924204dbfd8ac5822.c)
 *     _XamlAltTabViewHost::Navigate_::_1_::dtor$3 @ 0x1802805A6 (_XamlAltTabViewHost--Navigate_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18027E420 (--1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_bb329e9869818a924204dbfd8ac58224_::__lambda_bb329e9869818a924204dbfd8ac58224_(__int64 a1)
{
  __int64 v2; // rcx

  XamlSwitcherTelemetry::NavigateAltTab::~NavigateAltTab((XamlSwitcherTelemetry::NavigateAltTab *)(a1 + 16));
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
