/*
 * XREFs of EtwUnregister @ 0x140749F60
 * Callers:
 *     BapdWriteEtwEvents @ 0x14018279C (BapdWriteEtwEvents.c)
 *     HvlPhase2Initialize @ 0x14019DD6C (HvlPhase2Initialize.c)
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 *     BapdRecordFirmwareBootStats @ 0x14059ECB0 (BapdRecordFirmwareBootStats.c)
 *     PopBootLoaderTraceProcess @ 0x140726390 (PopBootLoaderTraceProcess.c)
 *     WmipLegacyEtwWorker @ 0x14077F0F0 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x14077F24C (WmipProcessLegacyEtwRegister.c)
 *     WmipGECleanup @ 0x14078ADC0 (WmipGECleanup.c)
 *     TraceLoggingUnregister @ 0x14084088C (TraceLoggingUnregister.c)
 *     VrpRegistryUnload @ 0x1408410C0 (VrpRegistryUnload.c)
 *     DbgkpStartSystemErrorHandler @ 0x14084A38C (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x14084A848 (DbgkCaptureLiveDump.c)
 *     PsShutdownSystem @ 0x1408C8D44 (PsShutdownSystem.c)
 *     sub_14090C0B4 @ 0x14090C0B4 (sub_14090C0B4.c)
 *     sub_14090C5A4 @ 0x14090C5A4 (sub_14090C5A4.c)
 *     BapdpRecordIumStatus @ 0x140A0A754 (BapdpRecordIumStatus.c)
 *     PerfDiagInitialize @ 0x140A15F80 (PerfDiagInitialize.c)
 *     VslpIumInitializeTelemetry @ 0x140A219C0 (VslpIumInitializeTelemetry.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405D458C (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405D4B70 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1408F7494 (EtwpEventWriteTemplateSessAndProv.c)
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
