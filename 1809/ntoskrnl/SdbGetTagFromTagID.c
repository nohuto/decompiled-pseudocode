/*
 * XREFs of SdbGetTagFromTagID @ 0x1405C82BC
 * Callers:
 *     SdbpGetIndex @ 0x14067CADC (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x14067CCB0 (SdbpGetFirstIndexedRecord.c)
 *     SdbReadDWORDTag @ 0x14067CD98 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x14067CE4C (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x14067CECC (SdbReadWORDTag.c)
 *     InitOnceScanIndexes @ 0x14067CFC0 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x14067D180 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x14067D1F4 (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x14067D264 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x14067D2EC (SdbGetTagDataSize.c)
 *     SdbGetFirstChild @ 0x14067D3E4 (SdbGetFirstChild.c)
 *     SdbReadBinaryTag @ 0x1406CE3C8 (SdbReadBinaryTag.c)
 *     SdbReadQWORDTag @ 0x1407210E8 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x140721710 (SdbGetStringTagPtr.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x1407217DC (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpReadStringRef @ 0x1407218B4 (SdbpReadStringRef.c)
 *     SdbpGetNextIndexedRecord @ 0x140721918 (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstNamedTag @ 0x1407228D8 (SdbFindFirstNamedTag.c)
 *     SdbpFindMatcher @ 0x1407230AC (SdbpFindMatcher.c)
 *     SdbpFindNextNamedTag @ 0x1408E7A4C (SdbpFindNextNamedTag.c)
 *     SdbGetBinaryTagData @ 0x1408E7B58 (SdbGetBinaryTagData.c)
 * Callees:
 *     SdbpReadMappedData @ 0x1405C82F0 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x140680C60 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetTagFromTagID(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2LL) )
    return v3;
  AslLogCallPrintf(1, (unsigned int)"SdbGetTagFromTagID", 1182, (unsigned int)"Error reading data");
  return 0LL;
}
