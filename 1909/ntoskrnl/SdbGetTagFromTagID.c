/*
 * XREFs of SdbGetTagFromTagID @ 0x14070E324
 * Callers:
 *     SdbReadBinaryTag @ 0x14070ADF0 (SdbReadBinaryTag.c)
 *     SdbpGetIndex @ 0x14070DAF0 (SdbpGetIndex.c)
 *     SdbReadDWORDTag @ 0x14070DB5C (SdbReadDWORDTag.c)
 *     SdbpGetFirstIndexedRecord @ 0x14070DC70 (SdbpGetFirstIndexedRecord.c)
 *     SdbFindNextTag @ 0x14070DD88 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x14070DE08 (SdbReadWORDTag.c)
 *     InitOnceScanIndexes @ 0x14070DF00 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x14070E0C0 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x14070E134 (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x14070E1E8 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x14070E270 (SdbGetTagDataSize.c)
 *     SdbGetFirstChild @ 0x14070E39C (SdbGetFirstChild.c)
 *     SdbReadQWORDTag @ 0x14074C0A4 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x14074D308 (SdbGetStringTagPtr.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x14074D3D4 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpReadStringRef @ 0x14074D4AC (SdbpReadStringRef.c)
 *     SdbpGetNextIndexedRecord @ 0x14074D510 (SdbpGetNextIndexedRecord.c)
 *     SdbpFindMatcher @ 0x1407758A0 (SdbpFindMatcher.c)
 *     SdbFindFirstNamedTag @ 0x140923B5C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x140923C24 (SdbpFindNextNamedTag.c)
 *     SdbGetBinaryTagData @ 0x140923D30 (SdbGetBinaryTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x14070E358 (SdbpReadMappedData.c)
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
