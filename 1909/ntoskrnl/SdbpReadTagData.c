/*
 * XREFs of SdbpReadTagData @ 0x14070DE7C
 * Callers:
 *     SdbReadBinaryTag @ 0x14070ADF0 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x14070DB5C (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x14070DE08 (SdbReadWORDTag.c)
 *     SdbReadQWORDTag @ 0x14074C0A4 (SdbReadQWORDTag.c)
 *     SdbpReadStringRef @ 0x14074D4AC (SdbpReadStringRef.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x14070E1A4 (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x14070E270 (SdbGetTagDataSize.c)
 *     SdbpReadMappedData @ 0x14070E358 (SdbpReadMappedData.c)
 */

__int64 __fastcall SdbpReadTagData(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // esi
  unsigned int TagDataSize; // ebx
  int TagHeadSize; // eax

  v6 = a2;
  TagDataSize = SdbGetTagDataSize(a1, a2);
  if ( TagDataSize <= a4 )
  {
    TagHeadSize = SdbpGetTagHeadSize(a1, v6);
    if ( (unsigned int)SdbpReadMappedData(a1, v6 + TagHeadSize, a3, TagDataSize) )
      return 1LL;
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
