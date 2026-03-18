/*
 * XREFs of PopPowerAggregatorHandleModernStandbyIntent @ 0x1408B2DC0
 * Callers:
 *     PopPowerAggregatorHandleIntent @ 0x1408B2C6C (PopPowerAggregatorHandleIntent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPowerAggregatorHandleModernStandbyIntent(_DWORD *a1, _DWORD *a2, int a3, __int64 a4, int a5)
{
  unsigned int v5; // r9d

  v5 = 0;
  if ( *a1 > 3u )
  {
    return (unsigned int)-1073700861;
  }
  else
  {
    a2[1] = a5;
    *a2 = 1;
    a2[3] = a3;
    a2[2] = a3;
  }
  return v5;
}
