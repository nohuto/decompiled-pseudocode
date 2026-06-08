/*
 * XREFs of EnumerateNextDevice @ 0x1C0003CD0
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000287C (InitLegacyPccInternal.c)
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
