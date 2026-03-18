/*
 * XREFs of ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C016214C
 * Callers:
 *     NtGdiEngTextOut @ 0x1C008E9B0 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C008ED60 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C0147ED0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngGradientFill @ 0x1C0296A50 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C0296EB0 (NtGdiEngLineTo.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02976F0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C0297A80 (NtGdiEngStrokePath.c)
 * Callees:
 *     <none>
 */

char __fastcall ECLIPOBJTMPBOUNDED::bValid(ECLIPOBJTMPBOUNDED *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 176) || *((_QWORD *)this + 21) )
    return 1;
  return result;
}
