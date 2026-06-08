/*
 * XREFs of EnumerateNextDevice @ 0x1C00025F0
 * Callers:
 *     ComputeProcessorEnergyUsingMsr @ 0x1C00010B0 (ComputeProcessorEnergyUsingMsr.c)
 *     ComputeHyperThreadedProcessorEnergyUsingMsr @ 0x1C0001160 (ComputeHyperThreadedProcessorEnergyUsingMsr.c)
 *     InitLegacyPccInternal @ 0x1C00089AC (InitLegacyPccInternal.c)
 *     ProcLibTraceControlCallback @ 0x1C001D140 (ProcLibTraceControlCallback.c)
 *     RegisterHvPerfStates @ 0x1C0020950 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C0020EB0 (RegisterHvLegacyPcc.c)
 *     InitPerfStatesInternal @ 0x1C0029684 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0029F7C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C002A4DC (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C002B870 (RegisterKernelPepPerf.c)
 *     CpcHighestNotifyWorker @ 0x1C002E018 (CpcHighestNotifyWorker.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002F900 (ValidatePerfDomainSymmetry.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C00324E8 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C0032A90 (RetrieveEfficiencyClassInformation.c)
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
    if ( !*(_BYTE *)(a1 + 24) )
    {
      *(_BYTE *)(a1 + 24) = 1;
LABEL_6:
      *a2 = v3;
      return 0;
    }
  }
  else
  {
    v4 = *(__int64 **)(a1 + 8);
    v5 = *v4;
    *(_QWORD *)(a1 + 8) = *v4;
    if ( v5 != *(_QWORD *)a1 )
    {
      v3 = v5 - *(unsigned int *)(a1 + 24);
      goto LABEL_6;
    }
  }
  return v2;
}
