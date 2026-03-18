/*
 * XREFs of NtGdiSelectPen @ 0x1C02A8BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiSelectPen(__int64 a1, __int64 a2)
{
  return GreSelectPenInternal(a1, a2, 0LL);
}
