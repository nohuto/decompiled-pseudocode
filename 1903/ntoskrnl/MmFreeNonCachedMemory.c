/*
 * XREFs of MmFreeNonCachedMemory @ 0x1408897F0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MiMakeDemandZeroPte @ 0x140076358 (MiMakeDemandZeroPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MmFreePagesFromMdl @ 0x1400EFC40 (MmFreePagesFromMdl.c)
 *     MiSetPfnOriginalPte @ 0x1402D971C (MiSetPfnOriginalPte.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __stdcall MmFreeNonCachedMemory(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  unsigned __int64 PteAddress; // rdi
  __int64 v4; // r8
  struct _MDL *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 DemandZeroPte; // rax
  __int64 v9; // r8
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  PteAddress = MiGetPteAddress((unsigned __int64)BaseAddress);
  v10 = MI_READ_PTE_LOCK_FREE(PteAddress);
  v4 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v10) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v5 = *(struct _MDL **)(v4 + 16);
  DemandZeroPte = MiMakeDemandZeroPte(4, v6, v4, v7);
  MiSetPfnOriginalPte(v9, DemandZeroPte);
  MmFreePagesFromMdl(v5);
  ExFreePoolWithTag(v5, 0);
  MiReleasePtes((__int64)&qword_1404669C0, PteAddress, (NumberOfBytes >> 12) + ((NumberOfBytes & 0xFFF) != 0));
}
