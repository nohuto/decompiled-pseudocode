/*
 * XREFs of PhysicalToLogicalInPlaceRgn @ 0x1C00C43B4
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00C3D60 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C00C4E50 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00CD04C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxRedrawHungWindow @ 0x1C015DC18 (xxxRedrawHungWindow.c)
 * Callees:
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C00C43CC (PhysicalToLogicalInPlaceRgnWorker.c)
 */

__int64 __fastcall PhysicalToLogicalInPlaceRgn(__int64 a1, __int64 a2)
{
  return PhysicalToLogicalInPlaceRgnWorker(a1, a2, 0LL);
}
