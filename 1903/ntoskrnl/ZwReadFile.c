/*
 * XREFs of ZwReadFile @ 0x1401C0190
 * Callers:
 *     CmpDoFileRead @ 0x140134250 (CmpDoFileRead.c)
 *     RtlInitializeBootStatDataCache @ 0x140197FBC (RtlInitializeBootStatDataCache.c)
 *     EtwpRealtimeRestoreBuffer @ 0x1406B8118 (EtwpRealtimeRestoreBuffer.c)
 *     EtwpFinalizeHeader @ 0x1406B827C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406B8B08 (EtwpUpdateFileHeader.c)
 *     RtlpGetSetBootStatusData @ 0x140741C5C (RtlpGetSetBootStatusData.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x14076A064 (RtlInitializeBootStatusDataBlackBox.c)
 *     EtwpRealtimeRestoreState @ 0x14077ED74 (EtwpRealtimeRestoreState.c)
 *     RtlCheckBootStatusIntegrity @ 0x1408D3B38 (RtlCheckBootStatusIntegrity.c)
 *     CMFSystemThreadRoutine @ 0x1409167B0 (CMFSystemThreadRoutine.c)
 *     EmInitSystem @ 0x1409F94D0 (EmInitSystem.c)
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
