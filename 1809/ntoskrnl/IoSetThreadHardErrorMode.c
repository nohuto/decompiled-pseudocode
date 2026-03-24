/*
 * XREFs of IoSetThreadHardErrorMode @ 0x1400EED50
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011E2E0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14015FC30 (FsRtlGetVirtualDiskNestingLevel.c)
 *     SmKmEtwAppendObjectName @ 0x1403071BC (SmKmEtwAppendObjectName.c)
 *     CmpCmdHiveClose @ 0x1405AFA08 (CmpCmdHiveClose.c)
 *     CmpCmdHiveOpen @ 0x1405B494C (CmpCmdHiveOpen.c)
 *     FsRtlGetFileSize @ 0x14061B4A0 (FsRtlGetFileSize.c)
 *     ObKillProcess @ 0x14066C4BC (ObKillProcess.c)
 *     EtwTraceProcess @ 0x14066C528 (EtwTraceProcess.c)
 *     CmpDoFileSetSizeEx @ 0x1406B8940 (CmpDoFileSetSizeEx.c)
 *     FsRtlSetFileSize @ 0x1406CAA60 (FsRtlSetFileSize.c)
 *     EtwpKernelTraceRundown @ 0x140726174 (EtwpKernelTraceRundown.c)
 *     SmKmFileInfoCleanup @ 0x1408AC944 (SmKmFileInfoCleanup.c)
 *     SmKmFileInfoGetPath @ 0x1408ACB68 (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x1408ACC9C (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x1408AD650 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x1408ADADC (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x1408ADD58 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1408ADDE8 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x1408AE2E0 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x1408AE450 (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x1408AE664 (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x1408BF800 (EtwpPsProvCaptureState.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoSetThreadHardErrorMode(BOOLEAN EnableHardErrors)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int8 v2; // cf

  CurrentThread = KeGetCurrentThread();
  if ( EnableHardErrors )
    v2 = _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  else
    v2 = _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  return v2 == 0;
}
