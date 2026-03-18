/*
 * XREFs of ?FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z @ 0x1C0241720
 * Callers:
 *     DrawEdge @ 0x1C007AF44 (DrawEdge.c)
 * Callees:
 *     ?DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z @ 0x1C02414B4 (-DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z.c)
 */

_BOOL8 __fastcall FillTriangle(HDC a1, struct tagRECT *a2, HBRUSH a3, __int16 a4)
{
  int v5; // eax
  int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // r9

  v5 = a4 & 0x1F;
  if ( v5 == 19 || v5 == 28 )
    v8 = -1;
  else
    v8 = 1;
  v9 = GreSelectBrush(a1, a3);
  DrawDiagonalLine(a1, a2, v8, v10, a4);
  return GreSelectBrush(a1, v9) != 0;
}
