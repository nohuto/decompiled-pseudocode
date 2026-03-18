/*
 * XREFs of SdbFindFirstTag @ 0x14067D1A0
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x14067C7E8 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbGetDatabaseID @ 0x14067CB68 (SdbGetDatabaseID.c)
 *     InitOnceScanIndexes @ 0x14067CFE0 (InitOnceScanIndexes.c)
 *     SdbpSearchDB @ 0x14067D58C (SdbpSearchDB.c)
 *     KsepDbGetDriverShims @ 0x14067D8C4 (KsepDbGetDriverShims.c)
 *     SdbpCheckAllAttributes @ 0x140720364 (SdbpCheckAllAttributes.c)
 *     KsepDbCacheReadDevice @ 0x140720CFC (KsepDbCacheReadDevice.c)
 *     KsepDbReadKFlag @ 0x140721068 (KsepDbReadKFlag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x140721178 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x140721470 (SdbpCheckMatchingFiles.c)
 *     SdbpFindMatchingName @ 0x140721684 (SdbpFindMatchingName.c)
 *     SdbFindFirstNamedTag @ 0x1407228F8 (SdbFindFirstNamedTag.c)
 *     SdbQueryDataExTagID @ 0x1407229A4 (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x140722BC0 (SdbReadEntryInformation.c)
 *     SdbpCheckForMatch @ 0x140722ED4 (SdbpCheckForMatch.c)
 *     SdbpMatchList @ 0x140722FD4 (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x14072314C (SdbpMatchOsVersion.c)
 *     SdbpGetExeEntryFlags @ 0x14072322C (SdbpGetExeEntryFlags.c)
 *     SdbpMatchCpu @ 0x14072374C (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x1407237A0 (SdbpMatchBios.c)
 *     SdbpMatchOem @ 0x1407237F4 (SdbpMatchOem.c)
 *     SdbpMatchAcpi @ 0x140723848 (SdbpMatchAcpi.c)
 *     InitOnceGetStringTableOffset @ 0x14075C960 (InitOnceGetStringTableOffset.c)
 *     KsepDbGetShimInfo @ 0x140847828 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x140847C28 (KsepDbReadKData.c)
 *     SdbpCheckMatchingDevice @ 0x1408E5BF0 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x1408E5CC0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1408E6A00 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x1408E6F60 (SdbpCheckPackageAttributes.c)
 *     SdbpGetDeviceDWORD @ 0x1408E73A8 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x1408E73F4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1408E761C (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x1408E79C4 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x1408E7A6C (SdbpFindNextNamedTag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405C82BC (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x14067D214 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x14067D404 (SdbGetFirstChild.c)
 */

__int64 __fastcall SdbFindFirstTag(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebp
  unsigned int i; // eax
  unsigned int v8; // ebx

  v3 = 0;
  v5 = a2;
  for ( i = SdbGetFirstChild(a1, a2); ; i = SdbGetNextChild(a1, v5, v8) )
  {
    v8 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i) == a3 )
      return v8;
  }
  return v3;
}
