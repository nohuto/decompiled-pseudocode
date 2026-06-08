/*
 * XREFs of ResetEnumerationContext @ 0x1C0003974
 * Callers:
 *     ComputeProcessorEnergyMsrEx @ 0x1C0005C80 (ComputeProcessorEnergyMsrEx.c)
 *     InitLegacyPccInternal @ 0x1C000D63C (InitLegacyPccInternal.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0023620 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C002370C (RetrieveEfficiencyClassInformation.c)
 *     ValidatePerfDomainSymmetry @ 0x1C00237EC (ValidatePerfDomainSymmetry.c)
 *     InitPerfStatesInternal @ 0x1C0023A18 (InitPerfStatesInternal.c)
 *     ProcLibTraceControlCallback @ 0x1C00256F0 (ProcLibTraceControlCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C002CAA0 (CpcHighestNotifyWorker.c)
 *     RegisterHvLegacyPcc @ 0x1C002F370 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C002F810 (RegisterHvPerfStates.c)
 *     InitCpcStatesInternal @ 0x1C0032738 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0033AB4 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0034EB0 (RegisterKernelPepPerf.c)
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
