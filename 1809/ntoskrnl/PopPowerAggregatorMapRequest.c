/*
 * XREFs of PopPowerAggregatorMapRequest @ 0x140876ED8
 * Callers:
 *     PopPowerAggregatorWorker @ 0x140877170 (PopPowerAggregatorWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPowerAggregatorMapRequest(__int64 a1, int *a2)
{
  int v2; // r8d
  __int64 result; // rax
  unsigned int v5; // ecx

  v2 = *a2;
  if ( *a2 == 1 )
    return 1LL;
  if ( v2 <= 1 )
    return 0LL;
  if ( v2 > 3 )
  {
    if ( v2 == 4 )
      return 8LL;
    return 0LL;
  }
  v5 = 2;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v5 = 4;
    if ( !*(_BYTE *)(a1 + 8) && *(_DWORD *)(a1 + 12) == 1 )
      v5 = 6;
  }
  result = v5 + 1;
  if ( v2 != 2 )
    return v5;
  return result;
}
