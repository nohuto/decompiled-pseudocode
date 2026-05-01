/*
 * XREFs of ??$PTPGestureActionCompleted@AEAI@MultitaskingViewTelemetry@@SAXAEAI@Z @ 0x1802EA8B4
 * Callers:
 *     _lambda_e6f893affb6bf575c6b684d40d6f796c_::operator() @ 0x1802E3F14 (_lambda_e6f893affb6bf575c6b684d40d6f796c_--operator().c)
 * Callees:
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x1802E7F24 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x1802E8568 (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 *     ?PTPGestureActionCompleted_@MultitaskingViewTelemetry@@QEBAXI@Z @ 0x1802EA8E8 (-PTPGestureActionCompleted_@MultitaskingViewTelemetry@@QEBAXI@Z.c)
 */

void __fastcall MultitaskingViewTelemetry::PTPGestureActionCompleted<unsigned int &>(unsigned int *a1)
{
  __int64 v2; // rcx
  MultitaskingViewTelemetry *v3; // rcx

  if ( MultitaskingViewTelemetry::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<MultitaskingViewTelemetry>::get(
      v2,
      (void (__cdecl *)())lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
    MultitaskingViewTelemetry::PTPGestureActionCompleted_(v3, *a1);
  }
}
