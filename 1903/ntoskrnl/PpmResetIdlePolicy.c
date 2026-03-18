/*
 * XREFs of PpmResetIdlePolicy @ 0x140195080
 * Callers:
 *     PpmInstallNewIdleStates @ 0x140194B00 (PpmInstallNewIdleStates.c)
 *     PpmApplyIdlePolicyChanges @ 0x1402EE220 (PpmApplyIdlePolicyChanges.c)
 * Callees:
 *     PpmScaleIdleStateValues @ 0x140176108 (PpmScaleIdleStateValues.c)
 *     PpmResetProcessorIdleAccounting @ 0x1401950C4 (PpmResetProcessorIdleAccounting.c)
 *     PpmApplyIdlePolicy @ 0x1401951A4 (PpmApplyIdlePolicy.c)
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
