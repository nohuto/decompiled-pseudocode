/*
 * XREFs of SdbpGetMappedTagData @ 0x14067CE08
 * Callers:
 *     SdbpGetIndex @ 0x14067CADC (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x14067CCB0 (SdbpGetFirstIndexedRecord.c)
 *     SdbGetStringTagPtr @ 0x140721710 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x14072178C (SdbpGetMappedStringFromTable.c)
 *     SdbpGetNextIndexedRecord @ 0x140721918 (SdbpGetNextIndexedRecord.c)
 *     SdbQueryDataExTagID @ 0x140722984 (SdbQueryDataExTagID.c)
 *     KsepDbReadKData @ 0x140847C08 (KsepDbReadKData.c)
 *     SdbGetBinaryTagData @ 0x1408E7B58 (SdbGetBinaryTagData.c)
 * Callees:
 *     SdbpGetTagHeadSize @ 0x14067D3A0 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x140680C60 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMappedTagData(__int64 a1, int a2)
{
  unsigned int v3; // eax
  __int64 v4; // rbx

  v3 = a2 + SdbpGetTagHeadSize();
  if ( v3 >= *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMappedData",
      717,
      (unsigned int)"Trying to read mapped data past the end of the database offset 0x%x size 0x%x");
    v4 = 0LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(a1 + 8) + v3;
  if ( !v4 )
LABEL_5:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetMappedTagData", 463, (unsigned int)"Error getting ptr to tag data");
  return v4;
}
