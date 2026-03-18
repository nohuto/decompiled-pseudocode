/*
 * XREFs of SdbGetStringTagPtr @ 0x14074D308
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x14070D7CC (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x14070E540 (SdbpSearchDB.c)
 *     KsepDbReadKFlag @ 0x14074C004 (KsepDbReadKFlag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14074C114 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x14074C3F0 (SdbpCheckMatchingFiles.c)
 *     SdbpFindMatchingName @ 0x14074D26C (SdbpFindMatchingName.c)
 *     KsepDbGetSdbString @ 0x140882354 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x1408827BC (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1409216A0 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingDevice @ 0x140921D10 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140921DE0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140922B10 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x140923070 (SdbpCheckPackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x1409234E8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140923710 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140923AB8 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x140923B5C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x140923C24 (SdbpFindNextNamedTag.c)
 *     SdbpCheckAllAttributes @ 0x140925258 (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x14070DD44 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x14070E324 (SdbGetTagFromTagID.c)
 *     SdbpGetMappedStringFromTable @ 0x14074D384 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x14074D4AC (SdbpReadStringRef.c)
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
