/*
 * XREFs of SdbpGetMappedTagData @ 0x14070DD44
 * Callers:
 *     SdbpGetIndex @ 0x14070DAF0 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x14070DC70 (SdbpGetFirstIndexedRecord.c)
 *     SdbGetStringTagPtr @ 0x14074D308 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x14074D384 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetNextIndexedRecord @ 0x14074D510 (SdbpGetNextIndexedRecord.c)
 *     KsepDbReadKData @ 0x1408827BC (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1409216A0 (SdbQueryDataExTagID.c)
 *     SdbGetBinaryTagData @ 0x140923D30 (SdbGetBinaryTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x14070E1A4 (SdbpGetTagHeadSize.c)
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
