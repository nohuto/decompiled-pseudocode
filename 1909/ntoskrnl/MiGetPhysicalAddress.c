/*
 * XREFs of MiGetPhysicalAddress @ 0x140124CA0
 * Callers:
 *     MmGetPhysicalAddress @ 0x140124C70 (MmGetPhysicalAddress.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005F020 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiFillPteHierarchy @ 0x14005F0B0 (MiFillPteHierarchy.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVaToPfn @ 0x140124DA0 (MiVaToPfn.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiSetNonPagedPoolNoSteal @ 0x1402CF3B8 (MiSetNonPagedPoolNoSteal.c)
 */

__int64 __fastcall MiGetPhysicalAddress(unsigned __int64 a1, __int64 *a2, _DWORD *a3)
{
  unsigned __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r10
  __int16 v12; // r9
  unsigned __int64 v13; // r10
  unsigned __int64 v15[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  memset(v15, 0, 0x20uLL);
  *a3 = 0;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
  {
    v6 = MiVaToPfn(a1);
LABEL_3:
    *a3 = 1;
    goto LABEL_4;
  }
  MiFillPteHierarchy(a1, v15);
  v8 = 4LL;
  do
  {
    if ( (MI_READ_PTE_LOCK_FREE(v15[v8 - 1]) & 1) == 0 )
      return 0LL;
  }
  while ( v8 != 1 );
  v16 = MI_READ_PTE_LOCK_FREE(v15[0]);
  if ( (v16 & 1) == 0 )
    return 0LL;
  if ( (unsigned int)MiGetSystemRegionType(a1) == 5 )
  {
    MiSetNonPagedPoolNoSteal(v11, v9, v10);
    v16 = MI_READ_PTE_LOCK_FREE(v13);
  }
  v6 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16) >> 12) & 0xFFFFFFFFFLL;
  if ( (v12 & 0x800) != 0 )
    goto LABEL_3;
LABEL_4:
  v16 = v6 << 12;
  result = 1LL;
  LODWORD(v16) = (a1 & 0xFFF) + v16;
  *a2 = v16;
  return result;
}
