/*
 * XREFs of ZwQueryInformationFile @ 0x1401B8510
 * Callers:
 *     RtlFileMapMapView @ 0x140178D58 (RtlFileMapMapView.c)
 *     KsepShimDbChanged @ 0x14017907C (KsepShimDbChanged.c)
 *     CmpAdjustFileCFSafety @ 0x1401B33B4 (CmpAdjustFileCFSafety.c)
 *     DbgkCaptureLiveKernelDump @ 0x14026E15C (DbgkCaptureLiveKernelDump.c)
 *     BiLogFileOwnerProcess @ 0x1403275E0 (BiLogFileOwnerProcess.c)
 *     CmpGetFileSize @ 0x1405A7250 (CmpGetFileSize.c)
 *     CmpCmdHiveClose @ 0x1405B0A08 (CmpCmdHiveClose.c)
 *     CmpInitHiveFromFile @ 0x1405B4D68 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x1405B5330 (CmpOpenHiveFile.c)
 *     AslFileMappingCreate @ 0x14067F63C (AslFileMappingCreate.c)
 *     EtwpUpdateFileHeader @ 0x14069AFDC (EtwpUpdateFileHeader.c)
 *     PopValidateHiberFileSize @ 0x1406E10D4 (PopValidateHiberFileSize.c)
 *     PopCreateHiberFile @ 0x140747900 (PopCreateHiberFile.c)
 *     EtwpRealtimeRestoreState @ 0x14075AB44 (EtwpRealtimeRestoreState.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x1408216F0 (IopLiveDumpValidateDumpFileHandle.c)
 *     IopFileUtilClearAttributes @ 0x14083DF28 (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x140865988 (PfpQueryFileExtentsRequest.c)
 *     PopZeroHiberFile @ 0x14086D030 (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x1408AE8B0 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x1408AF6B0 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x1408DA194 (CMFGetFileSizeEx.c)
 *     EmInitSystem @ 0x1409BE7E0 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
