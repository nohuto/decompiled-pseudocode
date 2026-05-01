/*
 * XREFs of ??$PTPGestureActionCompleted@AEAI@MultitaskingViewTelemetry@@SAXAEAI@Z @ 0x18036AB68
 * Callers:
 *     _lambda_e6f893affb6bf575c6b684d40d6f796c_::operator() @ 0x180364044 (_lambda_e6f893affb6bf575c6b684d40d6f796c_--operator().c)
 * Callees:
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x18036804C (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x180368688 (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 *     ?PTPGestureActionCompleted_@MultitaskingViewTelemetry@@QEBAXI@Z @ 0x18036AB9C (-PTPGestureActionCompleted_@MultitaskingViewTelemetry@@QEBAXI@Z.c)
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
