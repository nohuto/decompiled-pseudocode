/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x14072B9F0
 * Callers:
 *     PopFreeHiberContext @ 0x14072B814 (PopFreeHiberContext.c)
 *     PopEnableHiberFile @ 0x140759E1C (PopEnableHiberFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x140859840 (IopLiveDumpFreeMappingResources.c)
 * Callees:
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 */

__int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  unsigned __int64 PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_1404666C0, PteAddress, v2);
}
