/*
 * XREFs of EtwUnregister @ 0x140707390
 * Callers:
 *     BapdWriteEtwEvents @ 0x1401786E8 (BapdWriteEtwEvents.c)
 *     HvlPhase2Initialize @ 0x1401932E4 (HvlPhase2Initialize.c)
 *     PsDispatchIumService @ 0x1402EAA94 (PsDispatchIumService.c)
 *     BapdRecordFirmwareBootStats @ 0x14056F2A0 (BapdRecordFirmwareBootStats.c)
 *     PopBootLoaderTraceProcess @ 0x1406DCF88 (PopBootLoaderTraceProcess.c)
 *     WmipLegacyEtwWorker @ 0x140756480 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x1407565DC (WmipProcessLegacyEtwRegister.c)
 *     WmipGECleanup @ 0x140763640 (WmipGECleanup.c)
 *     TraceLoggingUnregister @ 0x1408079A8 (TraceLoggingUnregister.c)
 *     DbgkpStartSystemErrorHandler @ 0x1408112C4 (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x140811740 (DbgkCaptureLiveDump.c)
 *     sub_1408CF024 @ 0x1408CF024 (sub_1408CF024.c)
 *     sub_1408CF3E4 @ 0x1408CF3E4 (sub_1408CF3E4.c)
 *     PerfDiagInitialize @ 0x1409D0A80 (PerfDiagInitialize.c)
 *     BapdpRecordIumStatus @ 0x1409D1958 (BapdpRecordIumStatus.c)
 *     VslpIumInitializeTelemetry @ 0x1409DE60C (VslpIumInitializeTelemetry.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405C4098 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405C4680 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1408BAFB0 (EtwpEventWriteTemplateSessAndProv.c)
 */

NTSTATUS __stdcall EtwUnregister(REGHANDLE RegHandle)
{
  struct _KTHREAD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  volatile signed __int64 *v10; // rcx
  struct _KTHREAD *CurrentThread; // rax

  if ( !RegHandle )
    return -1073741816;
  if ( (*(_BYTE *)(RegHandle + 98) & 1) == 0 )
    KeBugCheckEx(0x11Du, 4uLL, RegHandle, 1uLL, 0LL);
  if ( *(_QWORD *)(RegHandle + 40) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(RegHandle + 40) + 408LL, 0LL);
    *(_QWORD *)(*(_QWORD *)(RegHandle + 40) + 416LL) = KeGetCurrentThread();
  }
  v2 = KeGetCurrentThread();
  --v2->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(RegHandle + 32) + 408LL, 0LL);
  *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 416LL) = KeGetCurrentThread();
  v3 = *(_QWORD *)RegHandle;
  if ( *(_QWORD *)(*(_QWORD *)RegHandle + 8LL) != RegHandle
    || (v4 = *(_QWORD **)(RegHandle + 8), *v4 != RegHandle)
    || (*v4 = v3, *(_QWORD *)(v3 + 8) = v4, v5 = *(_QWORD *)(RegHandle + 16), *(_QWORD *)(v5 + 8) != RegHandle + 16)
    || (v6 = *(_QWORD **)(RegHandle + 24), *v6 != RegHandle + 16) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 416LL) = 0LL;
  ExReleasePushLockEx(*(_QWORD *)(RegHandle + 32) + 408LL, 0LL);
  KeLeaveCriticalRegion();
  v7 = *(_QWORD *)(RegHandle + 40);
  if ( v7 )
  {
    *(_QWORD *)(v7 + 416) = 0LL;
    ExReleasePushLockEx(*(_QWORD *)(RegHandle + 40) + 408LL, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_UNREGISTERS) )
    EtwpEventWriteTemplateSessAndProv(
      v8,
      &ETW_EVENT_PROVIDER_UNREGISTERS,
      v9,
      1LL,
      0LL,
      *(_QWORD *)(RegHandle + 32) + 40LL);
  EtwpUnreferenceGuidEntry(*(volatile signed __int64 **)(RegHandle + 32));
  v10 = *(volatile signed __int64 **)(RegHandle + 40);
  if ( v10 )
    EtwpUnreferenceGuidEntry(v10);
  EtwpReleaseProviderTraitsReference(RegHandle);
  ExFreePoolWithTag((PVOID)RegHandle, 0);
  return 0;
}
