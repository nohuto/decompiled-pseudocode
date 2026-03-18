/*
 * XREFs of SdbReadDWORDTag @ 0x14070DB5C
 * Callers:
 *     KsepDbGetDriverShims @ 0x14070C710 (KsepDbGetDriverShims.c)
 *     InitOnceScanIndexes @ 0x14070DF00 (InitOnceScanIndexes.c)
 *     SdbpGetExeEntryFlags @ 0x140775A00 (SdbpGetExeEntryFlags.c)
 *     KsepDbGetShimInfo @ 0x140882388 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1408827BC (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1409216A0 (SdbQueryDataExTagID.c)
 *     SdbpCheckOSKind @ 0x140923020 (SdbpCheckOSKind.c)
 *     SdbpCheckPackageAttributes @ 0x140923070 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckRuntimePlatform @ 0x1409232D0 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetDeviceDWORD @ 0x14092349C (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x1409234E8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140923710 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpCheckAllAttributes @ 0x140925258 (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x14070DE7C (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x14070E324 (SdbGetTagFromTagID.c)
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
    AslLogCallPrintf(1LL);
    return a3;
  }
}
