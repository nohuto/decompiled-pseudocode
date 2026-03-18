/*
 * XREFs of xxxPaintRect @ 0x1C008D854
 * Callers:
 *     xxxFillWindow @ 0x1C008D7C8 (xxxFillWindow.c)
 * Callees:
 *     GreSetBrushOrg @ 0x1C008D924 (GreSetBrushOrg.c)
 *     FillRect @ 0x1C008DA04 (FillRect.c)
 *     xxxGetControlColor @ 0x1C008DB14 (xxxGetControlColor.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 */

__int64 __fastcall xxxPaintRect(struct tagWND *a1, __int64 a2, HDC a3, HBRUSH ControlColor, const RECT *a5)
{
  struct tagWND *v7; // rbx

  v7 = a1;
  if ( !a1 )
    v7 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL);
  GetDesktopWindow(v7);
  GreSetBrushOrg(a3);
  if ( (unsigned __int64)ControlColor < 7 )
    ControlColor = (HBRUSH)xxxGetControlColor(v7);
  FillRect(a3, a5, ControlColor);
  GreSetBrushOrg(a3);
  return 1LL;
}
