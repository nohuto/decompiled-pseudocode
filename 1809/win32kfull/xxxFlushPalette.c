/*
 * XREFs of xxxFlushPalette @ 0x1C0209C00
 * Callers:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 * Callees:
 *     GreRealizeDefaultPalette @ 0x1C0095C74 (GreRealizeDefaultPalette.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0209B64 (xxxBroadcastPaletteChanged.c)
 */

__int64 __fastcall xxxFlushPalette(__int64 *a1, int a2)
{
  GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 56LL), a2);
  return xxxBroadcastPaletteChanged(a1);
}
