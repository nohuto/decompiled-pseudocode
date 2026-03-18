/*
 * XREFs of ?ValidUmpdSizl@@YAHUtagSIZE@@_N@Z @ 0x1C01104CC
 * Callers:
 *     NtGdiEngCreateBitmap @ 0x1C0110310 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngCreateDeviceSurface @ 0x1C0110450 (NtGdiEngCreateDeviceSurface.c)
 *     NtGdiEngCreateDeviceBitmap @ 0x1C02AB1F0 (NtGdiEngCreateDeviceBitmap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidUmpdSizl(struct tagSIZE a1, char a2)
{
  return a1.cx > 0 && a1.cy > 0 && (!a2 || (unsigned __int64)(a1.cx * (__int64)a1.cy) <= 0xFFFFFFFF);
}
