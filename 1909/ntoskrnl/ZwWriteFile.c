/*
 * XREFs of ZwWriteFile @ 0x1401C0D50
 * Callers:
 *     CmpDoFileWrite @ 0x14063954C (CmpDoFileWrite.c)
 *     EtwpFinalizeHeader @ 0x1406AD96C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406AE298 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeSaveState @ 0x1406AF45C (EtwpRealtimeSaveState.c)
 *     EtwpFlushBufferToLogfile @ 0x1406AF5A8 (EtwpFlushBufferToLogfile.c)
 *     EtwpRealtimeSaveBuffer @ 0x1406EB254 (EtwpRealtimeSaveBuffer.c)
 *     RtlpGetSetBootStatusData @ 0x140743B5C (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x140781794 (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x14084C174 (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x14084C2E8 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x140852DA0 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x140859DA8 (IopLiveDumpWriteBuffer.c)
 *     RtlRestoreBootStatusDefaults @ 0x1408D35F8 (RtlRestoreBootStatusDefaults.c)
 *     SmKmStoreFileWriteHeader @ 0x1408EAD40 (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x140907458 (EtwpSavePersistedLogger.c)
 *     EtwpWriteBufferCompressed @ 0x140907E98 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x140908058 (EtwpWriteRemainingCompressedData.c)
 *     CMFFlushHitsFile @ 0x1409158DC (CMFFlushHitsFile.c)
 *     WheapWriteTriageDump @ 0x14091A4DC (WheapWriteTriageDump.c)
 *     KdpWriteFileCallback @ 0x1409545C0 (KdpWriteFileCallback.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A0A0AC (BapdpProcessVsmKeyBlobs.c)
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
