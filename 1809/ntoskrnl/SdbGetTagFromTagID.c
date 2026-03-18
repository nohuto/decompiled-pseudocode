/*
 * XREFs of SdbGetTagFromTagID @ 0x1405C82BC
 * Callers:
 *     SdbpGetIndex @ 0x14067CAFC (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x14067CCD0 (SdbpGetFirstIndexedRecord.c)
 *     SdbReadDWORDTag @ 0x14067CDB8 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x14067CE6C (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x14067CEEC (SdbReadWORDTag.c)
 *     InitOnceScanIndexes @ 0x14067CFE0 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x14067D1A0 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x14067D214 (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x14067D284 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x14067D30C (SdbGetTagDataSize.c)
 *     SdbGetFirstChild @ 0x14067D404 (SdbGetFirstChild.c)
 *     SdbReadBinaryTag @ 0x1406CE3E8 (SdbReadBinaryTag.c)
 *     SdbReadQWORDTag @ 0x140721108 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x140721730 (SdbGetStringTagPtr.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x1407217FC (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpReadStringRef @ 0x1407218D4 (SdbpReadStringRef.c)
 *     SdbpGetNextIndexedRecord @ 0x140721938 (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstNamedTag @ 0x1407228F8 (SdbFindFirstNamedTag.c)
 *     SdbpFindMatcher @ 0x1407230CC (SdbpFindMatcher.c)
 *     SdbpFindNextNamedTag @ 0x1408E7A6C (SdbpFindNextNamedTag.c)
 *     SdbGetBinaryTagData @ 0x1408E7B78 (SdbGetBinaryTagData.c)
 * Callees:
 *     SdbpReadMappedData @ 0x1405C82F0 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x140680C80 (AslLogCallPrintf.c)
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
