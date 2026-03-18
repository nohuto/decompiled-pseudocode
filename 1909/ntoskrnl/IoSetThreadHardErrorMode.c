/*
 * XREFs of IoSetThreadHardErrorMode @ 0x1400EA080
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011C180 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140175DE0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     SmKmEtwAppendObjectName @ 0x140324694 (SmKmEtwAppendObjectName.c)
 *     FsRtlSetFileSize @ 0x140625490 (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x1406507C0 (FsRtlGetFileSize.c)
 *     CmpCmdHiveOpen @ 0x14068367C (CmpCmdHiveOpen.c)
 *     EtwTraceProcess @ 0x1406838A0 (EtwTraceProcess.c)
 *     ObKillProcess @ 0x140684898 (ObKillProcess.c)
 *     CmpDoFileSetSizeEx @ 0x14068C5C0 (CmpDoFileSetSizeEx.c)
 *     CmpCmdHiveClose @ 0x1406B9CA8 (CmpCmdHiveClose.c)
 *     EtwpKernelTraceRundown @ 0x14070999C (EtwpKernelTraceRundown.c)
 *     SmKmFileInfoCleanup @ 0x1408E916C (SmKmFileInfoCleanup.c)
 *     SmKmFileInfoGetPath @ 0x1408E9390 (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x1408E94D8 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x1408E9EAC (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x1408EA35C (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x1408EA60C (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1408EA6AC (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x1408EABA8 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x1408EAD40 (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x1408EAF6C (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x1408FBFB8 (EtwpPsProvCaptureState.c)
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
