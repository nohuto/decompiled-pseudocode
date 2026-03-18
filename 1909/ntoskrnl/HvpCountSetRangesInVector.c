/*
 * XREFs of HvpCountSetRangesInVector @ 0x1406319E4
 * Callers:
 *     HvpGenerateLogEntryDirtyData @ 0x14008B74C (HvpGenerateLogEntryDirtyData.c)
 *     HvpGenerateLogEntry @ 0x1406410A4 (HvpGenerateLogEntry.c)
 *     HvpGenerateLogMetadata @ 0x140641324 (HvpGenerateLogMetadata.c)
 *     HvStoreModifiedData @ 0x140641468 (HvStoreModifiedData.c)
 *     HvGetHiveLogFileStatus @ 0x14068FCD8 (HvGetHiveLogFileStatus.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x14008A120 (RtlFindNextForwardRunClear.c)
 */

__int64 __fastcall HvpCountSetRangesInVector(PRTL_BITMAP BitMapHeader)
{
  ULONG v1; // edi
  unsigned int v2; // ebx
  ULONG NextForwardRunClear; // ecx
  ULONG StartingRunIndex; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0;
  if ( BitMapHeader->SizeOfBitMap )
  {
    while ( 1 )
    {
      NextForwardRunClear = RtlFindNextForwardRunClear(BitMapHeader, v1, &StartingRunIndex);
      if ( !NextForwardRunClear )
        break;
      if ( StartingRunIndex != v1 )
        ++v2;
      v1 = StartingRunIndex + NextForwardRunClear;
      if ( StartingRunIndex + NextForwardRunClear >= BitMapHeader->SizeOfBitMap )
        return v2;
    }
    ++v2;
  }
  return v2;
}
