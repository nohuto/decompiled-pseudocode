/*
 * XREFs of VfThunkFindExportAddressAllTables @ 0x1409EF0CC
 * Callers:
 *     VfInitBootDriversLoaded @ 0x1409EEF88 (VfInitBootDriversLoaded.c)
 * Callees:
 *     ViThunkFindAllExportAddresses @ 0x1409EF168 (ViThunkFindAllExportAddresses.c)
 */

__int64 __fastcall VfThunkFindExportAddressAllTables(__int64 a1)
{
  ViThunkFindAllExportAddresses(a1, &VfRegularThunks, 48LL, &VfRegularThunksBitMapHeader);
  ViThunkFindAllExportAddresses(a1, &VfOrderDependentThunks, 56LL, &VfOrderDependentThunksBitMapHeader);
  ViThunkFindAllExportAddresses(a1, &VfPoolThunks, 48LL, &VfPoolThunksBitMapHeader);
  ViThunkFindAllExportAddresses(a1, &VfMandatoryThunks, 48LL, 0LL);
  return ViThunkFindAllExportAddresses(a1, &VfXdvThunks, 48LL, &VfXdvThunksBitMapHeader);
}
