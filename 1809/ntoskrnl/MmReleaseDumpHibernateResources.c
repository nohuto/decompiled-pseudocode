/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x1406E141C
 * Callers:
 *     PopFreeHiberContext @ 0x1406E1240 (PopFreeHiberContext.c)
 *     PopEnableHiberFile @ 0x14074716C (PopEnableHiberFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x1408212D0 (IopLiveDumpFreeMappingResources.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 */

__int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  unsigned __int64 PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_14043C060, PteAddress, v2);
}
