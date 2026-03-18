/*
 * XREFs of SdbGetStringTagPtr @ 0x14074C878
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x14070B9EC (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x14070C760 (SdbpSearchDB.c)
 *     KsepDbReadKFlag @ 0x14074B574 (KsepDbReadKFlag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14074B684 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x14074B960 (SdbpCheckMatchingFiles.c)
 *     SdbpFindMatchingName @ 0x14074C7DC (SdbpFindMatchingName.c)
 *     KsepDbGetSdbString @ 0x140882C54 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x1408830BC (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140921C40 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingDevice @ 0x1409222B0 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140922380 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1409230B0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x140923610 (SdbpCheckPackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x140923A88 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140923CB0 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140924058 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x1409240FC (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1409241C4 (SdbpFindNextNamedTag.c)
 *     SdbpCheckAllAttributes @ 0x1409257F8 (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x14070BF64 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x14070C544 (SdbGetTagFromTagID.c)
 *     SdbpGetMappedStringFromTable @ 0x14074C8F4 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x14074CA1C (SdbpReadStringRef.c)
 */

__int64 __fastcall SdbGetStringTagPtr(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  __int16 v5; // ax
  unsigned int StringRef; // eax

  v2 = 0LL;
  v3 = a2;
  if ( a1 )
  {
    v5 = SdbGetTagFromTagID(a1, a2) & 0xF000;
    if ( v5 == (__int16)0x8000 )
      return SdbpGetMappedTagData(a1, v3);
    if ( v5 != 24576 )
      return v2;
    StringRef = SdbpReadStringRef(a1, v3);
    if ( StringRef )
      return SdbpGetMappedStringFromTable(a1, StringRef);
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
