/*
 * XREFs of NtGdiUnrealizeObject @ 0x1C02A9260
 * Callers:
 *     <none>
 * Callees:
 *     GreUnrealizeObject @ 0x1C02B0A14 (GreUnrealizeObject.c)
 */

__int64 __fastcall NtGdiUnrealizeObject(HPALETTE a1)
{
  return GreUnrealizeObject(a1);
}
