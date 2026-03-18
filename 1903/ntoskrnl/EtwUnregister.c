/*
 * XREFs of EtwUnregister @ 0x140748060
 * Callers:
 *     BapdWriteEtwEvents @ 0x1401820AC (BapdWriteEtwEvents.c)
 *     HvlPhase2Initialize @ 0x14019D5EC (HvlPhase2Initialize.c)
 *     PsDispatchIumService @ 0x1403086B4 (PsDispatchIumService.c)
 *     BapdRecordFirmwareBootStats @ 0x14059ECD0 (BapdRecordFirmwareBootStats.c)
 *     PopBootLoaderTraceProcess @ 0x1407244F0 (PopBootLoaderTraceProcess.c)
 *     WmipLegacyEtwWorker @ 0x14077C7D0 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x14077C92C (WmipProcessLegacyEtwRegister.c)
 *     WmipGECleanup @ 0x140788960 (WmipGECleanup.c)
 *     TraceLoggingUnregister @ 0x14084122C (TraceLoggingUnregister.c)
 *     VrpRegistryUnload @ 0x140841A60 (VrpRegistryUnload.c)
 *     DbgkpStartSystemErrorHandler @ 0x14084AC8C (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x14084B148 (DbgkCaptureLiveDump.c)
 *     PsShutdownSystem @ 0x1408C9464 (PsShutdownSystem.c)
 *     sub_14090C654 @ 0x14090C654 (sub_14090C654.c)
 *     sub_14090CB44 @ 0x14090CB44 (sub_14090CB44.c)
 *     BapdpRecordIumStatus @ 0x140A0A228 (BapdpRecordIumStatus.c)
 *     PerfDiagInitialize @ 0x140A15DA0 (PerfDiagInitialize.c)
 *     VslpIumInitializeTelemetry @ 0x140A218E0 (VslpIumInitializeTelemetry.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405D408C (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405D4670 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1408F7B24 (EtwpEventWriteTemplateSessAndProv.c)
 */

NTSTATUS __stdcall EtwUnregister(REGHANDLE RegHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *v11; // rcx

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
  v3 = KeGetCurrentThread();
  --v3->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(RegHandle + 32) + 408LL, 0LL);
  *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 416LL) = KeGetCurrentThread();
  v4 = *(_QWORD *)RegHandle;
  if ( *(_QWORD *)(*(_QWORD *)RegHandle + 8LL) != RegHandle
    || (v5 = *(_QWORD **)(RegHandle + 8), *v5 != RegHandle)
    || (*v5 = v4, *(_QWORD *)(v4 + 8) = v5, v6 = *(_QWORD *)(RegHandle + 16), *(_QWORD *)(v6 + 8) != RegHandle + 16)
    || (v7 = *(_QWORD **)(RegHandle + 24), *v7 != RegHandle + 16) )
  {
    __fastfail(3u);
  }
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 416LL) = 0LL;
  ExReleasePushLockEx(*(_QWORD *)(RegHandle + 32) + 408LL, 0LL);
  KeLeaveCriticalRegion();
  v8 = *(_QWORD *)(RegHandle + 40);
  if ( v8 )
  {
    *(_QWORD *)(v8 + 416) = 0LL;
    ExReleasePushLockEx(*(_QWORD *)(RegHandle + 40) + 408LL, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_UNREGISTERS) )
    EtwpEventWriteTemplateSessAndProv(
      v9,
      &ETW_EVENT_PROVIDER_UNREGISTERS,
      v10,
      1LL,
      0LL,
      *(_QWORD *)(RegHandle + 32) + 40LL);
  EtwpUnreferenceGuidEntry(*(__int64 **)(RegHandle + 32));
  v11 = *(__int64 **)(RegHandle + 40);
  if ( v11 )
    EtwpUnreferenceGuidEntry(v11);
  EtwpReleaseProviderTraitsReference(RegHandle);
  ExFreePoolWithTag((PVOID)RegHandle, 0);
  return 0;
}
