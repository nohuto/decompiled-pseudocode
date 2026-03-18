/*
 * XREFs of NtGdiGetBitmapDpiScaleValue @ 0x1C0291C00
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapDpiScaleValue @ 0x1C02823E4 (GreGetBitmapDpiScaleValue.c)
 */

__int64 __fastcall NtGdiGetBitmapDpiScaleValue(HSURF a1)
{
  return GreGetBitmapDpiScaleValue(a1);
}
