/*
 * XREFs of SdbpGetNextTagId @ 0x14067E424
 * Callers:
 *     SdbGetNextChild @ 0x14067E3B4 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x14067E5A4 (SdbGetFirstChild.c)
 *     SdbpGetNextIndexedRecord @ 0x140722BB8 (SdbpGetNextIndexedRecord.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405C92BC (SdbGetTagFromTagID.c)
 *     SdbGetTagDataSize @ 0x14067E4AC (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x14067E560 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetNextTagId(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int TagHeadSize; // esi
  unsigned int TagDataSize; // eax

  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 && (unsigned int)SdbGetTagDataSize(a1, v2) == -1 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpGetNextTagId", 1216, (unsigned int)"Reading from unfinished list");
    return *(unsigned int *)(a1 + 20);
  }
  TagHeadSize = SdbpGetTagHeadSize(a1, v2);
  if ( !TagHeadSize )
    return *(unsigned int *)(a1 + 20);
  TagDataSize = SdbGetTagDataSize(a1, v2);
  if ( (*(_DWORD *)(a1 + 1328) & 1) == 0 )
    TagDataSize = (TagDataSize + 1) & 0xFFFFFFFE;
  return v2 + TagHeadSize + TagDataSize;
}
