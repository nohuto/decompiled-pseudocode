/*
 * XREFs of IoSetThreadHardErrorMode @ 0x1400EED30
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011E2C0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14015FC10 (FsRtlGetVirtualDiskNestingLevel.c)
 *     SmKmEtwAppendObjectName @ 0x1403070BC (SmKmEtwAppendObjectName.c)
 *     CmpCmdHiveClose @ 0x1405AFA08 (CmpCmdHiveClose.c)
 *     CmpCmdHiveOpen @ 0x1405B494C (CmpCmdHiveOpen.c)
 *     FsRtlGetFileSize @ 0x14061B4A0 (FsRtlGetFileSize.c)
 *     ObKillProcess @ 0x14066C4DC (ObKillProcess.c)
 *     EtwTraceProcess @ 0x14066C548 (EtwTraceProcess.c)
 *     CmpDoFileSetSizeEx @ 0x1406B8960 (CmpDoFileSetSizeEx.c)
 *     FsRtlSetFileSize @ 0x1406CAA80 (FsRtlSetFileSize.c)
 *     EtwpKernelTraceRundown @ 0x140726194 (EtwpKernelTraceRundown.c)
 *     SmKmFileInfoCleanup @ 0x1408AC964 (SmKmFileInfoCleanup.c)
 *     SmKmFileInfoGetPath @ 0x1408ACB88 (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x1408ACCBC (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x1408AD670 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x1408ADAFC (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x1408ADD78 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1408ADE08 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x1408AE300 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x1408AE470 (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x1408AE684 (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x1408BF820 (EtwpPsProvCaptureState.c)
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
