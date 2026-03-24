/*
 * XREFs of SdbFindFirstTag @ 0x14067D180
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x14067C7C8 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbGetDatabaseID @ 0x14067CB48 (SdbGetDatabaseID.c)
 *     InitOnceScanIndexes @ 0x14067CFC0 (InitOnceScanIndexes.c)
 *     SdbpSearchDB @ 0x14067D56C (SdbpSearchDB.c)
 *     KsepDbGetDriverShims @ 0x14067D8A4 (KsepDbGetDriverShims.c)
 *     SdbpCheckAllAttributes @ 0x140720344 (SdbpCheckAllAttributes.c)
 *     KsepDbCacheReadDevice @ 0x140720CDC (KsepDbCacheReadDevice.c)
 *     KsepDbReadKFlag @ 0x140721048 (KsepDbReadKFlag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x140721158 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x140721450 (SdbpCheckMatchingFiles.c)
 *     SdbpFindMatchingName @ 0x140721664 (SdbpFindMatchingName.c)
 *     SdbFindFirstNamedTag @ 0x1407228D8 (SdbFindFirstNamedTag.c)
 *     SdbQueryDataExTagID @ 0x140722984 (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x140722BA0 (SdbReadEntryInformation.c)
 *     SdbpCheckForMatch @ 0x140722EB4 (SdbpCheckForMatch.c)
 *     SdbpMatchList @ 0x140722FB4 (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x14072312C (SdbpMatchOsVersion.c)
 *     SdbpGetExeEntryFlags @ 0x14072320C (SdbpGetExeEntryFlags.c)
 *     SdbpMatchCpu @ 0x14072372C (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x140723780 (SdbpMatchBios.c)
 *     SdbpMatchOem @ 0x1407237D4 (SdbpMatchOem.c)
 *     SdbpMatchAcpi @ 0x140723828 (SdbpMatchAcpi.c)
 *     InitOnceGetStringTableOffset @ 0x14075C940 (InitOnceGetStringTableOffset.c)
 *     KsepDbGetShimInfo @ 0x140847808 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x140847C08 (KsepDbReadKData.c)
 *     SdbpCheckMatchingDevice @ 0x1408E5BD0 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x1408E5CA0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1408E69E0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x1408E6F40 (SdbpCheckPackageAttributes.c)
 *     SdbpGetDeviceDWORD @ 0x1408E7388 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x1408E73D4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1408E75FC (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x1408E79A4 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x1408E7A4C (SdbpFindNextNamedTag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405C82BC (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x14067D1F4 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x14067D3E4 (SdbGetFirstChild.c)
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
