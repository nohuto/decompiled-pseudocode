/*
 * XREFs of PpmResetIdlePolicy @ 0x14018B9E0
 * Callers:
 *     PpmInstallNewIdleStates @ 0x14018B470 (PpmInstallNewIdleStates.c)
 *     PpmApplyIdlePolicyChanges @ 0x1402D3D40 (PpmApplyIdlePolicyChanges.c)
 * Callees:
 *     PpmScaleIdleStateValues @ 0x140175928 (PpmScaleIdleStateValues.c)
 *     PpmResetProcessorIdleAccounting @ 0x14018BA24 (PpmResetProcessorIdleAccounting.c)
 *     PpmApplyIdlePolicy @ 0x14018BAFC (PpmApplyIdlePolicy.c)
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
