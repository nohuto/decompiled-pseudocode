/*
 * XREFs of SdbFindFirstTag @ 0x14070E0C0
 * Callers:
 *     SdbGetDatabaseID @ 0x14070C3E8 (SdbGetDatabaseID.c)
 *     KsepDbGetDriverShims @ 0x14070C710 (KsepDbGetDriverShims.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x14070D7CC (SdbpFindFirstIndexedWildCardTag.c)
 *     InitOnceScanIndexes @ 0x14070DF00 (InitOnceScanIndexes.c)
 *     SdbpSearchDB @ 0x14070E540 (SdbpSearchDB.c)
 *     KsepDbReadKFlag @ 0x14074C004 (KsepDbReadKFlag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14074C114 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x14074C3F0 (SdbpCheckMatchingFiles.c)
 *     SdbpFindMatchingName @ 0x14074D26C (SdbpFindMatchingName.c)
 *     KsepDbCacheReadDevice @ 0x14074DC9C (KsepDbCacheReadDevice.c)
 *     SdbpCheckForMatch @ 0x1407756AC (SdbpCheckForMatch.c)
 *     SdbpMatchList @ 0x1407757A8 (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x140775920 (SdbpMatchOsVersion.c)
 *     SdbpGetExeEntryFlags @ 0x140775A00 (SdbpGetExeEntryFlags.c)
 *     SdbpMatchCpu @ 0x140775F18 (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x140775F6C (SdbpMatchBios.c)
 *     SdbpMatchOem @ 0x140775FC0 (SdbpMatchOem.c)
 *     SdbpMatchAcpi @ 0x140776014 (SdbpMatchAcpi.c)
 *     InitOnceGetStringTableOffset @ 0x14078C5C0 (InitOnceGetStringTableOffset.c)
 *     KsepDbGetShimInfo @ 0x140882388 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1408827BC (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1409216A0 (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x140921A8C (SdbReadEntryInformation.c)
 *     SdbpCheckMatchingDevice @ 0x140921D10 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140921DE0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140922B10 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x140923070 (SdbpCheckPackageAttributes.c)
 *     SdbpGetDeviceDWORD @ 0x14092349C (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x1409234E8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140923710 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140923AB8 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x140923B5C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x140923C24 (SdbpFindNextNamedTag.c)
 *     SdbpCheckAllAttributes @ 0x140925258 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbGetNextChild @ 0x14070E134 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x14070E324 (SdbGetTagFromTagID.c)
 *     SdbGetFirstChild @ 0x14070E39C (SdbGetFirstChild.c)
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
