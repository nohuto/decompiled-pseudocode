/*
 * XREFs of PopPowerAggregatorHandleDirectedDripsIntent @ 0x1408B2C40
 * Callers:
 *     PopPowerAggregatorHandleIntent @ 0x1408B2C6C (PopPowerAggregatorHandleIntent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPowerAggregatorHandleDirectedDripsIntent(_DWORD *a1, _DWORD *a2, int a3, __int64 a4, int a5)
{
  int v5; // ecx
  __int64 result; // rax

  if ( *a1 != 1 )
    return 3221266435LL;
  v5 = a1[3];
  a2[1] = a5;
  result = 0LL;
  *a2 = 2;
  a2[2] = a3;
  a2[3] = v5;
  return result;
}
