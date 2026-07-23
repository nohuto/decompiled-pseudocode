/*
 * XREFs of SdbFindFirstTag @ 0x14067E340
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x14067D988 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbGetDatabaseID @ 0x14067DD08 (SdbGetDatabaseID.c)
 *     InitOnceScanIndexes @ 0x14067E180 (InitOnceScanIndexes.c)
 *     SdbpSearchDB @ 0x14067E72C (SdbpSearchDB.c)
 *     KsepDbGetDriverShims @ 0x14067EA64 (KsepDbGetDriverShims.c)
 *     SdbpCheckAllAttributes @ 0x1407215E4 (SdbpCheckAllAttributes.c)
 *     KsepDbCacheReadDevice @ 0x140721F7C (KsepDbCacheReadDevice.c)
 *     KsepDbReadKFlag @ 0x1407222E8 (KsepDbReadKFlag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407223F8 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x1407226F0 (SdbpCheckMatchingFiles.c)
 *     SdbpFindMatchingName @ 0x140722904 (SdbpFindMatchingName.c)
 *     SdbFindFirstNamedTag @ 0x140723B78 (SdbFindFirstNamedTag.c)
 *     SdbQueryDataExTagID @ 0x140723C24 (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x140723E40 (SdbReadEntryInformation.c)
 *     SdbpCheckForMatch @ 0x140724154 (SdbpCheckForMatch.c)
 *     SdbpMatchList @ 0x140724254 (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x1407243CC (SdbpMatchOsVersion.c)
 *     SdbpGetExeEntryFlags @ 0x1407244AC (SdbpGetExeEntryFlags.c)
 *     SdbpMatchCpu @ 0x1407249CC (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x140724A20 (SdbpMatchBios.c)
 *     SdbpMatchOem @ 0x140724A74 (SdbpMatchOem.c)
 *     SdbpMatchAcpi @ 0x140724AC8 (SdbpMatchAcpi.c)
 *     InitOnceGetStringTableOffset @ 0x14075DB30 (InitOnceGetStringTableOffset.c)
 *     KsepDbGetShimInfo @ 0x140848A68 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x140848E68 (KsepDbReadKData.c)
 *     SdbpCheckMatchingDevice @ 0x1408E6E90 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x1408E6F60 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1408E7CA0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x1408E8200 (SdbpCheckPackageAttributes.c)
 *     SdbpGetDeviceDWORD @ 0x1408E8648 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x1408E8694 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1408E88BC (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x1408E8C64 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x1408E8D0C (SdbpFindNextNamedTag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405C92BC (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x14067E3B4 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x14067E5A4 (SdbGetFirstChild.c)
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
