/*
 * XREFs of ZwReadFile @ 0x1401B8230
 * Callers:
 *     CmpDoFileRead @ 0x1401342F4 (CmpDoFileRead.c)
 *     RtlInitializeBootStatDataCache @ 0x14018DC28 (RtlInitializeBootStatDataCache.c)
 *     EtwpUpdateFileHeader @ 0x140699E3C (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x14069A41C (EtwpFinalizeHeader.c)
 *     RtlpGetSetBootStatusData @ 0x140718934 (RtlpGetSetBootStatusData.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x140745234 (RtlInitializeBootStatusDataBlackBox.c)
 *     EtwpRealtimeRestoreBuffer @ 0x140750888 (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeRestoreState @ 0x140759974 (EtwpRealtimeRestoreState.c)
 *     RtlCheckBootStatusIntegrity @ 0x140895C08 (RtlCheckBootStatusIntegrity.c)
 *     CMFSystemThreadRoutine @ 0x1408D94C0 (CMFSystemThreadRoutine.c)
 *     EmInitSystem @ 0x1409BD7E0 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReadFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, Event, ApcRoutine);
}
