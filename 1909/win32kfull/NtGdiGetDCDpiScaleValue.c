/*
 * XREFs of NtGdiGetDCDpiScaleValue @ 0x1C015EE20
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDCDpiScaleValue @ 0x1C00EAEB8 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall NtGdiGetDCDpiScaleValue(HDC a1)
{
  return GreGetDCDpiScaleValue(a1);
}
