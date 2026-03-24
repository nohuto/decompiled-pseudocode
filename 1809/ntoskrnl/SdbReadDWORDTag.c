/*
 * XREFs of SdbReadDWORDTag @ 0x14067CD98
 * Callers:
 *     InitOnceScanIndexes @ 0x14067CFC0 (InitOnceScanIndexes.c)
 *     KsepDbGetDriverShims @ 0x14067D8A4 (KsepDbGetDriverShims.c)
 *     SdbpCheckAllAttributes @ 0x140720344 (SdbpCheckAllAttributes.c)
 *     SdbQueryDataExTagID @ 0x140722984 (SdbQueryDataExTagID.c)
 *     SdbpGetExeEntryFlags @ 0x14072320C (SdbpGetExeEntryFlags.c)
 *     KsepDbGetShimInfo @ 0x140847808 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x140847C08 (KsepDbReadKData.c)
 *     SdbpCheckOSKind @ 0x1408E6EF0 (SdbpCheckOSKind.c)
 *     SdbpCheckPackageAttributes @ 0x1408E6F40 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckRuntimePlatform @ 0x1408E71B0 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetDeviceDWORD @ 0x1408E7388 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x1408E73D4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1408E75FC (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405C82BC (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x14067CF40 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x140680C60 (AslLogCallPrintf.c)
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
