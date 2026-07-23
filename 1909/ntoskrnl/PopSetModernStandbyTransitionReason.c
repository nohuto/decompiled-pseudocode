/*
 * XREFs of PopSetModernStandbyTransitionReason @ 0x1408AB9E0
 * Callers:
 *     PdcPoCsEnterExitReason @ 0x1408AAFC0 (PdcPoCsEnterExitReason.c)
 *     PopPdcEngagePhases @ 0x1408AB6BC (PopPdcEngagePhases.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14009E740 (RtlGetInterruptTimePrecise.c)
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
