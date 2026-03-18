/*
 * XREFs of PhysicalToLogicalInPlaceRgn @ 0x1C003C0C0
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C003B3B8 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C003CB30 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0043B34 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxRedrawHungWindow @ 0x1C01354AC (xxxRedrawHungWindow.c)
 * Callees:
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C003CA20 (PhysicalToLogicalInPlaceRgnWorker.c)
 */

__int64 __fastcall PhysicalToLogicalInPlaceRgn(struct tagWND *a1)
{
  return PhysicalToLogicalInPlaceRgnWorker(a1);
}
