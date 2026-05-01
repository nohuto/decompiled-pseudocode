/*
 * XREFs of ?InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z @ 0x18039A830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x18036804C (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x180368688 (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 *     ?SwitchItemInvoked_@MultitaskingViewTelemetry@@QEBAX_KI@Z @ 0x18039A998 (-SwitchItemInvoked_@MultitaskingViewTelemetry@@QEBAX_KI@Z.c)
 *     ?_GetIndexOfItem@CGridTelemetryController@@AEAAJPEAUISwitchItem@@PEA_K@Z @ 0x18039AAD4 (-_GetIndexOfItem@CGridTelemetryController@@AEAAJPEAUISwitchItem@@PEA_K@Z.c)
 */

void __fastcall CGridTelemetryController::InvokeSwitchItem(CGridTelemetryController *this, struct ISwitchItem *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  MultitaskingViewTelemetry *v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( CGridTelemetryController::_GetIndexOfItem(this, a2, &v8) >= 0 && MultitaskingViewTelemetry::IsEnabled(v4) )
  {
    wil::details::static_lazy<MultitaskingViewTelemetry>::get(
      v5,
      (void (__cdecl *)())lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
    MultitaskingViewTelemetry::SwitchItemInvoked_(v6, v8, 0);
  }
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
    (*(void (__fastcall **)(__int64, struct ISwitchItem *))(*(_QWORD *)v7 + 56LL))(v7, a2);
}
