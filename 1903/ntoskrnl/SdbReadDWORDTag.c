/*
 * XREFs of SdbReadDWORDTag @ 0x14070BD7C
 * Callers:
 *     KsepDbGetDriverShims @ 0x14070A930 (KsepDbGetDriverShims.c)
 *     InitOnceScanIndexes @ 0x14070C120 (InitOnceScanIndexes.c)
 *     SdbpGetExeEntryFlags @ 0x140772420 (SdbpGetExeEntryFlags.c)
 *     KsepDbGetShimInfo @ 0x140882C88 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1408830BC (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140921C40 (SdbQueryDataExTagID.c)
 *     SdbpCheckOSKind @ 0x1409235C0 (SdbpCheckOSKind.c)
 *     SdbpCheckPackageAttributes @ 0x140923610 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckRuntimePlatform @ 0x140923870 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetDeviceDWORD @ 0x140923A3C (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x140923A88 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140923CB0 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpCheckAllAttributes @ 0x1409257F8 (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x14070C09C (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x14070C544 (SdbGetTagFromTagID.c)
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
