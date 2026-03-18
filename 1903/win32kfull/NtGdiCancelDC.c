/*
 * XREFs of NtGdiCancelDC @ 0x1C02A73E0
 * Callers:
 *     <none>
 * Callees:
 *     GreCancelDC @ 0x1C0299970 (GreCancelDC.c)
 */

__int64 __fastcall NtGdiCancelDC(__int64 a1)
{
  return GreCancelDC(a1);
}
