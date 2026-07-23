/*
 * XREFs of SdbpReadTagData @ 0x14067E100
 * Callers:
 *     SdbReadDWORDTag @ 0x14067DF58 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x14067E08C (SdbReadWORDTag.c)
 *     SdbReadBinaryTag @ 0x1406CF668 (SdbReadBinaryTag.c)
 *     SdbReadQWORDTag @ 0x140722388 (SdbReadQWORDTag.c)
 *     SdbpReadStringRef @ 0x140722B54 (SdbpReadStringRef.c)
 * Callees:
 *     SdbpReadMappedData @ 0x1405C92F0 (SdbpReadMappedData.c)
 *     SdbGetTagDataSize @ 0x14067E4AC (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x14067E560 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadTagData(__int64 a1, __int64 a2, void *a3, unsigned int a4)
{
  unsigned int v6; // esi
  unsigned int TagDataSize; // ebx
  int TagHeadSize; // eax

  v6 = a2;
  TagDataSize = SdbGetTagDataSize(a1, a2);
  if ( TagDataSize > a4 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpReadTagData", 352, (unsigned int)"Buffer too small. Avail: %d, Need: %d");
  }
  else
  {
    TagHeadSize = SdbpGetTagHeadSize(a1, v6);
    if ( (unsigned int)SdbpReadMappedData(a1, v6 + TagHeadSize, a3, TagDataSize) )
      return 1LL;
    AslLogCallPrintf(1, (unsigned int)"SdbpReadTagData", 359, (unsigned int)"Error reading tag data");
  }
  return 0LL;
}
