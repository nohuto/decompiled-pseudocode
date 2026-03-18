/*
 * XREFs of SdbGetTagFromTagID @ 0x14070C544
 * Callers:
 *     SdbReadBinaryTag @ 0x140709010 (SdbReadBinaryTag.c)
 *     SdbpGetIndex @ 0x14070BD10 (SdbpGetIndex.c)
 *     SdbReadDWORDTag @ 0x14070BD7C (SdbReadDWORDTag.c)
 *     SdbpGetFirstIndexedRecord @ 0x14070BE90 (SdbpGetFirstIndexedRecord.c)
 *     SdbFindNextTag @ 0x14070BFA8 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x14070C028 (SdbReadWORDTag.c)
 *     InitOnceScanIndexes @ 0x14070C120 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x14070C2E0 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x14070C354 (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x14070C408 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x14070C490 (SdbGetTagDataSize.c)
 *     SdbGetFirstChild @ 0x14070C5BC (SdbGetFirstChild.c)
 *     SdbReadQWORDTag @ 0x14074B614 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x14074C878 (SdbGetStringTagPtr.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x14074C944 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpReadStringRef @ 0x14074CA1C (SdbpReadStringRef.c)
 *     SdbpGetNextIndexedRecord @ 0x14074CA80 (SdbpGetNextIndexedRecord.c)
 *     SdbpFindMatcher @ 0x1407722C0 (SdbpFindMatcher.c)
 *     SdbFindFirstNamedTag @ 0x1409240FC (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1409241C4 (SdbpFindNextNamedTag.c)
 *     SdbGetBinaryTagData @ 0x1409242D0 (SdbGetBinaryTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x14070C578 (SdbpReadMappedData.c)
 */

__int64 __fastcall SdbGetTagFromTagID(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2LL) )
    return v3;
  AslLogCallPrintf(1LL);
  return 0LL;
}
