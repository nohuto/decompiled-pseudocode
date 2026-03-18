/*
 * XREFs of ZwWriteFile @ 0x1401B8270
 * Callers:
 *     CmpDoFileWrite @ 0x1405B3A60 (CmpDoFileWrite.c)
 *     EtwpFlushBufferToLogfile @ 0x1405C0784 (EtwpFlushBufferToLogfile.c)
 *     EtwpUpdateFileHeader @ 0x140699E3C (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x14069A41C (EtwpFinalizeHeader.c)
 *     EtwpRealtimeSaveState @ 0x1406D0024 (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeSaveBuffer @ 0x1406DAAF8 (EtwpRealtimeSaveBuffer.c)
 *     RtlpGetSetBootStatusData @ 0x140718934 (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x140759974 (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x140813054 (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x1408131A8 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x140819460 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x140820638 (IopLiveDumpWriteBuffer.c)
 *     RtlRestoreBootStatusDefaults @ 0x140895DB8 (RtlRestoreBootStatusDefaults.c)
 *     SmKmStoreFileWriteHeader @ 0x1408AE470 (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x1408CA4FC (EtwpSavePersistedLogger.c)
 *     CMFFlushHitsFile @ 0x1408D8C08 (CMFFlushHitsFile.c)
 *     WheapWriteTriageDump @ 0x1408DC808 (WheapWriteTriageDump.c)
 *     KdPullRemoteFile @ 0x14091967C (KdPullRemoteFile.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1409D12A0 (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWriteFile(
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
