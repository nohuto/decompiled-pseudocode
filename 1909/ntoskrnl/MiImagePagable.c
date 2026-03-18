/*
 * XREFs of MiImagePagable @ 0x1406A5638
 * Callers:
 *     MmResetDriverPaging @ 0x1406A5330 (MmResetDriverPaging.c)
 *     MiEnablePagingOfDriver @ 0x14074F8AC (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x1409F14D8 (MiLockPagableSections.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005F020 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLookupDataTableEntry @ 0x1400FB388 (MiLookupDataTableEntry.c)
 */

__int64 __fastcall MiImagePagable(__int64 a1, unsigned __int64 a2)
{
  if ( (dword_140571184 & 1) != 0 || (unsigned int)MI_IS_PHYSICAL_ADDRESS(a2) )
    return 0LL;
  if ( !a1 )
    a1 = MiLookupDataTableEntry(a2, 1LL);
  if ( (unsigned int)MiGetSystemRegionType(a2) == 1 )
    return 0LL;
  else
    return a1;
}
