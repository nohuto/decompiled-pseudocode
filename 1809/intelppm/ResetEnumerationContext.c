/*
 * XREFs of ResetEnumerationContext @ 0x1C0002F5C
 * Callers:
 *     ComputeProcessorEnergyMsrEx @ 0x1C00060B0 (ComputeProcessorEnergyMsrEx.c)
 *     InitLegacyPccInternal @ 0x1C000CF5C (InitLegacyPccInternal.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0022300 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C00225C0 (RetrieveEfficiencyClassInformation.c)
 *     ValidatePerfDomainSymmetry @ 0x1C00226F4 (ValidatePerfDomainSymmetry.c)
 *     InitPerfStatesInternal @ 0x1C0022910 (InitPerfStatesInternal.c)
 *     ProcLibTraceControlCallback @ 0x1C0024D00 (ProcLibTraceControlCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C002AA24 (CpcHighestNotifyWorker.c)
 *     RegisterHvLegacyPcc @ 0x1C002CD60 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C002D1E0 (RegisterHvPerfStates.c)
 *     InitCpcStatesInternal @ 0x1C002FF1C (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00311EC (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C00324B0 (RegisterKernelPepPerf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResetEnumerationContext(__int64 *a1)
{
  __int64 result; // rax

  if ( a1[2] )
  {
    *((_BYTE *)a1 + 24) = 0;
  }
  else
  {
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
