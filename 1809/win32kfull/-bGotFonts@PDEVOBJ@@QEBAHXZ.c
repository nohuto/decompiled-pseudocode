/*
 * XREFs of ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x1C015F1B0
 * Callers:
 *     GreGetCharSet @ 0x1C00241A4 (GreGetCharSet.c)
 *     GreGetTextFaceW @ 0x1C0026ED0 (GreGetTextFaceW.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0082F1C (GreGetOutlineTextMetricsInternalW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::bGotFonts(PDEVOBJ *this)
{
  return (*(_DWORD *)(*(_QWORD *)this + 40LL) >> 6) & 1;
}
