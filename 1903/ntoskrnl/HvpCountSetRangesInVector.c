/*
 * XREFs of HvpCountSetRangesInVector @ 0x14062DB68
 * Callers:
 *     HvpGenerateLogEntryDirtyData @ 0x14008A44C (HvpGenerateLogEntryDirtyData.c)
 *     HvStoreModifiedData @ 0x14065D6F0 (HvStoreModifiedData.c)
 *     HvpGenerateLogEntry @ 0x14065DD60 (HvpGenerateLogEntry.c)
 *     HvpGenerateLogMetadata @ 0x14065DFE0 (HvpGenerateLogMetadata.c)
 *     HvGetHiveLogFileStatus @ 0x140660DD0 (HvGetHiveLogFileStatus.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x140088E20 (RtlFindNextForwardRunClear.c)
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
