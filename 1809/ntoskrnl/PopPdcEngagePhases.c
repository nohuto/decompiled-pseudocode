/*
 * XREFs of PopPdcEngagePhases @ 0x14086F218
 * Callers:
 *     PopProcessSessionDisplayStateChange @ 0x14086F438 (PopProcessSessionDisplayStateChange.c)
 *     PopPowerAggregatorExecuteActiveCallback @ 0x140875B50 (PopPowerAggregatorExecuteActiveCallback.c)
 *     PopPowerAggregatorExecuteModernStandbyCallback @ 0x140875BF0 (PopPowerAggregatorExecuteModernStandbyCallback.c)
 *     TtmpInitiateModernStandbyTransition @ 0x140880B00 (TtmpInitiateModernStandbyTransition.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     PopSetModernStandbyTransitionReason @ 0x14086F530 (PopSetModernStandbyTransitionReason.c)
 */

__int64 __fastcall PopPdcEngagePhases(char a1, unsigned int a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  __int64 v6; // rcx

  v4 = -1073741822;
  if ( qword_14043FFD8 )
  {
    v5 = qword_14043FFD8();
    LOBYTE(v6) = a1;
    v4 = v5;
    PopSetModernStandbyTransitionReason(v6, a2);
  }
  return v4;
}
