/*
 * XREFs of IoFreeIrp @ 0x1400B9670
 * Callers:
 *     IoRemoveIoCompletion @ 0x140058990 (IoRemoveIoCompletion.c)
 *     IopCompleteRequest @ 0x1400BFD10 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C10F0 (IopfCompleteRequest.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDCF0 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400E0610 (IopBuildAsynchronousFsdRequest.c)
 *     IopDropIrp @ 0x1400E099C (IopDropIrp.c)
 *     IopCancelIrpsInFileObjectList @ 0x140121A2C (IopCancelIrpsInFileObjectList.c)
 *     IopCompletePageWrite @ 0x1401396B0 (IopCompletePageWrite.c)
 *     PnpDeviceCompletionRoutine @ 0x140159BC0 (PnpDeviceCompletionRoutine.c)
 *     PopFreeIrp @ 0x140170F80 (PopFreeIrp.c)
 *     FsRtlGetFileExtents @ 0x14026E678 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x14028B280 (IopDeviceEjectComplete.c)
 *     PnpDiagnosticCompletionRoutine @ 0x14028B2E0 (PnpDiagnosticCompletionRoutine.c)
 *     PopFxDestroyDeviceDpm @ 0x1402D7D34 (PopFxDestroyDeviceDpm.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140308E50 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     CmpGetVolumeClusterSize @ 0x1405A4094 (CmpGetVolumeClusterSize.c)
 *     WmipSendWmiIrp @ 0x1405FBEA0 (WmipSendWmiIrp.c)
 *     IopCloseFile @ 0x140639B10 (IopCloseFile.c)
 *     IopDeleteFile @ 0x14063B3C0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 *     IopFreeCompletionListPackets @ 0x140662E10 (IopFreeCompletionListPackets.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A50E0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406B2830 (FsRtlKernelFsControlFile.c)
 *     CmpFileFlushAndPurge @ 0x1406B878C (CmpFileFlushAndPurge.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406C6330 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1406C6450 (FsRtlMdlReadEx.c)
 *     FsRtlSetKernelEaFile @ 0x1406C7ED0 (FsRtlSetKernelEaFile.c)
 *     IopUserRundown @ 0x1406CD9B0 (IopUserRundown.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1407064E0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     WmipSetTraceNotify @ 0x14070D8D8 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x14071DB50 (WmipGetFilePDO.c)
 *     PopConnectToPolicyDevice @ 0x140740E94 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x140745C08 (PopAcquireCoolingInterface.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140753CEC (WmipSendWmiIrpToTraceDeviceList.c)
 *     FsRtlQueryInformationFile @ 0x1408156F0 (FsRtlQueryInformationFile.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140816C60 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IopExceptionCleanup @ 0x140819B28 (IopExceptionCleanup.c)
 *     IoCancelFileOpen @ 0x14081BDC0 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x14083ADB8 (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x1408764BC (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x1408AC944 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x1408ACC9C (SmKmIsVolumeIoPossible.c)
 *     VfIrpSendSynchronousIrp @ 0x140930534 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x1400B96A0 (IopFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x1409241EC (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  if ( IopDispatchFreeIrp )
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  else
    IopFreeIrp((ULONG_PTR)Irp);
}
