/*
 * XREFs of VfThunkFindExportAddressAllTables @ 0x1409B8754
 * Callers:
 *     VfInitBootDriversLoaded @ 0x1409B8610 (VfInitBootDriversLoaded.c)
 * Callees:
 *     ViThunkFindAllExportAddresses @ 0x1409B87F0 (ViThunkFindAllExportAddresses.c)
 */

__int64 __fastcall VfThunkFindExportAddressAllTables(__int64 a1)
{
  ViThunkFindAllExportAddresses(a1, &VfRegularThunks, 40LL, &VfRegularThunksBitMapHeader);
  ViThunkFindAllExportAddresses(a1, &VfOrderDependentThunks, 48LL, &VfOrderDependentThunksBitMapHeader);
  ViThunkFindAllExportAddresses(a1, &VfPoolThunks, 40LL, &VfPoolThunksBitMapHeader);
  ViThunkFindAllExportAddresses(a1, &VfMandatoryThunks, 40LL, 0LL);
  return ViThunkFindAllExportAddresses(a1, &VfXdvThunks, 40LL, &VfXdvThunksBitMapHeader);
}
