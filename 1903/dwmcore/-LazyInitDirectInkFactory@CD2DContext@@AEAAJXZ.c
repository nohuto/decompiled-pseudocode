/*
 * XREFs of ?LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ @ 0x180162380
 * Callers:
 *     ?CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z @ 0x1801600B0 (-CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x180161E80 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 * Callees:
 *     ?CreateDirectInkFactory@CD2DGenericInk@@SAJPEAUID2D1DeviceContext@@PEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x18016A5F4 (-CreateDirectInkFactory@CD2DGenericInk@@SAJPEAUID2D1DeviceContext@@PEAPEAUIDCompositionDirectInk.c)
 */

__int64 __fastcall CD2DContext::LazyInitDirectInkFactory(struct ID2D1DeviceContext **this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !this[45] )
    return CD2DGenericInk::CreateDirectInkFactory(this[29], this + 45);
  return result;
}
