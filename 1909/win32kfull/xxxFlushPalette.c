/*
 * XREFs of xxxFlushPalette @ 0x1C0221150
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 * Callees:
 *     GreRealizeDefaultPalette @ 0x1C0110FC8 (GreRealizeDefaultPalette.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0221098 (xxxBroadcastPaletteChanged.c)
 */

__int64 __fastcall xxxFlushPalette(__int64 *a1, int a2)
{
  GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 56LL), a2);
  return xxxBroadcastPaletteChanged(a1);
}
