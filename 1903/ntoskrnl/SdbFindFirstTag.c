/*
 * XREFs of SdbFindFirstTag @ 0x14070C2E0
 * Callers:
 *     SdbGetDatabaseID @ 0x14070A608 (SdbGetDatabaseID.c)
 *     KsepDbGetDriverShims @ 0x14070A930 (KsepDbGetDriverShims.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x14070B9EC (SdbpFindFirstIndexedWildCardTag.c)
 *     InitOnceScanIndexes @ 0x14070C120 (InitOnceScanIndexes.c)
 *     SdbpSearchDB @ 0x14070C760 (SdbpSearchDB.c)
 *     KsepDbReadKFlag @ 0x14074B574 (KsepDbReadKFlag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14074B684 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x14074B960 (SdbpCheckMatchingFiles.c)
 *     SdbpFindMatchingName @ 0x14074C7DC (SdbpFindMatchingName.c)
 *     KsepDbCacheReadDevice @ 0x14074D20C (KsepDbCacheReadDevice.c)
 *     SdbpCheckForMatch @ 0x1407720CC (SdbpCheckForMatch.c)
 *     SdbpMatchList @ 0x1407721C8 (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x140772340 (SdbpMatchOsVersion.c)
 *     SdbpGetExeEntryFlags @ 0x140772420 (SdbpGetExeEntryFlags.c)
 *     SdbpMatchCpu @ 0x140772938 (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x14077298C (SdbpMatchBios.c)
 *     SdbpMatchOem @ 0x1407729E0 (SdbpMatchOem.c)
 *     SdbpMatchAcpi @ 0x140772A34 (SdbpMatchAcpi.c)
 *     InitOnceGetStringTableOffset @ 0x14078A160 (InitOnceGetStringTableOffset.c)
 *     KsepDbGetShimInfo @ 0x140882C88 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1408830BC (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140921C40 (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x14092202C (SdbReadEntryInformation.c)
 *     SdbpCheckMatchingDevice @ 0x1409222B0 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140922380 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1409230B0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x140923610 (SdbpCheckPackageAttributes.c)
 *     SdbpGetDeviceDWORD @ 0x140923A3C (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x140923A88 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140923CB0 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140924058 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x1409240FC (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1409241C4 (SdbpFindNextNamedTag.c)
 *     SdbpCheckAllAttributes @ 0x1409257F8 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbGetNextChild @ 0x14070C354 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x14070C544 (SdbGetTagFromTagID.c)
 *     SdbGetFirstChild @ 0x14070C5BC (SdbGetFirstChild.c)
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
