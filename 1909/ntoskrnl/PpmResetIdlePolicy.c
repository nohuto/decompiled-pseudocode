/*
 * XREFs of PpmResetIdlePolicy @ 0x140195860
 * Callers:
 *     PpmInstallNewIdleStates @ 0x1401952E0 (PpmInstallNewIdleStates.c)
 *     PpmApplyIdlePolicyChanges @ 0x1402EDF80 (PpmApplyIdlePolicyChanges.c)
 * Callees:
 *     PpmScaleIdleStateValues @ 0x140176838 (PpmScaleIdleStateValues.c)
 *     PpmResetProcessorIdleAccounting @ 0x1401958A4 (PpmResetProcessorIdleAccounting.c)
 *     PpmApplyIdlePolicy @ 0x140195984 (PpmApplyIdlePolicy.c)
 */

void __fastcall PpmResetIdlePolicy(_QWORD *a1)
{
  LARGE_INTEGER PerformanceCounter; // rax

  if ( *a1 )
  {
    PpmApplyIdlePolicy();
    PpmScaleIdleStateValues((__int64)a1);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    ((void (__fastcall *)(_QWORD, _QWORD))PpmResetProcessorIdleAccounting)(
      a1[1],
      (LARGE_INTEGER)PerformanceCounter.QuadPart);
  }
}
