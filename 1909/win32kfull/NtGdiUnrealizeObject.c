/*
 * XREFs of NtGdiUnrealizeObject @ 0x1C02A8DB0
 * Callers:
 *     <none>
 * Callees:
 *     GreUnrealizeObject @ 0x1C02B0564 (GreUnrealizeObject.c)
 */

__int64 __fastcall NtGdiUnrealizeObject(HPALETTE a1)
{
  return GreUnrealizeObject(a1);
}
