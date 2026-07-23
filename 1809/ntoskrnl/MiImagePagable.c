/*
 * XREFs of MiImagePagable @ 0x140654D40
 * Callers:
 *     MmResetDriverPaging @ 0x1406550E0 (MmResetDriverPaging.c)
 *     MiEnablePagingOfDriver @ 0x14072C760 (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x1409BDE2C (MiLockPagableSections.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLookupDataTableEntry @ 0x1400DA610 (MiLookupDataTableEntry.c)
 */

_QWORD *__fastcall MiImagePagable(_QWORD *a1, unsigned __int64 a2)
{
  if ( (dword_140541174 & 1) != 0 || (unsigned int)MI_IS_PHYSICAL_ADDRESS(a2) )
    return 0LL;
  if ( !a1 )
    a1 = MiLookupDataTableEntry(a2, 1);
  if ( (unsigned int)MiGetSystemRegionType(a2) == 1 )
    return 0LL;
  else
    return a1;
}
