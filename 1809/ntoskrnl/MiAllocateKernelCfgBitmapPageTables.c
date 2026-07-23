/*
 * XREFs of MiAllocateKernelCfgBitmapPageTables @ 0x14085CE74
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140710634 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x140026644 (MiMakeZeroedPageTables.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 */

__int64 __fastcall MiAllocateKernelCfgBitmapPageTables(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // r9

  MiGetPteAddress(qword_140439EE0 + ((2 * (((unsigned __int64)a2 + 0x7FFFFFFFFFFFLL + a1) >> 4)) >> 3));
  MiGetPteAddress(v2);
  return (unsigned int)MiMakeZeroedPageTables() == 0 ? 0xC000009A : 0;
}
