/*
 * XREFs of NtGdiCancelDC @ 0x1C02A6F30
 * Callers:
 *     <none>
 * Callees:
 *     GreCancelDC @ 0x1C02993C0 (GreCancelDC.c)
 */

__int64 __fastcall NtGdiCancelDC(__int64 a1)
{
  return GreCancelDC(a1);
}
