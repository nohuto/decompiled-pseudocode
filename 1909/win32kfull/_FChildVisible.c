/*
 * XREFs of _FChildVisible @ 0x1C0024018
 * Callers:
 *     xxxShowWindowEx @ 0x1C002372C (xxxShowWindowEx.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006F578 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FChildVisible(__int64 a1)
{
  char v1; // dl

  v1 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
  while ( (v1 & 0xC0) == 0x40 )
  {
    a1 = *(_QWORD *)(a1 + 104);
    if ( !a1 )
      break;
    v1 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
    if ( (v1 & 0x10) == 0 )
      return 0LL;
  }
  return 1LL;
}
