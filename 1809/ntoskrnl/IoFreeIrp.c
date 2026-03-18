/*
 * XREFs of IoFreeIrp @ 0x1400B9650
 * Callers:
 *     IoRemoveIoCompletion @ 0x140058990 (IoRemoveIoCompletion.c)
 *     IopCompleteRequest @ 0x1400BFCF0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C10D0 (IopfCompleteRequest.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDCD0 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400E05F0 (IopBuildAsynchronousFsdRequest.c)
 *     IopDropIrp @ 0x1400E097C (IopDropIrp.c)
 *     IopCancelIrpsInFileObjectList @ 0x140121A0C (IopCancelIrpsInFileObjectList.c)
 *     IopCompletePageWrite @ 0x140139690 (IopCompletePageWrite.c)
 *     PnpDeviceCompletionRoutine @ 0x140159BA0 (PnpDeviceCompletionRoutine.c)
 *     PopFreeIrp @ 0x140170F60 (PopFreeIrp.c)
 *     FsRtlGetFileExtents @ 0x14026E578 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x14028B180 (IopDeviceEjectComplete.c)
 *     PnpDiagnosticCompletionRoutine @ 0x14028B1E0 (PnpDiagnosticCompletionRoutine.c)
 *     PopFxDestroyDeviceDpm @ 0x1402D7C34 (PopFxDestroyDeviceDpm.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140308D50 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     CmpGetVolumeClusterSize @ 0x1405A4094 (CmpGetVolumeClusterSize.c)
 *     WmipSendWmiIrp @ 0x1405FBEA0 (WmipSendWmiIrp.c)
 *     IopCloseFile @ 0x140639B10 (IopCloseFile.c)
 *     IopDeleteFile @ 0x14063B3C0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     IopFreeCompletionListPackets @ 0x140662E30 (IopFreeCompletionListPackets.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A5100 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406B2850 (FsRtlKernelFsControlFile.c)
 *     CmpFileFlushAndPurge @ 0x1406B87AC (CmpFileFlushAndPurge.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406C6350 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1406C6470 (FsRtlMdlReadEx.c)
 *     FsRtlSetKernelEaFile @ 0x1406C7EF0 (FsRtlSetKernelEaFile.c)
 *     IopUserRundown @ 0x1406CD9D0 (IopUserRundown.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140706500 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     WmipSetTraceNotify @ 0x14070D8F8 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x14071DB70 (WmipGetFilePDO.c)
 *     PopConnectToPolicyDevice @ 0x140740EB4 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x140745C28 (PopAcquireCoolingInterface.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140753D0C (WmipSendWmiIrpToTraceDeviceList.c)
 *     FsRtlQueryInformationFile @ 0x140815710 (FsRtlQueryInformationFile.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140816C80 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IopExceptionCleanup @ 0x140819B48 (IopExceptionCleanup.c)
 *     IoCancelFileOpen @ 0x14081BDE0 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x14083ADD8 (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x1408764DC (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x1408AC964 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x1408ACCBC (SmKmIsVolumeIoPossible.c)
 *     VfIrpSendSynchronousIrp @ 0x140930534 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x1400B9680 (IopFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x1409241EC (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  if ( IopDispatchFreeIrp )
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  else
    IopFreeIrp((ULONG_PTR)Irp);
}
