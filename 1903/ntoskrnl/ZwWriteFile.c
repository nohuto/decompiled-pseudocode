/*
 * XREFs of ZwWriteFile @ 0x1401C01D0
 * Callers:
 *     CmpDoFileWrite @ 0x1406362EC (CmpDoFileWrite.c)
 *     EtwpFinalizeHeader @ 0x1406B827C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406B8B08 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeSaveState @ 0x1406B9D6C (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeSaveBuffer @ 0x1406B9E14 (EtwpRealtimeSaveBuffer.c)
 *     EtwpFlushBufferToLogfile @ 0x1406B9FF0 (EtwpFlushBufferToLogfile.c)
 *     RtlpGetSetBootStatusData @ 0x140741C5C (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x14077ED74 (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x14084CA74 (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x14084CBE8 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x1408536A0 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x14085A6A8 (IopLiveDumpWriteBuffer.c)
 *     RtlRestoreBootStatusDefaults @ 0x1408D3CF8 (RtlRestoreBootStatusDefaults.c)
 *     SmKmStoreFileWriteHeader @ 0x1408EB438 (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x140907A28 (EtwpSavePersistedLogger.c)
 *     EtwpWriteBufferCompressed @ 0x140908468 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x140908628 (EtwpWriteRemainingCompressedData.c)
 *     CMFFlushHitsFile @ 0x140915E7C (CMFFlushHitsFile.c)
 *     WheapWriteTriageDump @ 0x14091AA7C (WheapWriteTriageDump.c)
 *     KdpWriteFileCallback @ 0x1409545C0 (KdpWriteFileCallback.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A09B80 (BapdpProcessVsmKeyBlobs.c)
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
  return KiServiceInternal(FileHandle);
}
