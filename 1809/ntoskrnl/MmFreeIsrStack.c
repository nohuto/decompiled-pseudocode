/*
 * XREFs of MmFreeIsrStack @ 0x14085A0E4
 * Callers:
 *     KiStartDynamicProcessor @ 0x140844028 (KiStartDynamicProcessor.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x140001010 (MmFreeIndependentPages.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 */

__int64 __fastcall MmFreeIsrStack(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 PteAddress; // rax

  v1 = a1 - 24576;
  MmFreeIndependentPages(a1 - 24576, 0x6000uLL);
  PteAddress = MiGetPteAddress(v1 - 4096);
  return MiReleasePtes((__int64)&qword_14043C060, PteAddress, 1u);
}
