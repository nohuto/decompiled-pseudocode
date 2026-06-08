/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C000138C
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C0002D50 (EvtDeviceD0Entry.c)
 *     GetProcessorStatusInfo @ 0x1C0003490 (GetProcessorStatusInfo.c)
 *     AcpiNotifyCallback @ 0x1C0004D90 (AcpiNotifyCallback.c)
 *     AcpiOSCNotifyWorker @ 0x1C0004F20 (AcpiOSCNotifyWorker.c)
 *     Display_PSS @ 0x1C0004FC4 (Display_PSS.c)
 *     Display_PCT_PTC @ 0x1C00052B8 (Display_PCT_PTC.c)
 *     Display_TSS @ 0x1C0005424 (Display_TSS.c)
 *     Display_xSD @ 0x1C00056E0 (Display_xSD.c)
 *     Display_CST @ 0x1C00059FC (Display_CST.c)
 *     Display_CSD @ 0x1C0005C94 (Display_CSD.c)
 *     Display_CPC @ 0x1C0005FDC (Display_CPC.c)
 *     Display_LPI @ 0x1C0006460 (Display_LPI.c)
 *     DisplayPPMFlags @ 0x1C0006E2C (DisplayPPMFlags.c)
 *     DisplayKernelPerfStates @ 0x1C0007A54 (DisplayKernelPerfStates.c)
 *     DisplayKernelIdleStates @ 0x1C0007BA0 (DisplayKernelIdleStates.c)
 *     UpdateKernelPlatformStates @ 0x1C00084EC (UpdateKernelPlatformStates.c)
 *     DecodeMWaitIdleState @ 0x1C001C2B0 (DecodeMWaitIdleState.c)
 *     AcpiEval_CST @ 0x1C0022560 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C0022F24 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C00232F8 (AcpiEval_XPSS.c)
 *     AcpiEval_PPC @ 0x1C002370C (AcpiEval_PPC.c)
 *     AcpiEval_TSS @ 0x1C002387C (AcpiEval_TSS.c)
 *     AcpiEval_TPC @ 0x1C0023B94 (AcpiEval_TPC.c)
 *     AcpiEval_CSD @ 0x1C0023CF0 (AcpiEval_CSD.c)
 *     AcpiEval_PCCP @ 0x1C0024010 (AcpiEval_PCCP.c)
 *     AcpiEval_CPC @ 0x1C0024214 (AcpiEval_CPC.c)
 *     AcpiParseCore @ 0x1C0025514 (AcpiParseCore.c)
 *     AcpiParseULong64 @ 0x1C0025800 (AcpiParseULong64.c)
 *     AcpiParseRegister @ 0x1C0025880 (AcpiParseRegister.c)
 *     AcpiParseRegisterOrQword @ 0x1C0025930 (AcpiParseRegisterOrQword.c)
 *     AcpiPStateNotifyWorker @ 0x1C0025BE0 (AcpiPStateNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x1C0025D30 (AcpiTStateNotifyWorker.c)
 *     AcpiCStateNotifyWorker @ 0x1C0025E80 (AcpiCStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x1C0026714 (ProcLibDeviceStart.c)
 *     RegisterIdleComplete @ 0x1C0028768 (RegisterIdleComplete.c)
 *     RegisterKernelPlatformStates @ 0x1C002887C (RegisterKernelPlatformStates.c)
 *     InitPerfStatesInternal @ 0x1C0029684 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0029F7C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C002A4DC (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C002B860 (RegisterKernelPepPerf.c)
 *     InitAcpiPerfStates @ 0x1C002C344 (InitAcpiPerfStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C002CA20 (InitAcpi3ThrottleStates.c)
 *     InitAcpiIdleDomain @ 0x1C002CEF0 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C002D050 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C002D2C8 (InitAcpiThrottleDomain.c)
 *     RegisterXsdDomain @ 0x1C002D414 (RegisterXsdDomain.c)
 *     InitAcpiCpc @ 0x1C002D774 (InitAcpiCpc.c)
 *     CpcConnectNativeInterrupt @ 0x1C002DB4C (CpcConnectNativeInterrupt.c)
 *     InitAcpi2CStates @ 0x1C002E6B0 (InitAcpi2CStates.c)
 *     ValidateAcpiCStates @ 0x1C002EE8C (ValidateAcpiCStates.c)
 *     ValidatePccHeader @ 0x1C002F434 (ValidatePccHeader.c)
 *     ValidatePccEntry @ 0x1C002F530 (ValidatePccEntry.c)
 *     ValidateLpiState @ 0x1C0030828 (ValidateLpiState.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C00312A8 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C003171C (PepNotifyQueryProcessorIdleStates.c)
 *     InitPepPerfStates @ 0x1C0032C74 (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C0033670 (PepUpdatePerformanceConstraintWorker.c)
 *     QueryPepCapabilites @ 0x1C0033AB8 (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x1C0034034 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C0034260 (InitAcpiLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C0034934 (LpiTranslateCoordinatedIdleStates.c)
 *     ProcLibGlobalInit @ 0x1C0035560 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
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
