/*
 * XREFs of PopPdcEngagePhases @ 0x1408ABE5C
 * Callers:
 *     PoTtmInitiatePowerStateTransition @ 0x1408ABB18 (PoTtmInitiatePowerStateTransition.c)
 *     PopProcessSessionDisplayStateChange @ 0x1408AC07C (PopProcessSessionDisplayStateChange.c)
 *     PopPowerAggregatorExecuteActiveCallback @ 0x1408B29E0 (PopPowerAggregatorExecuteActiveCallback.c)
 *     PopPowerAggregatorExecuteModernStandbyCallback @ 0x1408B2A60 (PopPowerAggregatorExecuteModernStandbyCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     PopSetModernStandbyTransitionReason @ 0x1408AC180 (PopSetModernStandbyTransitionReason.c)
 */

__int64 __fastcall PopPdcEngagePhases(char a1, unsigned int a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  __int64 v6; // rcx

  v4 = -1073741822;
  if ( qword_14046BDE8 )
  {
    v5 = qword_14046BDE8();
    LOBYTE(v6) = a1;
    v4 = v5;
    PopSetModernStandbyTransitionReason(v6, a2);
  }
  return v4;
}
