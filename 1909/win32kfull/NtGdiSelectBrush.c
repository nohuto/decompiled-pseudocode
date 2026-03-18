/*
 * XREFs of NtGdiSelectBrush @ 0x1C02A8BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiSelectBrush(__int64 a1, __int64 a2)
{
  return GreSelectBrushInternal(a1, a2, 0LL);
}
