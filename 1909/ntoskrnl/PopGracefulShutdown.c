/*
 * XREFs of PopGracefulShutdown @ 0x1405AC850
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeAttachProcess @ 0x140130690 (KeAttachProcess.c)
 *     PopDiagTraceEventNoPayload @ 0x140138684 (PopDiagTraceEventNoPayload.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140171D10 (CcWaitForCurrentLazyWriterActivity.c)
 *     IoAddTriageDumpDataBlock @ 0x14019BF38 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     VfShutdownScheduleWatchdog @ 0x1403288C8 (VfShutdownScheduleWatchdog.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PopSetDevicesSystemState @ 0x140596D38 (PopSetDevicesSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x14059BDF4 (PopBuildDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x1405A7968 (IoShutdownSystem.c)
 *     MmShutdownSystem @ 0x1405ABEB0 (MmShutdownSystem.c)
 *     PopShutdownSystem @ 0x1405ADEE4 (PopShutdownSystem.c)
 *     ExShutdownSystem @ 0x1405AE3A8 (ExShutdownSystem.c)
 *     EtwShutdown @ 0x140726708 (EtwShutdown.c)
 *     PopTransitionCheckpoint @ 0x140727ABC (PopTransitionCheckpoint.c)
 *     EtwWriteEndScenario @ 0x140749950 (EtwWriteEndScenario.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14076910C (PnpWaitForEmptyDeviceActionQueue.c)
 *     CmShutdownSystem @ 0x140826AC4 (CmShutdownSystem.c)
 *     MmZeroPageFileAtShutdown @ 0x140887514 (MmZeroPageFileAtShutdown.c)
 *     ObShutdownSystem @ 0x14089CFBC (ObShutdownSystem.c)
 *     PopSetCleanShutdownMarker @ 0x1408A1FB8 (PopSetCleanShutdownMarker.c)
 *     PsShutdownSystem @ 0x1408C8D44 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x1408C9134 (PsWaitForAllProcesses.c)
 */

void __noreturn PopGracefulShutdown()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  PVOID *v2; // rbx
  struct _KPROCESS *v3; // rcx

  PopTransitionCheckpoint(10LL, 1LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_GRACEFULSHUTDOWN_START);
  *(_QWORD *)(*(_QWORD *)&qword_140442FF8 + 16LL) = KeGetCurrentThread();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_START);
  MmZeroPageFileAtShutdown();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_STOP);
  if ( !*(_QWORD *)&qword_140442FF0 )
    off_140426828[0]();
  VfShutdownScheduleWatchdog();
  if ( PopShutdownCleanly )
  {
    PsShutdownSystem();
    KeSetEvent(&PopShutdownEvent, 0, 0);
    ExAcquireFastMutex(&PopShutdownListMutex);
    PopShutdownListAvailable = 0;
    KeReleaseGuardedMutex(&PopShutdownListMutex);
    while ( 1 )
    {
      v1 = PopShutdownQueue;
      if ( (__int64 *)PopShutdownQueue == &PopShutdownQueue )
        break;
      if ( *(__int64 **)(PopShutdownQueue + 8) != &PopShutdownQueue
        || (v0 = *(_QWORD *)PopShutdownQueue, *(_QWORD *)(*(_QWORD *)PopShutdownQueue + 8LL) != PopShutdownQueue) )
      {
        __fastfail(3u);
      }
      PopShutdownQueue = *(_QWORD *)PopShutdownQueue;
      *(_QWORD *)(v0 + 8) = &PopShutdownQueue;
      (*(void (__fastcall **)(_QWORD))(v1 + 16))(*(_QWORD *)(v1 + 24));
    }
    while ( 1 )
    {
      v2 = (PVOID *)PopShutdownThreadList;
      if ( !PopShutdownThreadList )
        break;
      PopShutdownThreadList = *(PVOID *)PopShutdownThreadList;
      KeWaitForSingleObject(v2[1], Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(v2[1], 0x64536F50u);
      ExFreePoolWithTag(v2, 0);
    }
  }
  TmShutdownSystem();
  CmShutdownSystem(0LL);
  ExShutdownSystem(0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWNSYSTEM_START);
  IoShutdownSystem(0);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWNSYSTEM_STOP);
  if ( PopShutdownCleanly )
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_START);
    PsWaitForAllProcesses();
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_STOP);
  }
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_CMSHUTDOWNSYSTEM_START);
  CmShutdownSystem(1LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_CMSHUTDOWNSYSTEM_STOP);
  if ( PopDiagHandleRegistered )
    EtwWriteEndScenario(
      PopDiagHandle,
      &POP_ETW_EVENT_GRACEFULSHUTDOWN_STOP,
      &PopShutdownDiagnosticsScenarioGuid,
      0,
      0LL);
  EtwShutdown(0LL);
  ExShutdownSystem(1LL);
  MmShutdownSystem(0);
  PopSetCleanShutdownMarker();
  PopTransitionCheckpoint(10LL, 2LL);
  PnpWaitForEmptyDeviceActionQueue();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_START);
  IoShutdownSystem(1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_STOP);
  CcWaitForCurrentLazyWriterActivity();
  if ( *(_QWORD *)&qword_140442FF0 )
  {
    v3 = *(struct _KPROCESS **)(*(_QWORD *)&qword_140442FF0 + 8LL);
    if ( v3 )
      KeAttachProcess(v3);
    IoAddTriageDumpDataBlock(qword_140442FF0, (PVOID)0x48);
    KeBugCheckEx(
      *(_DWORD *)(*(_QWORD *)&qword_140442FF0 + 32LL),
      *(_QWORD *)(*(_QWORD *)&qword_140442FF0 + 40LL),
      *(_QWORD *)(*(_QWORD *)&qword_140442FF0 + 48LL),
      *(_QWORD *)(*(_QWORD *)&qword_140442FF0 + 56LL),
      *(_QWORD *)(*(_QWORD *)&qword_140442FF0 + 64LL));
  }
  PopBootStatCheckpointAvailable = 0;
  *(_DWORD *)(*(_QWORD *)&qword_140442FF8 + 448LL) = 0;
  PopBuildDeviceNotifyList((void *)(*(_QWORD *)&qword_140442FF8 + 48LL));
  PopSetDevicesSystemState();
  ExShutdownSystem(2LL);
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(2LL);
  MmShutdownSystem(2);
  PopShutdownSystem((unsigned int)qword_140442FC4);
}
