/*
 * XREFs of MmFreeNonCachedMemory @ 0x14084F080
 * Callers:
 *     <none>
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiMakeDemandZeroPte @ 0x140097E20 (MiMakeDemandZeroPte.c)
 *     MmFreePagesFromMdl @ 0x1401374D0 (MmFreePagesFromMdl.c)
 *     MiSetPfnOriginalPte @ 0x1402BFFE4 (MiSetPfnOriginalPte.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __stdcall MmFreeNonCachedMemory(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  unsigned __int64 PteAddress; // rdi
  struct _MDL *v4; // rbx
  __int64 DemandZeroPte; // rax
  __int64 v6; // r8
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  PteAddress = MiGetPteAddress((unsigned __int64)BaseAddress);
  v7 = MI_READ_PTE_LOCK_FREE(PteAddress);
  v4 = *(struct _MDL **)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7) >> 12) & 0xFFFFFFFFFLL)
                       - 0x58000000000LL
                       + 16);
  DemandZeroPte = MiMakeDemandZeroPte(4);
  MiSetPfnOriginalPte(v6, DemandZeroPte);
  MmFreePagesFromMdl(v4);
  ExFreePoolWithTag(v4, 0);
  MiReleasePtes((__int64)&qword_14043C060, PteAddress, (NumberOfBytes >> 12) + ((NumberOfBytes & 0xFFF) != 0));
}
