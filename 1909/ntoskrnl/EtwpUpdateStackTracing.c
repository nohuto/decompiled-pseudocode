/*
 * XREFs of EtwpUpdateStackTracing @ 0x1408F33E4
 * Callers:
 *     EtwpCheckForStackTracingExtension @ 0x1406AA1C0 (EtwpCheckForStackTracingExtension.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408F5EF0 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     RtlClearAllBits @ 0x14008D950 (RtlClearAllBits.c)
 *     EtwpInitializeStackTracing @ 0x1408F3218 (EtwpInitializeStackTracing.c)
 */

__int64 __fastcall EtwpUpdateStackTracing(_RTL_BITMAP *a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  int v7; // esi

  v6 = 0LL;
  v7 = 0;
  if ( a3 )
  {
    if ( a3 > 0x100 )
      return (unsigned int)-1073741811;
    if ( (a1[52].SizeOfBitMap & 0x80u) != 0 )
    {
      RtlClearAllBits(a1 + 61);
    }
    else
    {
      v7 = EtwpInitializeStackTracing((__int64)a1);
      if ( v7 < 0 )
        return (unsigned int)v7;
    }
    while ( (unsigned int)v6 < a3 )
    {
      _bittestandset((signed __int32 *)a1[61].Buffer, *(_WORD *)(a2 + 4 * v6) & 0x1FFF);
      v6 = (unsigned int)(v6 + 1);
    }
  }
  else if ( (a1[52].SizeOfBitMap & 0x80u) != 0 )
  {
    RtlClearAllBits(a1 + 61);
  }
  return (unsigned int)v7;
}
