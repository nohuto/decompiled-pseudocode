/*
 * XREFs of EtwpInitialize @ 0x1409D1620
 * Callers:
 *     EtwInitialize @ 0x1407444D0 (EtwInitialize.c)
 * Callees:
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     KiInitializeMutant @ 0x1400DD3F8 (KiInitializeMutant.c)
 *     KiInitializeTimer2 @ 0x1400FD56C (KiInitializeTimer2.c)
 *     KeQueryBootTimeValues @ 0x140129380 (KeQueryBootTimeValues.c)
 *     RtlGetMultiTimePrecise @ 0x140138798 (RtlGetMultiTimePrecise.c)
 *     ExRegisterCallback @ 0x14016C780 (ExRegisterCallback.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140173360 (KeRegisterBugCheckReasonCallback.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x1401BBD00 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     EtwRegister @ 0x1406BF7E0 (EtwRegister.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1406C6E58 (EtwpUpdateFileInfoDriverState.c)
 *     ExCreateCallback @ 0x1406CB620 (ExCreateCallback.c)
 *     TraceLoggingRegisterEx @ 0x14071EED8 (TraceLoggingRegisterEx.c)
 *     EtwpInitializeProcessorTrace @ 0x140728600 (EtwpInitializeProcessorTrace.c)
 *     EtwpInitializeStackLookasideList @ 0x140742340 (EtwpInitializeStackLookasideList.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x14074237C (EtwpInitializePrivateSessionDemuxObject.c)
 *     EtwpInitializeLastBranchTracing @ 0x140742428 (EtwpInitializeLastBranchTracing.c)
 *     EtwpInitializeProviderTraits @ 0x140742490 (EtwpInitializeProviderTraits.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407424D0 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpInitializeSiloAllowedGroupMask @ 0x1407425DC (EtwpInitializeSiloAllowedGroupMask.c)
 *     EtwInitializeSiloState @ 0x140742624 (EtwInitializeSiloState.c)
 *     EtwpInitializeCoverage @ 0x14074416C (EtwpInitializeCoverage.c)
 *     TlgRegisterAggregateProviderEx @ 0x1407441C4 (TlgRegisterAggregateProviderEx.c)
 *     EtwInitializeProcessor @ 0x140744504 (EtwInitializeProcessor.c)
 *     WdipSemInitialize @ 0x140744630 (WdipSemInitialize.c)
 *     EtwpInitializeSecurity @ 0x1409D108C (EtwpInitializeSecurity.c)
 *     EtwpReadConfigParameters @ 0x1409D11B0 (EtwpReadConfigParameters.c)
 *     EtwpInitializeRegistration @ 0x1409D13BC (EtwpInitializeRegistration.c)
 *     EtwpInitializeRealTimeConnection @ 0x1409D14A0 (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeCoverageSampler @ 0x1409D1554 (EtwpInitializeCoverageSampler.c)
 *     PerfDiagInitialize @ 0x1409D1A80 (PerfDiagInitialize.c)
 *     EtwpTraceSystemInitialization @ 0x1409D2A58 (EtwpTraceSystemInitialization.c)
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
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  LARGE_INTEGER v17[3]; // [rsp+50h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  int v19; // [rsp+D0h] [rbp+67h] BYREF
  LARGE_INTEGER v20; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v21; // [rsp+E0h] [rbp+77h] BYREF
  char v22; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = KeNumberProcessors_0;
  if ( a1 )
  {
    if ( a1 == 1 )
      EtwpUpdateFileInfoDriverState(PerfGlobalGroupMask, PerfGlobalGroupMask, 1, (_QWORD *)EtwpHostSiloState, 0);
  }
  else
  {
    KeQueryBootTimeValues(&EtwpRefTimeSystem, &v20, &v21);
    EtwpBootTime = v20.QuadPart - v21;
    RtlGetMultiTimePrecise(v17, 3, &v19);
    EtwpRefQpcDelta = 0LL;
    if ( (v19 & 1) != 0 )
    {
      EtwpRefTimePerfCounter = v17[0].QuadPart;
      if ( (v19 & 2) != 0 )
        EtwpRefQpcDelta = v17[1].QuadPart - v17[0].QuadPart;
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
    word_14040B422 = 0;
    EtwpAdjustBuffersWorkItem.Parameter = &EtwpBufferAdjustmentActive;
    EtwpBufferAdjustmentCount = 8;
    KiInitializeTimer2((__int64)&EtwpMemInfoTimer, (__int64)EtwpLogMemInfoTimerCallback, 0LL, 8);
    EtwpInitializeProviderTraits();
    if ( !ExRegisterCallback((PCALLBACK_OBJECT)ExCbPowerState, (PCALLBACK_FUNCTION)EtwpPowerStateCallback, 0LL) )
      goto LABEL_24;
    EtwpLoggerSaveEvent = 0LL;
    if ( (int)KsrGetFirmwareInformation(&v22) >= 0 )
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
    TraceLoggingRegisterEx(&stru_140401308, 0LL, 0LL);
    EtwRegister(&PsProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)1, &EtwpPsProvRegHandle);
    TlgRegisterAggregateProviderEx(
      &stru_1404012D0,
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
    ZwUpdateWnfStateData(&WNF_ETW_SUBSYSTEM_INITIALIZED, 0LL, 0, 0LL, 0LL, 0, 0);
    EtwpTraceSystemInitialization();
  }
}
