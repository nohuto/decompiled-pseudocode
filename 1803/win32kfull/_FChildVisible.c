/*
 * XREFs of _FChildVisible @ 0x1C0075BA0
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00274E8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FChildVisible(__int64 a1)
{
  char v1; // dl

  v1 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
  while ( (v1 & 0xC0) == 0x40 )
  {
    a1 = *(_QWORD *)(a1 + 80);
    if ( !a1 )
      break;
    v1 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
    if ( (v1 & 0x10) == 0 )
      return 0LL;
  }
  return 1LL;
}
