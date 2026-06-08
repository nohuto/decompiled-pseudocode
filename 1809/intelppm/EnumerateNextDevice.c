/*
 * XREFs of EnumerateNextDevice @ 0x1C0002F1C
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

__int64 __fastcall EnumerateNextDevice(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8
  __int64 *v4; // rax
  __int64 v5; // r8

  *a2 = 0LL;
  v2 = -1073741275;
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    if ( *(_BYTE *)(a1 + 24) )
      return v2;
    *(_BYTE *)(a1 + 24) = 1;
    goto LABEL_4;
  }
  v4 = *(__int64 **)(a1 + 8);
  v5 = *v4;
  *(_QWORD *)(a1 + 8) = *v4;
  if ( v5 != *(_QWORD *)a1 )
  {
    v3 = v5 - *(unsigned int *)(a1 + 24);
LABEL_4:
    *a2 = v3;
    return 0;
  }
  return v2;
}
