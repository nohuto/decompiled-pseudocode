/*
 * XREFs of xxxFlushPalette @ 0x1C01E3D30
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 * Callees:
 *     GreRealizeDefaultPalette @ 0x1C010A74C (GreRealizeDefaultPalette.c)
 *     xxxBroadcastPaletteChanged @ 0x1C01E3C9C (xxxBroadcastPaletteChanged.c)
 */

__int64 __fastcall xxxFlushPalette(unsigned __int64 *a1, int a2)
{
  GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 56LL), a2);
  return xxxBroadcastPaletteChanged(a1);
}
