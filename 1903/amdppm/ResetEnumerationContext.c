/*
 * XREFs of ResetEnumerationContext @ 0x1C00025D4
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C001D140 (ProcLibTraceControlCallback.c)
 *     RegisterHvPerfStates @ 0x1C0020950 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C0020EB0 (RegisterHvLegacyPcc.c)
 *     InitPerfStatesInternal @ 0x1C0029684 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0029F7C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C002A4DC (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C002B860 (RegisterKernelPepPerf.c)
 *     CpcHighestNotifyWorker @ 0x1C002E008 (CpcHighestNotifyWorker.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002F8F0 (ValidatePerfDomainSymmetry.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C00324D8 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C0032A80 (RetrieveEfficiencyClassInformation.c)
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
