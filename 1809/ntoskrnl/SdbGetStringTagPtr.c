/*
 * XREFs of SdbGetStringTagPtr @ 0x140721710
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x14067C7C8 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x14067D56C (SdbpSearchDB.c)
 *     SdbpCheckAllAttributes @ 0x140720344 (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x140721048 (KsepDbReadKFlag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x140721158 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x140721450 (SdbpCheckMatchingFiles.c)
 *     SdbpFindMatchingName @ 0x140721664 (SdbpFindMatchingName.c)
 *     SdbFindFirstNamedTag @ 0x1407228D8 (SdbFindFirstNamedTag.c)
 *     SdbQueryDataExTagID @ 0x140722984 (SdbQueryDataExTagID.c)
 *     KsepDbGetSdbString @ 0x1408477D4 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x140847C08 (KsepDbReadKData.c)
 *     SdbpCheckMatchingDevice @ 0x1408E5BD0 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x1408E5CA0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1408E69E0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x1408E6F40 (SdbpCheckPackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x1408E73D4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1408E75FC (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x1408E79A4 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x1408E7A4C (SdbpFindNextNamedTag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405C82BC (SdbGetTagFromTagID.c)
 *     SdbpGetMappedTagData @ 0x14067CE08 (SdbpGetMappedTagData.c)
 *     AslLogCallPrintf @ 0x140680C60 (AslLogCallPrintf.c)
 *     SdbpGetMappedStringFromTable @ 0x14072178C (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x1407218B4 (SdbpReadStringRef.c)
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
