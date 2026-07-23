/*
 * XREFs of SdbGetTagFromTagID @ 0x1405C92BC
 * Callers:
 *     SdbpGetIndex @ 0x14067DC9C (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x14067DE70 (SdbpGetFirstIndexedRecord.c)
 *     SdbReadDWORDTag @ 0x14067DF58 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x14067E00C (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x14067E08C (SdbReadWORDTag.c)
 *     InitOnceScanIndexes @ 0x14067E180 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x14067E340 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x14067E3B4 (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x14067E424 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x14067E4AC (SdbGetTagDataSize.c)
 *     SdbGetFirstChild @ 0x14067E5A4 (SdbGetFirstChild.c)
 *     SdbReadBinaryTag @ 0x1406CF668 (SdbReadBinaryTag.c)
 *     SdbReadQWORDTag @ 0x140722388 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x1407229B0 (SdbGetStringTagPtr.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140722A7C (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpReadStringRef @ 0x140722B54 (SdbpReadStringRef.c)
 *     SdbpGetNextIndexedRecord @ 0x140722BB8 (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstNamedTag @ 0x140723B78 (SdbFindFirstNamedTag.c)
 *     SdbpFindMatcher @ 0x14072434C (SdbpFindMatcher.c)
 *     SdbpFindNextNamedTag @ 0x1408E8D0C (SdbpFindNextNamedTag.c)
 *     SdbGetBinaryTagData @ 0x1408E8E18 (SdbGetBinaryTagData.c)
 * Callees:
 *     SdbpReadMappedData @ 0x1405C92F0 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
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
