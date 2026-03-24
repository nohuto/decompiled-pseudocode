/*
 * XREFs of PpmResetIdlePolicy @ 0x14018B8A0
 * Callers:
 *     PpmInstallNewIdleStates @ 0x14018B330 (PpmInstallNewIdleStates.c)
 *     PpmApplyIdlePolicyChanges @ 0x1402D3B50 (PpmApplyIdlePolicyChanges.c)
 * Callees:
 *     PpmScaleIdleStateValues @ 0x140175828 (PpmScaleIdleStateValues.c)
 *     PpmResetProcessorIdleAccounting @ 0x14018B8E4 (PpmResetProcessorIdleAccounting.c)
 *     PpmApplyIdlePolicy @ 0x14018B9BC (PpmApplyIdlePolicy.c)
 */

__int64 __fastcall PpmResetIdlePolicy(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
  {
    PpmApplyIdlePolicy();
    PpmScaleIdleStateValues(a1);
    KeQueryPerformanceCounter(0LL);
    return PpmResetProcessorIdleAccounting(*(void **)(a1 + 8));
  }
  return result;
}
