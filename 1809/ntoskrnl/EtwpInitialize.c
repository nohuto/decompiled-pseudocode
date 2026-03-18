/*
 * XREFs of EtwpInitialize @ 0x1409D0620
 * Callers:
 *     EtwInitialize @ 0x140743300 (EtwInitialize.c)
 * Callees:
 *     KeGetPrcb @ 0x1400A62A4 (KeGetPrcb.c)
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     KiInitializeMutant @ 0x1400DD358 (KiInitializeMutant.c)
 *     KiInitializeTimer2 @ 0x1400FD4CC (KiInitializeTimer2.c)
 *     KeQueryBootTimeValues @ 0x140129290 (KeQueryBootTimeValues.c)
 *     RtlGetMultiTimePrecise @ 0x140138678 (RtlGetMultiTimePrecise.c)
 *     ExRegisterCallback @ 0x14016C660 (ExRegisterCallback.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140173240 (KeRegisterBugCheckReasonCallback.c)
 *     ZwUpdateWnfStateData @ 0x1401BBA50 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x1401BBB80 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     EtwRegister @ 0x1406BE560 (EtwRegister.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1406C5BD8 (EtwpUpdateFileInfoDriverState.c)
 *     ExCreateCallback @ 0x1406CA3A0 (ExCreateCallback.c)
 *     TraceLoggingRegisterEx @ 0x14071DC58 (TraceLoggingRegisterEx.c)
 *     EtwpInitializeProcessorTrace @ 0x140727380 (EtwpInitializeProcessorTrace.c)
 *     EtwpInitializeStackLookasideList @ 0x140741170 (EtwpInitializeStackLookasideList.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x1407411AC (EtwpInitializePrivateSessionDemuxObject.c)
 *     EtwpInitializeLastBranchTracing @ 0x140741258 (EtwpInitializeLastBranchTracing.c)
 *     EtwpInitializeProviderTraits @ 0x1407412C0 (EtwpInitializeProviderTraits.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140741300 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpInitializeSiloAllowedGroupMask @ 0x14074140C (EtwpInitializeSiloAllowedGroupMask.c)
 *     EtwInitializeSiloState @ 0x140741454 (EtwInitializeSiloState.c)
 *     EtwpInitializeCoverage @ 0x140742F9C (EtwpInitializeCoverage.c)
 *     TlgRegisterAggregateProviderEx @ 0x140742FF4 (TlgRegisterAggregateProviderEx.c)
 *     EtwInitializeProcessor @ 0x140743334 (EtwInitializeProcessor.c)
 *     WdipSemInitialize @ 0x140743460 (WdipSemInitialize.c)
 *     EtwpInitializeSecurity @ 0x1409D008C (EtwpInitializeSecurity.c)
 *     EtwpReadConfigParameters @ 0x1409D01B0 (EtwpReadConfigParameters.c)
 *     EtwpInitializeRegistration @ 0x1409D03BC (EtwpInitializeRegistration.c)
 *     EtwpInitializeRealTimeConnection @ 0x1409D04A0 (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeCoverageSampler @ 0x1409D0554 (EtwpInitializeCoverageSampler.c)
 *     PerfDiagInitialize @ 0x1409D0A80 (PerfDiagInitialize.c)
 *     EtwpTraceSystemInitialization @ 0x1409D1A58 (EtwpTraceSystemInitialization.c)
 */

void __fastcall EtwpInitialize(int a1)
{
  ULONG v1; // esi
  int v2; // eax
  __int64 v3; // r8
  _WORD *v4; // rdi
  __int64 i; // rcx
  ULONG j; // edi
  __int64 Prcb; // rax
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  LARGE_INTEGER v20[3]; // [rsp+50h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  int v22; // [rsp+D0h] [rbp+67h] BYREF
  LARGE_INTEGER v23; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v24; // [rsp+E0h] [rbp+77h] BYREF
  char v25; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = KeNumberProcessors_0;
  if ( a1 )
  {
    if ( a1 == 1 )
      EtwpUpdateFileInfoDriverState(PerfGlobalGroupMask, PerfGlobalGroupMask, 1, (_QWORD *)EtwpHostSiloState, 0);
  }
  else
  {
    KeQueryBootTimeValues(&EtwpRefTimeSystem, &v23, &v24);
    EtwpBootTime = v23.QuadPart - v24;
    RtlGetMultiTimePrecise(v20, 3, &v22);
    EtwpRefQpcDelta = 0LL;
    if ( (v22 & 1) != 0 )
    {
      EtwpRefTimePerfCounter = v20[0].QuadPart;
      if ( (v22 & 2) != 0 )
        EtwpRefQpcDelta = v20[1].QuadPart - v20[0].QuadPart;
    }
    else
    {
      EtwpRefTimePerfCounter = KeQueryPerformanceCounter(0LL).QuadPart;
    }
    EtwpRefTimeCycle = __rdtsc();
    v2 = EtwpInitializeSecurity();
    if ( v2 < 0 )
      KeBugCheckEx(0x11Du, 1uLL, v2, 0LL, 0LL);
    v4 = (_WORD *)0xFFFFF78000000380LL;
    for ( i = 9LL; i; --i )
      *v4++ = 0;
    for ( j = 0; j < v1; ++j )
    {
      Prcb = KeGetPrcb(j);
      v8 = EtwInitializeProcessor(Prcb);
      if ( v8 < 0 )
        KeBugCheckEx(0x11Du, 2uLL, v8, j, 0LL);
    }
    LOBYTE(v3) = 1;
    KiInitializeMutant((__int64)&EtwpGroupMaskMutex, 0LL, v3);
    LOBYTE(v9) = 1;
    KiInitializeMutant((__int64)&EtwpStartTraceMutex, 0LL, v9);
    LOBYTE(v10) = 1;
    KiInitializeMutant((__int64)&EtwpCrimsonMaskMutex, 0LL, v10);
    EtwpSecurityLock = 0LL;
    EtwpInitializeStackLookasideList();
    EtwpReadConfigParameters();
    EtwpInitializeRegistration(v12, v11, v13);
    EtwpInitializePrivateSessionDemuxObject();
    EtwpInitializeRealTimeConnection();
    EtwCPUSpeedInMHz = *(_DWORD *)(KeGetPrcb(0) + 68);
    KeQueryPerformanceCounter(&EtwPerfFreq);
    EtwpInitializeLastBranchTracing();
    EtwpInitializeProcessorTrace(v15, v14);
    EtwpAdjustBuffersWorkItem.List.Flink = 0LL;
    EtwpAdjustBuffersWorkItem.WorkerRoutine = (void (__fastcall *)(void *))EtwpAdjustTraceBuffers;
    word_14040A3C2 = 0;
    EtwpAdjustBuffersWorkItem.Parameter = &EtwpBufferAdjustmentActive;
    EtwpBufferAdjustmentCount = 8;
    KiInitializeTimer2((__int64)&EtwpMemInfoTimer, (__int64)EtwpLogMemInfoTimerCallback, 0LL, 8);
    EtwpInitializeProviderTraits();
    if ( !ExRegisterCallback((PCALLBACK_OBJECT)ExCbPowerState, (PCALLBACK_FUNCTION)EtwpPowerStateCallback, 0LL) )
      goto LABEL_24;
    EtwpLoggerSaveEvent = 0LL;
    if ( (int)KsrGetFirmwareInformation(&v25) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 80;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ExCreateCallback(&EtwpKsrCallbackObject, &ObjectAttributes, 0, 1u) >= 0 )
        ExRegisterCallback(EtwpKsrCallbackObject, (PCALLBACK_FUNCTION)EtwpKsrCallback, 0LL);
    }
    EtwpLoadMicroarchitecturalPmcs();
    EtwpInitializeSiloAllowedGroupMask();
    if ( (int)EtwInitializeSiloState(0LL) < 0 )
LABEL_24:
      KeBugCheck(0x11Du);
    EtwpBugCheckCallback.State = 0;
    KeRegisterBugCheckReasonCallback(
      &EtwpBugCheckCallback,
      (PKBUGCHECK_REASON_CALLBACK_ROUTINE)EtwpBugCheckMultiPartCallback,
      KbCallbackSecondaryMultiPartDumpData,
      (PUCHAR)&EtwpComponentName);
    EtwRegister(
      &EventTracingProvGuid,
      (PETWENABLECALLBACK)EtwpTracingProvEnableCallback,
      0LL,
      &EtwpEventTracingProvRegHandle);
    WdipSemInitialize();
    PerfDiagInitialize();
    EtwpInitializeCoverage();
    EtwpInitializeCoverageSampler();
    EtwRegister(&KernelProvGuid, (PETWENABLECALLBACK)EtwpKernelProvEnableCallback, 0LL, &EtwKernelProvRegHandle);
    TraceLoggingRegisterEx(&stru_1404002D0, 0LL, 0LL);
    EtwRegister(&PsProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)1, &EtwpPsProvRegHandle);
    TlgRegisterAggregateProviderEx(
      &stru_140400308,
      (TLG_PENABLECALLBACK)EtwpTraceLoggingProvEnableCallback,
      &PsProvTraceLoggingGuid);
    EtwRegister(&NetProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)0x10000, &EtwpNetProvRegHandle);
    EtwRegister(&DiskProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)0x100, &EtwpDiskProvRegHandle);
    EtwRegister(
      &FileProvGuid,
      (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
      (PVOID)0x2000000,
      &EtwpFileProvRegHandle);
    EtwRegister(&RegistryProvGuid, (PETWENABLECALLBACK)EtwpRegTraceEnableCallback, 0LL, &EtwpRegTraceHandle);
    EtwRegister(
      &MemoryProvGuid,
      (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
      (PVOID)0x20000001,
      &EtwpMemoryProvRegHandle);
    EtwRegister(&MS_Windows_Kernel_AppCompat_Provider, 0LL, 0LL, &EtwAppCompatProvRegHandle);
    EtwRegister(&KernelAuditApiCallsGuid, 0LL, 0LL, &EtwApiCallsProvRegHandle);
    EtwRegister(&CVEAuditProviderGuid, 0LL, 0LL, &EtwCVEAuditProvRegHandle);
    EtwRegister(&ThreatIntProviderGuid, 0LL, 0LL, &EtwThreatIntProvRegHandle);
    EtwRegister(&MS_Windows_Security_LPAC_Provider, 0LL, 0LL, &EtwLpacProvRegHandle);
    EtwRegister(&MS_Windows_Security_Adminless_Provider, 0LL, 0LL, &EtwAdminlessProvRegHandle);
    EtwRegister(&SecurityMitigationsProviderGuid, 0LL, 0LL, &EtwSecurityMitigationsRegHandle);
    EtwpInitialized = 1;
    ZwUpdateWnfStateData((__int64)&WNF_ETW_SUBSYSTEM_INITIALIZED, 0LL, 0LL);
    EtwpTraceSystemInitialization(v17, v16, v18);
  }
}
