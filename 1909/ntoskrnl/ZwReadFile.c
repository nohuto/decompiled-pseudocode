/*
 * XREFs of ZwReadFile @ 0x1401C0D10
 * Callers:
 *     CmpDoFileRead @ 0x140134B54 (CmpDoFileRead.c)
 *     RtlInitializeBootStatDataCache @ 0x14019861C (RtlInitializeBootStatDataCache.c)
 *     EtwpRealtimeRestoreBuffer @ 0x1406AD808 (EtwpRealtimeRestoreBuffer.c)
 *     EtwpFinalizeHeader @ 0x1406AD96C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406AE298 (EtwpUpdateFileHeader.c)
 *     RtlpGetSetBootStatusData @ 0x140743B5C (RtlpGetSetBootStatusData.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x140759A34 (RtlInitializeBootStatusDataBlackBox.c)
 *     EtwpRealtimeRestoreState @ 0x140781794 (EtwpRealtimeRestoreState.c)
 *     RtlCheckBootStatusIntegrity @ 0x1408D3438 (RtlCheckBootStatusIntegrity.c)
 *     CMFSystemThreadRoutine @ 0x140916210 (CMFSystemThreadRoutine.c)
 *     EmInitSystem @ 0x1409F93E0 (EmInitSystem.c)
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
  return KiServiceInternal(FileHandle);
}
