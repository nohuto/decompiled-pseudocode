/*
 * XREFs of ?LogValueChanged@PropertyCache@Holographic@Internal@Windows@@MEAAXAEBU_GUID@@AEBV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x180159930
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18015988C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?PropertyCache_SetValue_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1PEBX_K@Z @ 0x18015BF2C (-PropertyCache_SetValue_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1PEBX_.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161814 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall Windows::Internal::Holographic::PropertyCache::LogValueChanged(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v5; // rcx
  __int64 v6; // rcx

  result = HolographicDriverClientTrace::IsEnabled(a1);
  if ( result )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v5,
      lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    return HolographicDriverClientTrace::PropertyCache_SetValue_(v6, *(unsigned int *)(a1 + 8), a1 + 12, a2);
  }
  return result;
}
