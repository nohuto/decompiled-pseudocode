/*
 * XREFs of NtGdiGetDCDpiScaleValue @ 0x1C015DE70
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDCDpiScaleValue @ 0x1C000BD58 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall NtGdiGetDCDpiScaleValue(HDC a1)
{
  return GreGetDCDpiScaleValue(a1);
}
