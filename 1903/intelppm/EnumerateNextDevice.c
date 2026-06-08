/*
 * XREFs of EnumerateNextDevice @ 0x1C0003934
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
 *     InitPerfFeedbackInternal @ 0x1C0033A90 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0034E90 (RegisterKernelPepPerf.c)
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
