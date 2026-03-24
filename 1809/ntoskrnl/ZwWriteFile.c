/*
 * XREFs of ZwWriteFile @ 0x1401B8290
 * Callers:
 *     CmpDoFileWrite @ 0x1405B3A60 (CmpDoFileWrite.c)
 *     EtwpFlushBufferToLogfile @ 0x1405C0784 (EtwpFlushBufferToLogfile.c)
 *     EtwpUpdateFileHeader @ 0x140699E1C (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x14069A3FC (EtwpFinalizeHeader.c)
 *     EtwpRealtimeSaveState @ 0x1406D0004 (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeSaveBuffer @ 0x1406DAAD8 (EtwpRealtimeSaveBuffer.c)
 *     RtlpGetSetBootStatusData @ 0x140718914 (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x140759954 (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x140813034 (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x140813188 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x140819440 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x140820618 (IopLiveDumpWriteBuffer.c)
 *     RtlRestoreBootStatusDefaults @ 0x140895D98 (RtlRestoreBootStatusDefaults.c)
 *     SmKmStoreFileWriteHeader @ 0x1408AE450 (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x1408CA4DC (EtwpSavePersistedLogger.c)
 *     CMFFlushHitsFile @ 0x1408D8BE8 (CMFFlushHitsFile.c)
 *     WheapWriteTriageDump @ 0x1408DC7E8 (WheapWriteTriageDump.c)
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
