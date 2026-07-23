/*
 * XREFs of SdbReadDWORDTag @ 0x14067DF58
 * Callers:
 *     InitOnceScanIndexes @ 0x14067E180 (InitOnceScanIndexes.c)
 *     KsepDbGetDriverShims @ 0x14067EA64 (KsepDbGetDriverShims.c)
 *     SdbpCheckAllAttributes @ 0x1407215E4 (SdbpCheckAllAttributes.c)
 *     SdbQueryDataExTagID @ 0x140723C24 (SdbQueryDataExTagID.c)
 *     SdbpGetExeEntryFlags @ 0x1407244AC (SdbpGetExeEntryFlags.c)
 *     KsepDbGetShimInfo @ 0x140848A68 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x140848E68 (KsepDbReadKData.c)
 *     SdbpCheckOSKind @ 0x1408E81B0 (SdbpCheckOSKind.c)
 *     SdbpCheckPackageAttributes @ 0x1408E8200 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckRuntimePlatform @ 0x1408E8470 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetDeviceDWORD @ 0x1408E8648 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x1408E8694 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1408E88BC (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405C92BC (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x14067E100 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadDWORDTag(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x4000 )
  {
    v6 = SdbpReadTagData(a1, v4, &v9, 4LL);
    v7 = v9;
    if ( !v6 )
      return a3;
    return v7;
  }
  else
  {
    SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadDWORDTag",
      150,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type");
    return a3;
  }
}
