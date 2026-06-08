/*
 * XREFs of GetPerfDomain @ 0x1C002D700
 * Callers:
 *     InitLegacyPccInternal @ 0x1C00089AC (InitLegacyPccInternal.c)
 *     RegisterHvPerfStates @ 0x1C0020950 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C0020EB0 (RegisterHvLegacyPcc.c)
 *     InitPerfStatesInternal @ 0x1C0029684 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0029F7C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C002A4DC (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C002B860 (RegisterKernelPepPerf.c)
 *     CpcHighestNotifyWorker @ 0x1C002E008 (CpcHighestNotifyWorker.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002F8F0 (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C00025A4 (InitializeEnumerationContext.c)
 *     InitializeSingleEnumerationContext @ 0x1C00025BC (InitializeSingleEnumerationContext.c)
 */

__int64 __fastcall GetPerfDomain(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // edx
  unsigned int v7; // r9d

  v4 = *(_QWORD *)(a1 + 544);
  if ( v4 )
  {
    *a3 = *(_DWORD *)(v4 + 40);
    v5 = a2;
    v6 = 552;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 1064);
    if ( !v4 || *(_DWORD *)(v4 + 36) <= 1u )
    {
      *a3 = 0;
      InitializeSingleEnumerationContext(a1, a2);
      return v7;
    }
    *a3 = 1;
    v5 = a2;
    v6 = 1072;
  }
  InitializeEnumerationContext(v4 + 16, v6, v5);
  return v7;
}
