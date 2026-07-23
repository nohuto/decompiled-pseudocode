/*
 * XREFs of ZwWriteFile @ 0x1401B83F0
 * Callers:
 *     CmpDoFileWrite @ 0x1405B4A60 (CmpDoFileWrite.c)
 *     EtwpFlushBufferToLogfile @ 0x1405C1784 (EtwpFlushBufferToLogfile.c)
 *     EtwpUpdateFileHeader @ 0x14069AFDC (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x14069B5BC (EtwpFinalizeHeader.c)
 *     EtwpRealtimeSaveState @ 0x1406D12A4 (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeSaveBuffer @ 0x1406DBD78 (EtwpRealtimeSaveBuffer.c)
 *     RtlpGetSetBootStatusData @ 0x140719BB4 (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x14075AB44 (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x140814234 (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x140814388 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x14081A640 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x140821818 (IopLiveDumpWriteBuffer.c)
 *     RtlRestoreBootStatusDefaults @ 0x140896FF8 (RtlRestoreBootStatusDefaults.c)
 *     SmKmStoreFileWriteHeader @ 0x1408AF6B0 (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x1408CB79C (EtwpSavePersistedLogger.c)
 *     CMFFlushHitsFile @ 0x1408D9EA8 (CMFFlushHitsFile.c)
 *     WheapWriteTriageDump @ 0x1408DDAA8 (WheapWriteTriageDump.c)
 *     KdPullRemoteFile @ 0x14091A67C (KdPullRemoteFile.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1409D22A0 (BapdpProcessVsmKeyBlobs.c)
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
