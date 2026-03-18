/*
 * XREFs of PopPowerAggregatorDisengageDirectedDrips @ 0x140875B24
 * Callers:
 *     PopPowerAggregatorExecuteActiveCallback @ 0x140875B70 (PopPowerAggregatorExecuteActiveCallback.c)
 *     PopPowerAggregatorExecuteModernStandbyCallback @ 0x140875C10 (PopPowerAggregatorExecuteModernStandbyCallback.c)
 * Callees:
 *     PopDisengageDirectedDrips @ 0x140868894 (PopDisengageDirectedDrips.c)
 *     PopDripsWatchdogResetInternalState @ 0x14086E768 (PopDripsWatchdogResetInternalState.c)
 */

void __fastcall PopPowerAggregatorDisengageDirectedDrips(__int64 a1, __int64 a2)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  if ( *(_DWORD *)(a1 + 4) != 1 )
  {
    _m_prefetchw(&PopDirectedDripsState);
    v2 = PopDirectedDripsState;
    do
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange(&PopDirectedDripsState, v2, v2);
    }
    while ( v3 != v2 );
    if ( (v2 & 1) != 0 )
      PopDisengageDirectedDrips((__int64)&PopDirectedDripsState, a2);
    PopDripsWatchdogResetInternalState();
  }
}
