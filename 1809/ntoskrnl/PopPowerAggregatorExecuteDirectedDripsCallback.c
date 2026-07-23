/*
 * XREFs of PopPowerAggregatorExecuteDirectedDripsCallback @ 0x140876DF0
 * Callers:
 *     <none>
 * Callees:
 *     PopDirectedDripsEngagePs4 @ 0x140868DF0 (PopDirectedDripsEngagePs4.c)
 *     PopDirectedDripsTriggerTransition @ 0x1408699E0 (PopDirectedDripsTriggerTransition.c)
 *     PopDiagStopCsSleepStudySession @ 0x1408717DC (PopDiagStopCsSleepStudySession.c)
 */

__int64 __fastcall PopPowerAggregatorExecuteDirectedDripsCallback(__int64 a1, __int64 a2)
{
  unsigned __int32 v2; // eax
  __int64 v3; // rcx
  unsigned __int32 v4; // ett

  _m_prefetchw(&PopDirectedDripsState);
  v2 = PopDirectedDripsState;
  do
  {
    v3 = v2;
    v4 = v2;
    v2 = _InterlockedCompareExchange(&PopDirectedDripsState, v2, v2);
  }
  while ( v4 != v2 );
  if ( (v2 & 1) != 0 )
  {
    if ( PopDirectedDripsEnableV2 )
      PopDirectedDripsEngagePs4(v3, a2);
    else
      PopDirectedDripsTriggerTransition(v3, a2);
  }
  PopDiagStopCsSleepStudySession(1, 45, 45);
  return 0LL;
}
