/*
 * XREFs of PopSetModernStandbyTransitionReason @ 0x1408AC180
 * Callers:
 *     PdcPoCsEnterExitReason @ 0x1408AB760 (PdcPoCsEnterExitReason.c)
 *     PopPdcEngagePhases @ 0x1408ABE5C (PopPdcEngagePhases.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1400BE8C0 (RtlGetInterruptTimePrecise.c)
 */

void __fastcall PopSetModernStandbyTransitionReason(char a1, int a2)
{
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    PopPdcLastCsEnterReason = a2;
  }
  else
  {
    PopPdcLastCsExitReason = a2;
    PopPdcLastCsExitTime = RtlGetInterruptTimePrecise(&PerformanceCounter).QuadPart;
  }
}
