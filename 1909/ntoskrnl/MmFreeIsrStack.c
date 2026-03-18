/*
 * XREFs of MmFreeIsrStack @ 0x140892350
 * Callers:
 *     KiStartDynamicProcessor @ 0x14087DF0C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1409EDC20 (KeStartAllProcessors.c)
 * Callees:
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     MmFreeIndependentPages @ 0x14010D210 (MmFreeIndependentPages.c)
 */

__int64 __fastcall MmFreeIsrStack(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 PteAddress; // rax

  v1 = a1 - 24576;
  MmFreeIndependentPages(a1 - 24576, 0x6000uLL);
  PteAddress = MiGetPteAddress(v1 - 4096);
  return MiReleasePtes((__int64)&qword_1404666C0, PteAddress, 1u);
}
