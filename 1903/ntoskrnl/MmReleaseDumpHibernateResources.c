/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x140727488
 * Callers:
 *     PopFreeHiberContext @ 0x1407272AC (PopFreeHiberContext.c)
 *     PopEnableHiberFile @ 0x14074AAD0 (PopEnableHiberFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x14085A140 (IopLiveDumpFreeMappingResources.c)
 * Callees:
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 */

__int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  unsigned __int64 PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_1404669C0, PteAddress, v2);
}
