/*
 * XREFs of ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C011190C
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00391F4 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C003CA20 (PhysicalToLogicalInPlaceRgnWorker.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C003CB30 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C004134C (-GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     UpdateWindowMonitor @ 0x1C00437C0 (UpdateWindowMonitor.c)
 *     IsChildWindowDpiBoundary @ 0x1C007A5D8 (IsChildWindowDpiBoundary.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1C01D2A2C (ScaleDpiOffsetWithSubpixel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowCoordinateSpaceDpi(struct tagWND *a1)
{
  __int64 v1; // rcx
  unsigned __int16 v2; // bx
  __int64 v3; // rax

  v1 = *((_QWORD *)a1 + 5);
  v2 = (*(_DWORD *)(v1 + 288) >> 8) & 0x1FF;
  if ( !v2 )
  {
    v3 = ValidateHmonitorNoRip(*(_QWORD *)(v1 + 256));
    if ( v3 )
      return *(unsigned __int16 *)(*(_QWORD *)(v3 + 40) + 64LL);
  }
  return v2;
}
