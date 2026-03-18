/*
 * XREFs of NtGdiUnrealizeObject @ 0x1C0293970
 * Callers:
 *     <none>
 * Callees:
 *     GreUnrealizeObject @ 0x1C029BB14 (GreUnrealizeObject.c)
 */

__int64 __fastcall NtGdiUnrealizeObject(HPALETTE a1)
{
  return GreUnrealizeObject(a1);
}
