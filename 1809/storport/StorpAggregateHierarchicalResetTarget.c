/*
 * XREFs of StorpAggregateHierarchicalResetTarget @ 0x1C004DD10
 * Callers:
 *     RaidUnitResetTarget @ 0x1C004A83C (RaidUnitResetTarget.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall StorpAggregateHierarchicalResetTarget(__int64 a1, char a2, unsigned __int64 a3)
{
  unsigned __int8 result; // al
  __int64 v4; // r9

  result = 0;
  if ( a1 )
  {
    while ( 1 )
    {
      v4 = result;
      if ( a3 <= TraceLoggingResetLatencyBuckets[result] )
        break;
      if ( ++result >= 5u )
        return result;
    }
    ++*(_DWORD *)(a1 + 12LL * result + 5344);
    result = a2 & 0x3F;
    if ( (a2 & 0x3F) == 1 )
    {
      ++*(_DWORD *)(a1 + 12 * v4 + 5348);
    }
    else
    {
      result = 3 * v4;
      *(_BYTE *)(a1 + 12 * v4 + 5352) = a2;
    }
  }
  return result;
}
