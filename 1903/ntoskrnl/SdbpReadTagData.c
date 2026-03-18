/*
 * XREFs of SdbpReadTagData @ 0x14070C09C
 * Callers:
 *     SdbReadBinaryTag @ 0x140709010 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x14070BD7C (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x14070C028 (SdbReadWORDTag.c)
 *     SdbReadQWORDTag @ 0x14074B614 (SdbReadQWORDTag.c)
 *     SdbpReadStringRef @ 0x14074CA1C (SdbpReadStringRef.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x14070C3C4 (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x14070C490 (SdbGetTagDataSize.c)
 *     SdbpReadMappedData @ 0x14070C578 (SdbpReadMappedData.c)
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
