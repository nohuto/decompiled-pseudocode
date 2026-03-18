/*
 * XREFs of SdbpGetMappedTagData @ 0x14070BF64
 * Callers:
 *     SdbpGetIndex @ 0x14070BD10 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x14070BE90 (SdbpGetFirstIndexedRecord.c)
 *     SdbGetStringTagPtr @ 0x14074C878 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x14074C8F4 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetNextIndexedRecord @ 0x14074CA80 (SdbpGetNextIndexedRecord.c)
 *     KsepDbReadKData @ 0x1408830BC (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140921C40 (SdbQueryDataExTagID.c)
 *     SdbGetBinaryTagData @ 0x1409242D0 (SdbGetBinaryTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x14070C3C4 (SdbpGetTagHeadSize.c)
 */

__int64 __fastcall SdbpGetMappedTagData(__int64 a1, int a2)
{
  unsigned int v3; // eax
  __int64 v4; // rbx

  v3 = a2 + SdbpGetTagHeadSize();
  if ( v3 >= *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(1LL);
    v4 = 0LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(a1 + 8) + v3;
  if ( !v4 )
LABEL_5:
    AslLogCallPrintf(1LL);
  return v4;
}
