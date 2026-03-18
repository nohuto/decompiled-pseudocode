/*
 * XREFs of PopWriteSecurePagesCallback @ 0x1402F7700
 * Callers:
 *     HvlIterateSecurePagesForHibernation @ 0x14028AAE4 (HvlIterateSecurePagesForHibernation.c)
 * Callees:
 *     PopWriteHiberPages @ 0x14059A8E8 (PopWriteHiberPages.c)
 */

__int64 __fastcall PopWriteSecurePagesCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = PopWriteHiberPages(
             a1,
             a2,
             1LL,
             *(_DWORD *)(a1 + 248)
           + (unsigned int)((4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12)
           + *(_DWORD *)(a1 + 252)
           + 2);
  ++*(_DWORD *)(a1 + 252);
  return result;
}
