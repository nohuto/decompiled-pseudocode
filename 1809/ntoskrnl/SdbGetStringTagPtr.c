/*
 * XREFs of SdbGetStringTagPtr @ 0x1407229B0
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x14067D988 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x14067E72C (SdbpSearchDB.c)
 *     SdbpCheckAllAttributes @ 0x1407215E4 (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x1407222E8 (KsepDbReadKFlag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407223F8 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x1407226F0 (SdbpCheckMatchingFiles.c)
 *     SdbpFindMatchingName @ 0x140722904 (SdbpFindMatchingName.c)
 *     SdbFindFirstNamedTag @ 0x140723B78 (SdbFindFirstNamedTag.c)
 *     SdbQueryDataExTagID @ 0x140723C24 (SdbQueryDataExTagID.c)
 *     KsepDbGetSdbString @ 0x140848A34 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x140848E68 (KsepDbReadKData.c)
 *     SdbpCheckMatchingDevice @ 0x1408E6E90 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x1408E6F60 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1408E7CA0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x1408E8200 (SdbpCheckPackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x1408E8694 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1408E88BC (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x1408E8C64 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x1408E8D0C (SdbpFindNextNamedTag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405C92BC (SdbGetTagFromTagID.c)
 *     SdbpGetMappedTagData @ 0x14067DFC8 (SdbpGetMappedTagData.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     SdbpGetMappedStringFromTable @ 0x140722A2C (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x140722B54 (SdbpReadStringRef.c)
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
