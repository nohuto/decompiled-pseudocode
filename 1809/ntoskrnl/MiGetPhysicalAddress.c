/*
 * XREFs of MiGetPhysicalAddress @ 0x1401211C8
 * Callers:
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiVaToPfn @ 0x140098F50 (MiVaToPfn.c)
 *     MiFillPteHierarchy @ 0x140099020 (MiFillPteHierarchy.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSetNonPagedPoolNoSteal @ 0x14015EDF4 (MiSetNonPagedPoolNoSteal.c)
 */

__int64 __fastcall MiGetPhysicalAddress(unsigned __int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v6; // r10
  __int64 v7; // r10
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rax
  __int16 v10; // r9
  __int64 result; // rax
  unsigned __int64 v13[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
  {
    v9 = MiVaToPfn(a1);
LABEL_9:
    *a3 = 1;
    goto LABEL_10;
  }
  MiFillPteHierarchy(a1, v13);
  v6 = 4LL;
  do
  {
    if ( (MI_READ_PTE_LOCK_FREE(v13[v6 - 1]) & 1) == 0 )
      return 0LL;
  }
  while ( v6 != 1 );
  v14 = MI_READ_PTE_LOCK_FREE(v13[0]);
  if ( (v14 & 1) == 0 )
    return 0LL;
  if ( (unsigned int)MiGetSystemRegionType(a1) == 5 )
  {
    MiSetNonPagedPoolNoSteal(v7);
    v14 = MI_READ_PTE_LOCK_FREE(v8);
  }
  v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14) >> 12) & 0xFFFFFFFFFLL;
  if ( (v10 & 0x800) != 0 )
    goto LABEL_9;
LABEL_10:
  v14 = __PAIR64__(v9 >> 20, ((_DWORD)v9 << 12) + (unsigned int)(a1 & 0xFFF));
  result = 1LL;
  *a2 = v14;
  return result;
}
