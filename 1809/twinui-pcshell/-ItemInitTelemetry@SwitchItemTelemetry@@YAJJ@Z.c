/*
 * XREFs of ?ItemInitTelemetry@SwitchItemTelemetry@@YAJJ@Z @ 0x180300F74
 * Callers:
 *     ?CreateElementForObject@CSwitchItemElementFactory@@UEAAJPEAUIUnknown@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1802F6DD0 (-CreateElementForObject@CSwitchItemElementFactory@@UEAAJPEAUIUnknown@@PEAUISwitchThumbnailFactor.c)
 * Callees:
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x1802E7F24 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x1802E8568 (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 *     ?SwitchItemInitializationError_@MultitaskingViewTelemetry@@QEBAXJ@Z @ 0x180300FAC (-SwitchItemInitializationError_@MultitaskingViewTelemetry@@QEBAXJ@Z.c)
 */

__int64 __fastcall SwitchItemTelemetry::ItemInitTelemetry(SwitchItemTelemetry *this)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  MultitaskingViewTelemetry *v3; // rcx

  v1 = (unsigned int)this;
  if ( (int)this < 0 && MultitaskingViewTelemetry::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<MultitaskingViewTelemetry>::get(
      v2,
      (void (__cdecl *)())lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
    MultitaskingViewTelemetry::SwitchItemInitializationError_(v3, v1);
  }
  return v1;
}
