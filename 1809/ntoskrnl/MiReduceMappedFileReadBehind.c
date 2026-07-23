/*
 * XREFs of MiReduceMappedFileReadBehind @ 0x140132688
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14002ADD0 (MiBuildMdlForMappedFileFault.c)
 * Callees:
 *     RtlClearBits @ 0x140017890 (RtlClearBits.c)
 *     RtlFindNextForwardRunClearCapped @ 0x14002B750 (RtlFindNextForwardRunClearCapped.c)
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 */

__int64 __fastcall MiReduceMappedFileReadBehind(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, int a3)
{
  unsigned int v4; // r14d
  unsigned int v7; // eax
  ULONG NextForwardRunClearCapped; // edi
  ULONG v9; // esi
  ULONG StartingIndexa; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  RtlSetBits(BitMapHeader, StartingIndex, 1u);
  v7 = 0;
  if ( StartingIndex )
  {
    do
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(
                                    (__int64)BitMapHeader,
                                    v7,
                                    0xFFFFFFFF,
                                    &StartingIndexa);
      if ( !NextForwardRunClearCapped )
        break;
      v9 = StartingIndexa;
      if ( StartingIndexa >= StartingIndex )
        break;
      if ( NextForwardRunClearCapped > a3 - v4 )
        NextForwardRunClearCapped = a3 - v4;
      RtlSetBits(BitMapHeader, StartingIndexa, NextForwardRunClearCapped);
      v4 += NextForwardRunClearCapped;
      if ( v4 == a3 )
        break;
      v7 = NextForwardRunClearCapped + v9;
    }
    while ( NextForwardRunClearCapped + v9 < StartingIndex );
  }
  RtlClearBits(BitMapHeader, StartingIndex, 1u);
  return v4;
}
