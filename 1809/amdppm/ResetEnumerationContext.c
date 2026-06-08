/*
 * XREFs of ResetEnumerationContext @ 0x1C0003CB4
 * Callers:
 *     RegisterHvPerfStates @ 0x1C001A770 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C001ACA0 (RegisterHvLegacyPcc.c)
 *     InitPerfStatesInternal @ 0x1C001DE98 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C001E73C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C001EC8C (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C001FF60 (RegisterKernelPepPerf.c)
 *     CpcHighestNotifyWorker @ 0x1C00229EC (CpcHighestNotifyWorker.c)
 *     ProcLibTraceControlCallback @ 0x1C0029130 (ProcLibTraceControlCallback.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002FA1C (ValidatePerfDomainSymmetry.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0030974 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C0030EDC (RetrieveEfficiencyClassInformation.c)
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
