/*
 * XREFs of xxxPaintRect @ 0x1C009F974
 * Callers:
 *     xxxFillWindow @ 0x1C009FB24 (xxxFillWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     FillRect @ 0x1C009F914 (FillRect.c)
 *     GreSetBrushOrg @ 0x1C009FA48 (GreSetBrushOrg.c)
 *     xxxGetControlColor @ 0x1C01293EC (xxxGetControlColor.c)
 */

__int64 __fastcall xxxPaintRect(struct tagWND *a1, __int64 a2, HDC a3, HBRUSH ControlColor, LPCRECT a5)
{
  struct tagWND *v7; // rbx

  v7 = a1;
  if ( !a1 )
    v7 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL);
  GetDesktopWindow((__int64)v7);
  GreSetBrushOrg(a3);
  if ( (unsigned __int64)ControlColor < 7 )
    ControlColor = (HBRUSH)xxxGetControlColor(v7);
  FillRect(a3, a5, ControlColor);
  GreSetBrushOrg(a3);
  return 1LL;
}
