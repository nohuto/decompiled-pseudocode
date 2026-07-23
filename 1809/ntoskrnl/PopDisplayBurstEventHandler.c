/*
 * XREFs of PopDisplayBurstEventHandler @ 0x140877440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDisplayBurstEventHandler(char a1, signed __int32 *a2)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  *a2 = 0;
  if ( a1 )
  {
    *a2 = 1;
  }
  else
  {
    _m_prefetchw(&PopPowerAggregatorLatestModernStandbyIntent);
    v2 = PopPowerAggregatorLatestModernStandbyIntent;
    do
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange(&PopPowerAggregatorLatestModernStandbyIntent, v2, v2);
    }
    while ( v3 != v2 );
    *a2 = v2;
  }
  return 0LL;
}
