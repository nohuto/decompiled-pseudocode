/*
 * XREFs of xxxPaintRect @ 0x1C007B3E4
 * Callers:
 *     xxxFillWindow @ 0x1C007B358 (xxxFillWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     GreSetBrushOrg @ 0x1C007B4B8 (GreSetBrushOrg.c)
 *     FillRect @ 0x1C007B5C0 (FillRect.c)
 *     xxxGetControlColor @ 0x1C007B6E0 (xxxGetControlColor.c)
 */

__int64 __fastcall xxxPaintRect(struct tagWND *a1, __int64 a2, HDC a3, HBRUSH ControlColor, const RECT *a5)
{
  struct tagWND *v7; // rbx

  v7 = a1;
  if ( !a1 )
    v7 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
  GetDesktopWindow((__int64)v7);
  GreSetBrushOrg(a3);
  if ( (unsigned __int64)ControlColor < 7 )
    ControlColor = (HBRUSH)xxxGetControlColor(v7);
  FillRect(a3, a5, ControlColor);
  GreSetBrushOrg(a3);
  return 1LL;
}
