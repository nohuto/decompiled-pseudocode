/*
 * XREFs of ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C00FAA00
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00274E8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     IsChildWindowDpiBoundary @ 0x1C002A5A8 (IsChildWindowDpiBoundary.c)
 *     ?ExcludeWindowRects@@YAHPEAUtagWND@@00PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z @ 0x1C002A600 (-ExcludeWindowRects@@YAHPEAUtagWND@@00PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C002B770 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     UpdateWindowMonitor @ 0x1C002DF20 (UpdateWindowMonitor.c)
 *     IsDpiBoundaryBetweenWindows @ 0x1C0074AA0 (IsDpiBoundaryBetweenWindows.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1C01AFC2C (ScaleDpiOffsetWithSubpixel.c)
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
