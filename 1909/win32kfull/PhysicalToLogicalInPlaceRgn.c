/*
 * XREFs of PhysicalToLogicalInPlaceRgn @ 0x1C0065A84
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0065430 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0066520 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E71C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxRedrawHungWindow @ 0x1C015EBC8 (xxxRedrawHungWindow.c)
 * Callees:
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C0065A9C (PhysicalToLogicalInPlaceRgnWorker.c)
 */

__int64 __fastcall PhysicalToLogicalInPlaceRgn(__int64 a1, __int64 a2)
{
  return PhysicalToLogicalInPlaceRgnWorker(a1, a2, 0LL);
}
