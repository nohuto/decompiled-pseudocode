/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C00036CC
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C0001700 (EvtDeviceD0Entry.c)
 *     SetGV3PerfState @ 0x1C00019D0 (SetGV3PerfState.c)
 *     Display_xSD @ 0x1C000203C (Display_xSD.c)
 *     Display_PSS @ 0x1C00021EC (Display_PSS.c)
 *     Display_PCT_PTC @ 0x1C00023B8 (Display_PCT_PTC.c)
 *     Display_CST @ 0x1C00024B4 (Display_CST.c)
 *     DisplayPPMFlags @ 0x1C0002738 (DisplayPPMFlags.c)
 *     DisplayKernelPerfStates @ 0x1C0003990 (DisplayKernelPerfStates.c)
 *     DisplayKernelIdleStates @ 0x1C0003DB8 (DisplayKernelIdleStates.c)
 *     ConnectHwpInterrupt @ 0x1C00063E0 (ConnectHwpInterrupt.c)
 *     SetGV3PerfStateAndTurbo @ 0x1C00070D0 (SetGV3PerfStateAndTurbo.c)
 *     SetTurboDisablePolicy @ 0x1C00072D0 (SetTurboDisablePolicy.c)
 *     GetProcessorStatusInfo @ 0x1C000A840 (GetProcessorStatusInfo.c)
 *     AcpiNotifyCallback @ 0x1C000AF70 (AcpiNotifyCallback.c)
 *     AcpiOSCNotifyWorker @ 0x1C000B100 (AcpiOSCNotifyWorker.c)
 *     Display_CPC @ 0x1C000B15C (Display_CPC.c)
 *     Display_CSD @ 0x1C000B324 (Display_CSD.c)
 *     Display_LPI @ 0x1C000B630 (Display_LPI.c)
 *     Display_TSS @ 0x1C000BA74 (Display_TSS.c)
 *     UpdateKernelPlatformStates @ 0x1C000DC30 (UpdateKernelPlatformStates.c)
 *     AcpiEval_PPC @ 0x1C001F35C (AcpiEval_PPC.c)
 *     InitAcpiCpc @ 0x1C002005C (InitAcpiCpc.c)
 *     InitAcpiIdleDomain @ 0x1C0020244 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C00202D8 (InitAcpiPerfDomain.c)
 *     InitAcpi2CStates @ 0x1C0020454 (InitAcpi2CStates.c)
 *     ValidateAcpiCStates @ 0x1C00204CC (ValidateAcpiCStates.c)
 *     InitAcpiPerfStates @ 0x1C0020570 (InitAcpiPerfStates.c)
 *     QueryPepCapabilites @ 0x1C00208BC (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x1C0020A28 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C0020AA4 (InitAcpiLpiStates.c)
 *     ProcLibDeviceStart @ 0x1C0020CA8 (ProcLibDeviceStart.c)
 *     InitAcpi3ThrottleStates @ 0x1C0021664 (InitAcpi3ThrottleStates.c)
 *     AcpiEval_CSD @ 0x1C0021B3C (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C0021CA4 (AcpiEval_CPC.c)
 *     AcpiEval_CST @ 0x1C00220E0 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C00223D0 (AcpiEval_PSS.c)
 *     AcpiParseCore @ 0x1C002265C (AcpiParseCore.c)
 *     AcpiEval_TSS @ 0x1C0022790 (AcpiEval_TSS.c)
 *     RegisterXsdDomain @ 0x1C0022E00 (RegisterXsdDomain.c)
 *     InitPerfStatesInternal @ 0x1C0023A18 (InitPerfStatesInternal.c)
 *     RegisterIdleComplete @ 0x1C0024648 (RegisterIdleComplete.c)
 *     DecodeMWaitIdleState @ 0x1C0025320 (DecodeMWaitIdleState.c)
 *     AcpiParseRegister @ 0x1C0025640 (AcpiParseRegister.c)
 *     CpcConnectNativeInterrupt @ 0x1C002C664 (CpcConnectNativeInterrupt.c)
 *     ValidateLpiState @ 0x1C002DC80 (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x1C002DF4C (ValidatePccEntry.c)
 *     ValidatePccHeader @ 0x1C002E024 (ValidatePccHeader.c)
 *     AcpiCStateNotifyWorker @ 0x1C0030190 (AcpiCStateNotifyWorker.c)
 *     AcpiEval_PCCP @ 0x1C003042C (AcpiEval_PCCP.c)
 *     AcpiEval_TPC @ 0x1C003073C (AcpiEval_TPC.c)
 *     AcpiEval_XPSS @ 0x1C0030898 (AcpiEval_XPSS.c)
 *     AcpiPStateNotifyWorker @ 0x1C0030EF0 (AcpiPStateNotifyWorker.c)
 *     AcpiParseRegisterOrQword @ 0x1C0031A90 (AcpiParseRegisterOrQword.c)
 *     AcpiParseULong64 @ 0x1C0031BB0 (AcpiParseULong64.c)
 *     AcpiTStateNotifyWorker @ 0x1C0031C30 (AcpiTStateNotifyWorker.c)
 *     InitAcpiThrottleDomain @ 0x1C0031FE8 (InitAcpiThrottleDomain.c)
 *     InitCpcStatesInternal @ 0x1C0032738 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0033AB4 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0034EB0 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C003550C (RegisterKernelPlatformStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C00368D4 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0036BA8 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     InitPepPerfStates @ 0x1C00377A4 (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C00382F0 (PepUpdatePerformanceConstraintWorker.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C003898C (LpiTranslateCoordinatedIdleStates.c)
 *     ProcLibGlobalInit @ 0x1C00396F4 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
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
