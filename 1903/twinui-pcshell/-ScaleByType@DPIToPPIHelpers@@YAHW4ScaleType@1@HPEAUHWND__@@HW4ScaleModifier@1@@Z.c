/*
 * XREFs of ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x180419AD4
 * Callers:
 *     s_DrawGlyph @ 0x180417040 (s_DrawGlyph.c)
 *     s_OnDrawItem @ 0x1804178A4 (s_OnDrawItem.c)
 *     s_OnMeasureItem @ 0x180418250 (s_OnMeasureItem.c)
 * Callees:
 *     <none>
 */

int __fastcall DPIToPPIHelpers::ScaleByType(int a1, unsigned int a2, HWND a3, int a4)
{
  if ( a1 == 1 )
    return DPIToPPIHelpers::ScaleByPPI(a2, a3, 0);
  else
    return DPIToPPIHelpers::ScaleBySpecificDPI((HWND)a2, a4, 0);
}
