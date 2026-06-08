/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0002BEC
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C0002D50 (EvtDeviceD0Entry.c)
 *     AcpiNotifyCallback @ 0x1C0004D90 (AcpiNotifyCallback.c)
 *     Display_PSS @ 0x1C0004FC4 (Display_PSS.c)
 *     Display_TSS @ 0x1C0005424 (Display_TSS.c)
 *     Display_xSD @ 0x1C00056E0 (Display_xSD.c)
 *     Display_CST @ 0x1C00059FC (Display_CST.c)
 *     Display_CSD @ 0x1C0005C94 (Display_CSD.c)
 *     Display_CPC @ 0x1C0005FDC (Display_CPC.c)
 *     Display_LPI @ 0x1C0006460 (Display_LPI.c)
 *     DisplayKernelPerfStates @ 0x1C0007A54 (DisplayKernelPerfStates.c)
 *     RegisterKernelIdleStates @ 0x1C0007F30 (RegisterKernelIdleStates.c)
 *     UpdateKernelPlatformStates @ 0x1C00084EC (UpdateKernelPlatformStates.c)
 *     PepNotifyPerfConstraints @ 0x1C000C7F4 (PepNotifyPerfConstraints.c)
 *     PepNotifyFeedbackRead @ 0x1C000C894 (PepNotifyFeedbackRead.c)
 *     PepPerfControlHandler @ 0x1C000C960 (PepPerfControlHandler.c)
 *     PepPerfStateControlHandler @ 0x1C000CB80 (PepPerfStateControlHandler.c)
 *     PepUpdatePerformanceConstraint @ 0x1C000CEBC (PepUpdatePerformanceConstraint.c)
 *     PepParkPreference @ 0x1C000CF70 (PepParkPreference.c)
 *     PepParkMask @ 0x1C000D210 (PepParkMask.c)
 *     PepPerfCheckComplete @ 0x1C000D390 (PepPerfCheckComplete.c)
 *     EvtDriverDeviceAdd @ 0x1C001FB10 (EvtDriverDeviceAdd.c)
 *     EvtDevicePrepareHardware @ 0x1C001FFF0 (EvtDevicePrepareHardware.c)
 *     RegisterHvIdleStates @ 0x1C00202F0 (RegisterHvIdleStates.c)
 *     RegisterHvCStates @ 0x1C00203FC (RegisterHvCStates.c)
 *     RegisterHvLpiStates @ 0x1C00206A4 (RegisterHvLpiStates.c)
 *     RegisterHvPerfStates @ 0x1C0020950 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C0020EB0 (RegisterHvLegacyPcc.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C0021720 (RegisterHvFeedbackCountersCallback.c)
 *     RegisterSubspace @ 0x1C0021D50 (RegisterSubspace.c)
 *     RegisterWmi @ 0x1C0021F74 (RegisterWmi.c)
 *     AcpiEval_CST @ 0x1C0022560 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C0022F24 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C00232F8 (AcpiEval_XPSS.c)
 *     AcpiEval_PPC @ 0x1C002370C (AcpiEval_PPC.c)
 *     AcpiEval_TSS @ 0x1C002387C (AcpiEval_TSS.c)
 *     AcpiEval_TPC @ 0x1C0023B94 (AcpiEval_TPC.c)
 *     AcpiEval_CSD @ 0x1C0023CF0 (AcpiEval_CSD.c)
 *     ProcLibDeviceCreate @ 0x1C00265C4 (ProcLibDeviceCreate.c)
 *     ProcLibDeviceStart @ 0x1C0026714 (ProcLibDeviceStart.c)
 *     RegisterKernelPepIdleStates @ 0x1C00280EC (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPlatformStates @ 0x1C002887C (RegisterKernelPlatformStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C0028C24 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x1C0028D18 (RegisterKernelCoordinatedLpiStates.c)
 *     UpdateKernelIdleDomains @ 0x1C00294D4 (UpdateKernelIdleDomains.c)
 *     RegisterKernelPerfStatesCallback @ 0x1C0029EF0 (RegisterKernelPerfStatesCallback.c)
 *     RegisterKernelPepPerf @ 0x1C002B870 (RegisterKernelPepPerf.c)
 *     GetNtProcessorNumber @ 0x1C002BF00 (GetNtProcessorNumber.c)
 *     InitAcpiPerfStates @ 0x1C002C354 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C002C714 (InitAcpiThrottleStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C002CA30 (InitAcpi3ThrottleStates.c)
 *     InitAcpiIdleDomain @ 0x1C002CF00 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C002D060 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C002D2D8 (InitAcpiThrottleDomain.c)
 *     RegisterXsdDomain @ 0x1C002D424 (RegisterXsdDomain.c)
 *     InitAcpiCpc @ 0x1C002D784 (InitAcpiCpc.c)
 *     InitAcpi2CStates @ 0x1C002E6C0 (InitAcpi2CStates.c)
 *     Validate_PCT_PTC @ 0x1C002E8CC (Validate_PCT_PTC.c)
 *     ValidateAcpiThrottleStates @ 0x1C002EB7C (ValidateAcpiThrottleStates.c)
 *     ValidatePccEntry @ 0x1C002F540 (ValidatePccEntry.c)
 *     ValidateAcpiCPC @ 0x1C002F618 (ValidateAcpiCPC.c)
 *     ValidatePlatformIdleState @ 0x1C00301F0 (ValidatePlatformIdleState.c)
 *     ValidateLpiState @ 0x1C0030838 (ValidateLpiState.c)
 *     InitPepIdleStates @ 0x1C003093C (InitPepIdleStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C0030B5C (PepNotifyQueryCoordinatedStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C00312B8 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C003172C (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyReportCStates @ 0x1C0031A00 (PepNotifyReportCStates.c)
 *     PepUpdateCoordinatedStateWorker @ 0x1C0031D80 (PepUpdateCoordinatedStateWorker.c)
 *     InitPepPerfStates @ 0x1C0032C84 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C003346C (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C003357C (PepNotifyQueryPerfCapabilities.c)
 *     InitPep @ 0x1C0033830 (InitPep.c)
 *     QueryPepCapabilites @ 0x1C0033AC8 (QueryPepCapabilites.c)
 *     PepNotifyQueryCapabilities @ 0x1C0033D98 (PepNotifyQueryCapabilities.c)
 *     PepRegisterSpmSettings @ 0x1C0033EDC (PepRegisterSpmSettings.c)
 *     PepGetParkingPageInfo @ 0x1C0033F90 (PepGetParkingPageInfo.c)
 *     InitAcpiLegacyPcc @ 0x1C0034044 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C0034270 (InitAcpiLpiStates.c)
 *     DriverEntry @ 0x1C003526C (DriverEntry.c)
 *     CollectAcpiBiosInfo @ 0x1C0035408 (CollectAcpiBiosInfo.c)
 *     ProcLibGlobalInit @ 0x1C0035560 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_D(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      va,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, va);
}
