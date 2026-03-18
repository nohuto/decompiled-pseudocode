/*
 * XREFs of CmpGetSecurityDescriptorForKcbStack @ 0x14082E29C
 * Callers:
 *     CmpCreateTombstone @ 0x140280C1C (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x140630518 (CmpCreateChild.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140631AE8 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorForKcbStack(__int64 a1, __int64 a2)
{
  return CmpGetSecurityCacheEntryForKcbStack(a1, a2) + 32;
}
