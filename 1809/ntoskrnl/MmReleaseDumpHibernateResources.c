/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x1406E019C
 * Callers:
 *     PopFreeHiberContext @ 0x1406DFFC0 (PopFreeHiberContext.c)
 *     PopEnableHiberFile @ 0x140745F9C (PopEnableHiberFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x1408200F0 (IopLiveDumpFreeMappingResources.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140065DE8 (MiGetPteAddress.c)
 */

__int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  unsigned __int64 PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_14043AFA0, PteAddress, v2);
}
