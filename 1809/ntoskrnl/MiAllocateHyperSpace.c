/*
 * XREFs of MiAllocateHyperSpace @ 0x1400B39C0
 * Callers:
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     MiGetPteMappingPair @ 0x1402CE358 (MiGetPteMappingPair.c)
 * Callees:
 *     MiGetUltraMapping @ 0x14003A740 (MiGetUltraMapping.c)
 *     MiFlushHyperSpace @ 0x140176054 (MiFlushHyperSpace.c)
 */

unsigned __int64 __fastcall MiAllocateHyperSpace(__int64 a1, __int64 a2)
{
  unsigned __int64 *MmInternal; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 HyperPte; // r9
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r8

  MmInternal = (unsigned __int64 *)KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal )
  {
    result = MiGetUltraMapping(MmInternal + 1556, 3u, 2LL, 0);
    MmInternal[1543] = ((result >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    HyperPte = (unsigned __int64)KeGetCurrentPrcb()->HyperPte;
    v5 = HyperPte & 0xFFFFFFFFFFFFF000uLL;
    if ( 64 - (HyperPte & 0xFFF) > 2 )
    {
      v6 = v5 + ((HyperPte & 0xFFF) << 12);
    }
    else
    {
      MiFlushHyperSpace(HyperPte & 0xFFF, a2, (unsigned int)HyperPte);
      HyperPte = v5;
      v6 = v5;
    }
    result = v6;
    KeGetCurrentPrcb()->HyperPte = (void *)(HyperPte + 2);
  }
  return result;
}
