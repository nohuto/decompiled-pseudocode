/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C00010B0
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C00019F0 (EvtDeviceD0Entry.c)
 *     UpdateKernelPlatformStates @ 0x1C00023F0 (UpdateKernelPlatformStates.c)
 *     GetProcessorStatusInfo @ 0x1C00053D0 (GetProcessorStatusInfo.c)
 *     AcpiNotifyCallback @ 0x1C0006B70 (AcpiNotifyCallback.c)
 *     AcpiOSCNotifyWorker @ 0x1C0006CB0 (AcpiOSCNotifyWorker.c)
 *     Display_PSS @ 0x1C0006D44 (Display_PSS.c)
 *     Display_PCT_PTC @ 0x1C0006F9C (Display_PCT_PTC.c)
 *     Display_TSS @ 0x1C00070D8 (Display_TSS.c)
 *     Display_xSD @ 0x1C000732C (Display_xSD.c)
 *     Display_CST @ 0x1C00075B8 (Display_CST.c)
 *     Display_CSD @ 0x1C00077D0 (Display_CSD.c)
 *     Display_CPC @ 0x1C0007A7C (Display_CPC.c)
 *     Display_LPI @ 0x1C0007E48 (Display_LPI.c)
 *     DisplayPPMFlags @ 0x1C000873C (DisplayPPMFlags.c)
 *     DisplayKernelPerfStates @ 0x1C00090D4 (DisplayKernelPerfStates.c)
 *     DisplayKernelIdleStates @ 0x1C00091D4 (DisplayKernelIdleStates.c)
 *     DecodeMWaitIdleState @ 0x1C001A010 (DecodeMWaitIdleState.c)
 *     RegisterIdleComplete @ 0x1C001D07C (RegisterIdleComplete.c)
 *     RegisterKernelPlatformStates @ 0x1C001D178 (RegisterKernelPlatformStates.c)
 *     InitPerfStatesInternal @ 0x1C001DE98 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C001E73C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C001EC8C (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C001FF60 (RegisterKernelPepPerf.c)
 *     InitAcpiPerfStates @ 0x1C00209E4 (InitAcpiPerfStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C0021028 (InitAcpi3ThrottleStates.c)
 *     AcquirePccInterface @ 0x1C00214C0 (AcquirePccInterface.c)
 *     InitAcpiIdleDomain @ 0x1C0021928 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C0021A4C (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C0021C88 (InitAcpiThrottleDomain.c)
 *     RegisterXsdDomain @ 0x1C0021D98 (RegisterXsdDomain.c)
 *     InitAcpiCpc @ 0x1C0022250 (InitAcpiCpc.c)
 *     CpcConnectNativeInterrupt @ 0x1C00225B0 (CpcConnectNativeInterrupt.c)
 *     InitAcpi2CStates @ 0x1C0023034 (InitAcpi2CStates.c)
 *     AcpiEval_CST @ 0x1C0023740 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C002404C (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C00243CC (AcpiEval_XPSS.c)
 *     AcpiEval_PPC @ 0x1C002478C (AcpiEval_PPC.c)
 *     AcpiEval_TSS @ 0x1C00248C4 (AcpiEval_TSS.c)
 *     AcpiEval_TPC @ 0x1C0024BAC (AcpiEval_TPC.c)
 *     AcpiEval_CSD @ 0x1C0024CD4 (AcpiEval_CSD.c)
 *     AcpiEval_PCCP @ 0x1C0024FC0 (AcpiEval_PCCP.c)
 *     AcpiEval_CPC @ 0x1C00251A0 (AcpiEval_CPC.c)
 *     AcpiParseCore @ 0x1C0026378 (AcpiParseCore.c)
 *     AcpiParseULong64 @ 0x1C0026600 (AcpiParseULong64.c)
 *     AcpiParseRegister @ 0x1C0026670 (AcpiParseRegister.c)
 *     AcpiParseRegisterOrQword @ 0x1C0026700 (AcpiParseRegisterOrQword.c)
 *     AcpiPStateNotifyWorker @ 0x1C0026980 (AcpiPStateNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x1C0026AC0 (AcpiTStateNotifyWorker.c)
 *     AcpiCStateNotifyWorker @ 0x1C0026C00 (AcpiCStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x1C0027484 (ProcLibDeviceStart.c)
 *     QueryPepCapabilites @ 0x1C002B810 (QueryPepCapabilites.c)
 *     InitPepPerfStates @ 0x1C002BD0C (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C002C570 (PepUpdatePerformanceConstraintWorker.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C002D030 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C002D3D4 (PepNotifyQueryProcessorIdleStates.c)
 *     InitAcpiLegacyPcc @ 0x1C002DFA0 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C002E1E8 (InitAcpiLpiStates.c)
 *     ValidateAcpiCStates @ 0x1C002F354 (ValidateAcpiCStates.c)
 *     ValidateLpiState @ 0x1C0030790 (ValidateLpiState.c)
 *     ProcLibGlobalInit @ 0x1C003241C (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-28h]

  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, 0LL);
}
