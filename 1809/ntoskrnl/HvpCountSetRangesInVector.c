/*
 * XREFs of HvpCountSetRangesInVector @ 0x1405E08D4
 * Callers:
 *     HvGetHiveLogFileStatus @ 0x1405A72C8 (HvGetHiveLogFileStatus.c)
 *     HvStoreModifiedData @ 0x1405A8438 (HvStoreModifiedData.c)
 *     HvpGenerateLogEntry @ 0x1405A8860 (HvpGenerateLogEntry.c)
 *     HvpGenerateLogMetadata @ 0x1405A93CC (HvpGenerateLogMetadata.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x140028C00 (RtlFindNextForwardRunClear.c)
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
