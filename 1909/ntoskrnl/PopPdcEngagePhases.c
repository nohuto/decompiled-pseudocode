/*
 * XREFs of PopPdcEngagePhases @ 0x1408AB6BC
 * Callers:
 *     PoTtmInitiatePowerStateTransition @ 0x1408AB378 (PoTtmInitiatePowerStateTransition.c)
 *     PopProcessSessionDisplayStateChange @ 0x1408AB8DC (PopProcessSessionDisplayStateChange.c)
 *     PopPowerAggregatorExecuteActiveCallback @ 0x1408B2240 (PopPowerAggregatorExecuteActiveCallback.c)
 *     PopPowerAggregatorExecuteModernStandbyCallback @ 0x1408B22C0 (PopPowerAggregatorExecuteModernStandbyCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PopSetModernStandbyTransitionReason @ 0x1408AB9E0 (PopSetModernStandbyTransitionReason.c)
 */

__int64 __fastcall PopPdcEngagePhases(char a1, unsigned int a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  __int64 v6; // rcx

  v4 = -1073741822;
  if ( qword_14046BB28 )
  {
    v5 = qword_14046BB28();
    LOBYTE(v6) = a1;
    v4 = v5;
    PopSetModernStandbyTransitionReason(v6, a2);
  }
  return v4;
}
