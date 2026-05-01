/*
 * XREFs of CoCreateFreeThreadedMarshaler_0 @ 0x1800852DC
 * Callers:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18025D398 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _winrt::impl::make_marshaler_::_2_::marshaler::get_marshaler @ 0x18039837C (_winrt--impl--make_marshaler_--_2_--marshaler--get_marshaler.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CoCreateFreeThreadedMarshaler_0(LPUNKNOWN punkOuter, LPUNKNOWN *ppunkMarshal)
{
  return CoCreateFreeThreadedMarshaler(punkOuter, ppunkMarshal);
}
