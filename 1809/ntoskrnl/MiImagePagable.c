/*
 * XREFs of MiImagePagable @ 0x140653B80
 * Callers:
 *     MmResetDriverPaging @ 0x140653F20 (MmResetDriverPaging.c)
 *     MiEnablePagingOfDriver @ 0x14072B570 (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x1409BCE2C (MiLockPagableSections.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D910 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLookupDataTableEntry @ 0x1400DA590 (MiLookupDataTableEntry.c)
 */

_QWORD *__fastcall MiImagePagable(_QWORD *a1, unsigned __int64 a2)
{
  if ( (dword_140540174 & 1) != 0 || (unsigned int)MI_IS_PHYSICAL_ADDRESS(a2) )
    return 0LL;
  if ( !a1 )
    a1 = MiLookupDataTableEntry(a2, 1);
  if ( (unsigned int)MiGetSystemRegionType(a2) == 1 )
    return 0LL;
  else
    return a1;
}
