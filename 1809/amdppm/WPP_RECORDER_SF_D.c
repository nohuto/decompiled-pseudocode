/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C00016A8
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C00019F0 (EvtDeviceD0Entry.c)
 *     RegisterKernelIdleStates @ 0x1C0001EB0 (RegisterKernelIdleStates.c)
 *     UpdateKernelPlatformStates @ 0x1C00023F0 (UpdateKernelPlatformStates.c)
 *     AcpiNotifyCallback @ 0x1C0006B70 (AcpiNotifyCallback.c)
 *     Display_PSS @ 0x1C0006D44 (Display_PSS.c)
 *     Display_TSS @ 0x1C00070D8 (Display_TSS.c)
 *     Display_xSD @ 0x1C000732C (Display_xSD.c)
 *     Display_CST @ 0x1C00075B8 (Display_CST.c)
 *     Display_CSD @ 0x1C00077D0 (Display_CSD.c)
 *     Display_CPC @ 0x1C0007A7C (Display_CPC.c)
 *     Display_LPI @ 0x1C0007E48 (Display_LPI.c)
 *     DisplayKernelPerfStates @ 0x1C00090D4 (DisplayKernelPerfStates.c)
 *     PepParkPreference @ 0x1C00097A0 (PepParkPreference.c)
 *     PepParkMask @ 0x1C0009A10 (PepParkMask.c)
 *     PepPerfCheckComplete @ 0x1C0009B80 (PepPerfCheckComplete.c)
 *     PepDevicePowerControlCallback @ 0x1C0009BF0 (PepDevicePowerControlCallback.c)
 *     PepNotifyPerfConstraints @ 0x1C0009E58 (PepNotifyPerfConstraints.c)
 *     PepNotifyFeedbackRead @ 0x1C0009EE8 (PepNotifyFeedbackRead.c)
 *     PepPerfControlHandler @ 0x1C0009FA0 (PepPerfControlHandler.c)
 *     PepPerfStateControlHandler @ 0x1C000A1B0 (PepPerfStateControlHandler.c)
 *     RegisterHvIdleStates @ 0x1C001A430 (RegisterHvIdleStates.c)
 *     RegisterHvCStates @ 0x1C001A4DC (RegisterHvCStates.c)
 *     RegisterHvPerfStates @ 0x1C001A770 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C001ACA0 (RegisterHvLegacyPcc.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C001B550 (RegisterHvFeedbackCountersCallback.c)
 *     EvtDriverDeviceAdd @ 0x1C001BEA0 (EvtDriverDeviceAdd.c)
 *     EvtDevicePrepareHardware @ 0x1C001C2F0 (EvtDevicePrepareHardware.c)
 *     RegisterKernelPepIdleStates @ 0x1C001CA2C (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPlatformStates @ 0x1C001D178 (RegisterKernelPlatformStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C001D4D8 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x1C001D5B8 (RegisterKernelCoordinatedLpiStates.c)
 *     UpdateKernelIdleDomains @ 0x1C001DCF8 (UpdateKernelIdleDomains.c)
 *     RegisterKernelPerfStatesCallback @ 0x1C001E6C0 (RegisterKernelPerfStatesCallback.c)
 *     RegisterKernelPepPerf @ 0x1C001FF60 (RegisterKernelPepPerf.c)
 *     GetNtProcessorNumber @ 0x1C00205A0 (GetNtProcessorNumber.c)
 *     InitAcpiPerfStates @ 0x1C00209E4 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C0020D1C (InitAcpiThrottleStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C0021028 (InitAcpi3ThrottleStates.c)
 *     RegisterSubspace @ 0x1C0021724 (RegisterSubspace.c)
 *     InitAcpiIdleDomain @ 0x1C0021928 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C0021A4C (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C0021C88 (InitAcpiThrottleDomain.c)
 *     RegisterXsdDomain @ 0x1C0021D98 (RegisterXsdDomain.c)
 *     InitAcpiCpc @ 0x1C0022250 (InitAcpiCpc.c)
 *     InitAcpi2CStates @ 0x1C0023034 (InitAcpi2CStates.c)
 *     RegisterWmi @ 0x1C00231A4 (RegisterWmi.c)
 *     AcpiEval_CST @ 0x1C0023740 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C002404C (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C00243CC (AcpiEval_XPSS.c)
 *     AcpiEval_PPC @ 0x1C002478C (AcpiEval_PPC.c)
 *     AcpiEval_TSS @ 0x1C00248C4 (AcpiEval_TSS.c)
 *     AcpiEval_TPC @ 0x1C0024BAC (AcpiEval_TPC.c)
 *     AcpiEval_CSD @ 0x1C0024CD4 (AcpiEval_CSD.c)
 *     ProcLibDeviceCreate @ 0x1C0027348 (ProcLibDeviceCreate.c)
 *     ProcLibDeviceStart @ 0x1C0027484 (ProcLibDeviceStart.c)
 *     InitPep @ 0x1C002B58C (InitPep.c)
 *     QueryPepCapabilites @ 0x1C002B810 (QueryPepCapabilites.c)
 *     PepNotifyQueryCapabilities @ 0x1C002BA98 (PepNotifyQueryCapabilities.c)
 *     PepRegisterSpmSettings @ 0x1C002BBC8 (PepRegisterSpmSettings.c)
 *     PepGetParkingPageInfo @ 0x1C002BC68 (PepGetParkingPageInfo.c)
 *     InitPepPerfStates @ 0x1C002BD0C (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C002C384 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C002C480 (PepNotifyQueryPerfCapabilities.c)
 *     InitPepIdleStates @ 0x1C002C6F8 (InitPepIdleStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C002C8F8 (PepNotifyQueryCoordinatedStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C002D030 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C002D3D4 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyReportCStates @ 0x1C002D5FC (PepNotifyReportCStates.c)
 *     PepUpdateCoordinatedStateWorker @ 0x1C002D980 (PepUpdateCoordinatedStateWorker.c)
 *     InitAcpiLegacyPcc @ 0x1C002DFA0 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C002E1E8 (InitAcpiLpiStates.c)
 *     Validate_PCT_PTC @ 0x1C002EE98 (Validate_PCT_PTC.c)
 *     ValidateAcpiThrottleStates @ 0x1C002F0CC (ValidateAcpiThrottleStates.c)
 *     ValidateAcpiCPC @ 0x1C002F798 (ValidateAcpiCPC.c)
 *     ValidatePlatformIdleState @ 0x1C003024C (ValidatePlatformIdleState.c)
 *     ValidateLpiState @ 0x1C0030790 (ValidateLpiState.c)
 *     DriverEntry @ 0x1C0032168 (DriverEntry.c)
 *     CollectAcpiBiosInfo @ 0x1C00322D8 (CollectAcpiBiosInfo.c)
 *     ProcLibGlobalInit @ 0x1C003241C (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
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
