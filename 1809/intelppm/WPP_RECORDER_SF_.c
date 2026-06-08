/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0002E78
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C00016E0 (EvtDeviceD0Entry.c)
 *     SetGV3PerfState @ 0x1C00019E0 (SetGV3PerfState.c)
 *     Display_xSD @ 0x1C0001D14 (Display_xSD.c)
 *     Display_PSS @ 0x1C0001E48 (Display_PSS.c)
 *     Display_PCT_PTC @ 0x1C0001F84 (Display_PCT_PTC.c)
 *     Display_CST @ 0x1C0002050 (Display_CST.c)
 *     DisplayPPMFlags @ 0x1C000222C (DisplayPPMFlags.c)
 *     DisplayKernelPerfStates @ 0x1C0003050 (DisplayKernelPerfStates.c)
 *     DisplayKernelIdleStates @ 0x1C0003AE0 (DisplayKernelIdleStates.c)
 *     ConnectHwpInterrupt @ 0x1C00067F0 (ConnectHwpInterrupt.c)
 *     SetGV3PerfStateAndTurbo @ 0x1C0007310 (SetGV3PerfStateAndTurbo.c)
 *     SetTurboDisablePolicy @ 0x1C00073F0 (SetTurboDisablePolicy.c)
 *     GetProcessorStatusInfo @ 0x1C000A2F0 (GetProcessorStatusInfo.c)
 *     AcpiNotifyCallback @ 0x1C000AA10 (AcpiNotifyCallback.c)
 *     AcpiOSCNotifyWorker @ 0x1C000AB50 (AcpiOSCNotifyWorker.c)
 *     Display_CPC @ 0x1C000AB9C (Display_CPC.c)
 *     Display_CSD @ 0x1C000AD24 (Display_CSD.c)
 *     Display_LPI @ 0x1C000AF94 (Display_LPI.c)
 *     Display_TSS @ 0x1C000B304 (Display_TSS.c)
 *     UpdateKernelPlatformStates @ 0x1C000D3CC (UpdateKernelPlatformStates.c)
 *     AcpiEval_PPC @ 0x1C001E16C (AcpiEval_PPC.c)
 *     QueryPepCapabilites @ 0x1C001ED58 (QueryPepCapabilites.c)
 *     ProcLibDeviceStart @ 0x1C001EF84 (ProcLibDeviceStart.c)
 *     RegisterXsdDomain @ 0x1C002016C (RegisterXsdDomain.c)
 *     InitAcpiCpc @ 0x1C0020470 (InitAcpiCpc.c)
 *     InitAcpiIdleDomain @ 0x1C0020648 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C00206CC (InitAcpiPerfDomain.c)
 *     InitAcpi2CStates @ 0x1C0020848 (InitAcpi2CStates.c)
 *     ValidateAcpiCStates @ 0x1C00208C0 (ValidateAcpiCStates.c)
 *     InitAcpiPerfStates @ 0x1C0020964 (InitAcpiPerfStates.c)
 *     InitAcpiLegacyPcc @ 0x1C0020CA4 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C0020D10 (InitAcpiLpiStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C0020E30 (InitAcpi3ThrottleStates.c)
 *     AcpiEval_CSD @ 0x1C00212E4 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C002144C (AcpiEval_CPC.c)
 *     AcpiEval_CST @ 0x1C0021888 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C0021B78 (AcpiEval_PSS.c)
 *     AcpiParseCore @ 0x1C0021E04 (AcpiParseCore.c)
 *     AcpiEval_TSS @ 0x1C0021F34 (AcpiEval_TSS.c)
 *     InitPerfStatesInternal @ 0x1C0022910 (InitPerfStatesInternal.c)
 *     RegisterIdleComplete @ 0x1C0023C7C (RegisterIdleComplete.c)
 *     DecodeMWaitIdleState @ 0x1C0024830 (DecodeMWaitIdleState.c)
 *     AcpiParseRegister @ 0x1C0024B80 (AcpiParseRegister.c)
 *     CpcConnectNativeInterrupt @ 0x1C002A664 (CpcConnectNativeInterrupt.c)
 *     ValidateLpiState @ 0x1C002B9A8 (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x1C002BB98 (ValidatePccEntry.c)
 *     ValidatePccHeader @ 0x1C002BC3C (ValidatePccHeader.c)
 *     AcpiCStateNotifyWorker @ 0x1C002DBB0 (AcpiCStateNotifyWorker.c)
 *     AcpiEval_PCCP @ 0x1C002DE3C (AcpiEval_PCCP.c)
 *     AcpiEval_TPC @ 0x1C002E128 (AcpiEval_TPC.c)
 *     AcpiEval_XPSS @ 0x1C002E250 (AcpiEval_XPSS.c)
 *     AcpiPStateNotifyWorker @ 0x1C002E850 (AcpiPStateNotifyWorker.c)
 *     AcpiParseRegisterOrQword @ 0x1C002F300 (AcpiParseRegisterOrQword.c)
 *     AcpiParseULong64 @ 0x1C002F400 (AcpiParseULong64.c)
 *     AcpiTStateNotifyWorker @ 0x1C002F470 (AcpiTStateNotifyWorker.c)
 *     InitAcpiThrottleDomain @ 0x1C002F808 (InitAcpiThrottleDomain.c)
 *     InitCpcStatesInternal @ 0x1C002FF1C (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00311EC (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C00324B0 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C0032ABC (RegisterKernelPlatformStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0033D84 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0033FAC (PepNotifyQueryProcessorIdleStatesV2.c)
 *     InitPepPerfStates @ 0x1C0034B10 (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C0035480 (PepUpdatePerformanceConstraintWorker.c)
 *     ProcLibGlobalInit @ 0x1C00361EC (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
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
