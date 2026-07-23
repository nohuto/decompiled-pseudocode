/*
 * XREFs of PopPdcEngagePhases @ 0x140870478
 * Callers:
 *     PopProcessSessionDisplayStateChange @ 0x140870698 (PopProcessSessionDisplayStateChange.c)
 *     PopPowerAggregatorExecuteActiveCallback @ 0x140876DB0 (PopPowerAggregatorExecuteActiveCallback.c)
 *     PopPowerAggregatorExecuteModernStandbyCallback @ 0x140876E50 (PopPowerAggregatorExecuteModernStandbyCallback.c)
 *     TtmpInitiateModernStandbyTransition @ 0x140881D60 (TtmpInitiateModernStandbyTransition.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopSetModernStandbyTransitionReason @ 0x140870790 (PopSetModernStandbyTransitionReason.c)
 */

__int64 __fastcall PopPdcEngagePhases(char a1, unsigned int a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  __int64 v6; // rcx

  v4 = -1073741822;
  if ( qword_140441098 )
  {
    v5 = qword_140441098();
    LOBYTE(v6) = a1;
    v4 = v5;
    PopSetModernStandbyTransitionReason(v6, a2);
  }
  return v4;
}
