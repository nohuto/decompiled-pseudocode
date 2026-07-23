/*
 * XREFs of ZwReadFile @ 0x1401B83B0
 * Callers:
 *     CmpDoFileRead @ 0x1401343E4 (CmpDoFileRead.c)
 *     RtlInitializeBootStatDataCache @ 0x14018DD88 (RtlInitializeBootStatDataCache.c)
 *     EtwpUpdateFileHeader @ 0x14069AFDC (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x14069B5BC (EtwpFinalizeHeader.c)
 *     RtlpGetSetBootStatusData @ 0x140719BB4 (RtlpGetSetBootStatusData.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x140746404 (RtlInitializeBootStatusDataBlackBox.c)
 *     EtwpRealtimeRestoreBuffer @ 0x140751A58 (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeRestoreState @ 0x14075AB44 (EtwpRealtimeRestoreState.c)
 *     RtlCheckBootStatusIntegrity @ 0x140896E48 (RtlCheckBootStatusIntegrity.c)
 *     CMFSystemThreadRoutine @ 0x1408DA760 (CMFSystemThreadRoutine.c)
 *     EmInitSystem @ 0x1409BE7E0 (EmInitSystem.c)
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
