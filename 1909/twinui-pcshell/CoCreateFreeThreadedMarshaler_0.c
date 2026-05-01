/*
 * XREFs of CoCreateFreeThreadedMarshaler_0 @ 0x18008AB02
 * Callers:
 *     _winrt::impl::make_marshaler_::_2_::marshaler::get_marshaler @ 0x1800A430C (_winrt--impl--make_marshaler_--_2_--marshaler--get_marshaler.c)
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1802D53F8 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CoCreateFreeThreadedMarshaler_0(LPUNKNOWN punkOuter, LPUNKNOWN *ppunkMarshal)
{
  return CoCreateFreeThreadedMarshaler(punkOuter, ppunkMarshal);
}
