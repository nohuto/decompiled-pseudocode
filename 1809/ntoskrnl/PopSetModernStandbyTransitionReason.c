/*
 * XREFs of PopSetModernStandbyTransitionReason @ 0x14086F530
 * Callers:
 *     PdcPoCsEnterExitReason @ 0x14086EC10 (PdcPoCsEnterExitReason.c)
 *     PopPdcEngagePhases @ 0x14086F218 (PopPdcEngagePhases.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14008BAA0 (RtlGetInterruptTimePrecise.c)
 */

void __fastcall PopSetModernStandbyTransitionReason(char a1, int a2)
{
  LARGE_INTEGER v2; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    PopPdcLastCsEnterReason = a2;
  }
  else
  {
    PopPdcLastCsExitReason = a2;
    PopPdcLastCsExitTime = RtlGetInterruptTimePrecise(&v2);
  }
}
