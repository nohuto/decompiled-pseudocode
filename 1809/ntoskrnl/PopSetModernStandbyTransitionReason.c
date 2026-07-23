/*
 * XREFs of PopSetModernStandbyTransitionReason @ 0x140870790
 * Callers:
 *     PdcPoCsEnterExitReason @ 0x14086FE70 (PdcPoCsEnterExitReason.c)
 *     PopPdcEngagePhases @ 0x140870478 (PopPdcEngagePhases.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14008BA90 (RtlGetInterruptTimePrecise.c)
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
