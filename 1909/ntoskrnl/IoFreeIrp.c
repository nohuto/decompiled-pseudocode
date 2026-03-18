/*
 * XREFs of IoFreeIrp @ 0x140043F40
 * Callers:
 *     IoRemoveIoCompletion @ 0x1400448E0 (IoRemoveIoCompletion.c)
 *     IopCompleteRequest @ 0x140065750 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x140066B60 (IopfCompleteRequest.c)
 *     IopBuildDeviceIoControlRequest @ 0x14009AF50 (IopBuildDeviceIoControlRequest.c)
 *     IopDropIrp @ 0x1400FEDA0 (IopDropIrp.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140127C80 (IopBuildAsynchronousFsdRequest.c)
 *     IopCancelIrpsInFileObjectList @ 0x140128000 (IopCancelIrpsInFileObjectList.c)
 *     IopCompletePageWrite @ 0x14013BEC0 (IopCompletePageWrite.c)
 *     PnpDeviceCompletionRoutine @ 0x140145B60 (PnpDeviceCompletionRoutine.c)
 *     PopFreeIrp @ 0x140172750 (PopFreeIrp.c)
 *     PopFxDestroyDeviceDpm @ 0x14019CF54 (PopFxDestroyDeviceDpm.c)
 *     FsRtlGetFileExtents @ 0x140281E90 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x1402A1250 (IopDeviceEjectComplete.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1402A12B0 (PnpDiagnosticCompletionRoutine.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140326340 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     IopCloseFile @ 0x1405D8DF0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1405F1150 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     FsRtlSetKernelEaFile @ 0x1406255B0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140625750 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140625A60 (FsRtlQueryKernelEaFile.c)
 *     CmpFileFlushAndPurge @ 0x140690A7C (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x140690C18 (CmpGetVolumeClusterSize.c)
 *     IopFreeCompletionListPackets @ 0x1406B1550 (IopFreeCompletionListPackets.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406ECE60 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1406ECF80 (FsRtlMdlReadEx.c)
 *     IopUserRundown @ 0x1406EDC90 (IopUserRundown.c)
 *     WmipSendWmiIrp @ 0x140713718 (WmipSendWmiIrp.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x14071DD8C (WmipSendWmiIrpToTraceDeviceList.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14072F0B0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     WmipSetTraceNotify @ 0x14073BF50 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x1407481D0 (WmipGetFilePDO.c)
 *     PopConnectToPolicyDevice @ 0x14074E044 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x14075F5E8 (PopAcquireCoolingInterface.c)
 *     FsRtlQueryInformationFile @ 0x14084E8F0 (FsRtlQueryInformationFile.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14084FE80 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IopExceptionCleanup @ 0x1408534A8 (IopExceptionCleanup.c)
 *     IoCancelFileOpen @ 0x140855520 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x14087527C (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x1408B305C (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x1408E916C (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x1408E94D8 (SmKmIsVolumeIoPossible.c)
 *     VfIrpSendSynchronousIrp @ 0x14096EDB0 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x140043F70 (IopFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x140963370 (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  if ( IopDispatchFreeIrp )
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  else
    IopFreeIrp((ULONG_PTR)Irp);
}
