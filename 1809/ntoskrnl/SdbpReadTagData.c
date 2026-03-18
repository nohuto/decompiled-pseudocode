/*
 * XREFs of SdbpReadTagData @ 0x14067CF60
 * Callers:
 *     SdbReadDWORDTag @ 0x14067CDB8 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x14067CEEC (SdbReadWORDTag.c)
 *     SdbReadBinaryTag @ 0x1406CE3E8 (SdbReadBinaryTag.c)
 *     SdbReadQWORDTag @ 0x140721108 (SdbReadQWORDTag.c)
 *     SdbpReadStringRef @ 0x1407218D4 (SdbpReadStringRef.c)
 * Callees:
 *     SdbpReadMappedData @ 0x1405C82F0 (SdbpReadMappedData.c)
 *     SdbGetTagDataSize @ 0x14067D30C (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x14067D3C0 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x140680C80 (AslLogCallPrintf.c)
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
