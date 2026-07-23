/*
 * XREFs of HvpGenerateLogMetadata @ 0x1405A93CC
 * Callers:
 *     HvpGenerateLogEntry @ 0x1405A8860 (HvpGenerateLogEntry.c)
 *     HvpApplyLegacyLogFile @ 0x140807B90 (HvpApplyLegacyLogFile.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x140028C00 (RtlFindNextForwardRunClear.c)
 *     HvpCountSetRangesInVector @ 0x1405E08D4 (HvpCountSetRangesInVector.c)
 */

__int64 __fastcall HvpGenerateLogMetadata(PRTL_BITMAP BitMapHeader, __int64 a2, unsigned int *a3)
{
  unsigned int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  ULONG v9; // edi
  unsigned int v10; // r12d
  ULONG NextForwardRunClear; // eax
  ULONG v12; // r8d
  ULONG StartingRunIndex; // [rsp+58h] [rbp+10h] BYREF

  v6 = HvpCountSetRangesInVector(BitMapHeader);
  v7 = 0;
  v8 = v6;
  if ( a2 && *a3 >= v6 )
  {
    v9 = 0;
    v10 = 0;
    if ( BitMapHeader->SizeOfBitMap )
    {
      while ( 1 )
      {
        NextForwardRunClear = RtlFindNextForwardRunClear(BitMapHeader, v9, &StartingRunIndex);
        if ( !NextForwardRunClear )
          break;
        v12 = StartingRunIndex;
        if ( StartingRunIndex != v9 )
        {
          *(_DWORD *)(a2 + 8LL * v10) = v9 << 9;
          *(_DWORD *)(a2 + 8LL * v10++ + 4) = (v12 - v9) << 9;
        }
        v9 = v12 + NextForwardRunClear;
        if ( v12 + NextForwardRunClear >= BitMapHeader->SizeOfBitMap )
          goto LABEL_8;
      }
      *(_DWORD *)(a2 + 8LL * v10) = v9 << 9;
      *(_DWORD *)(a2 + 8LL * v10 + 4) = (BitMapHeader->SizeOfBitMap - v9) << 9;
    }
  }
  else
  {
    v7 = -1073741789;
  }
LABEL_8:
  *a3 = v8;
  return v7;
}
