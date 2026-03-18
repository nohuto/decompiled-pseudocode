/*
 * XREFs of NtGdiGetBitmapDpiScaleValue @ 0x1C027EB10
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapDpiScaleValue @ 0x1C026E3C8 (GreGetBitmapDpiScaleValue.c)
 */

__int64 __fastcall NtGdiGetBitmapDpiScaleValue(__int64 a1, __int64 a2)
{
  return GreGetBitmapDpiScaleValue(a1, a2);
}
