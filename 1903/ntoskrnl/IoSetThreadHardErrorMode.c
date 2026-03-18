/*
 * XREFs of IoSetThreadHardErrorMode @ 0x1400E50E0
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401049B0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1401756B0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     SmKmEtwAppendObjectName @ 0x140324C44 (SmKmEtwAppendObjectName.c)
 *     CmpCmdHiveClose @ 0x14063E098 (CmpCmdHiveClose.c)
 *     CmpDoFileSetSizeEx @ 0x140662D3C (CmpDoFileSetSizeEx.c)
 *     FsRtlGetFileSize @ 0x14068A6A0 (FsRtlGetFileSize.c)
 *     CmpCmdHiveOpen @ 0x14069010C (CmpCmdHiveOpen.c)
 *     EtwTraceProcess @ 0x140690330 (EtwTraceProcess.c)
 *     ObKillProcess @ 0x140691328 (ObKillProcess.c)
 *     FsRtlSetFileSize @ 0x14069CFA0 (FsRtlSetFileSize.c)
 *     EtwpKernelTraceRundown @ 0x140707BBC (EtwpKernelTraceRundown.c)
 *     SmKmFileInfoCleanup @ 0x1408E9864 (SmKmFileInfoCleanup.c)
 *     SmKmFileInfoGetPath @ 0x1408E9A88 (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x1408E9BD0 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x1408EA5A4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x1408EAA54 (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x1408EAD04 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1408EADA4 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x1408EB2A0 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x1408EB438 (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x1408EB664 (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x1408FC5D8 (EtwpPsProvCaptureState.c)
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
