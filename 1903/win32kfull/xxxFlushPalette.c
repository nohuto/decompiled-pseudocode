/*
 * XREFs of xxxFlushPalette @ 0x1C0221690
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 * Callees:
 *     GreRealizeDefaultPalette @ 0x1C0136858 (GreRealizeDefaultPalette.c)
 *     xxxBroadcastPaletteChanged @ 0x1C02215D8 (xxxBroadcastPaletteChanged.c)
 */

__int64 __fastcall xxxFlushPalette(unsigned __int64 *a1, int a2)
{
  GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 56LL), a2);
  return xxxBroadcastPaletteChanged(a1);
}
