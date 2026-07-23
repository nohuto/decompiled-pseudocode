/*
 * XREFs of CmpGetSecurityDescriptorForKcbStackEx @ 0x140581AA0
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x140597210 (CmpCheckOpenAccessOnKeyBody.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405D9920 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorForKcbStackEx(__int64 a1, __int64 a2, __int64 a3)
{
  return CmpGetSecurityCacheEntryForKcbStack(a1, a2, a3) + 32;
}
