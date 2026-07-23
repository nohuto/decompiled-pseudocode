/*
 * XREFs of IoFreeIrp @ 0x1400B95B0
 * Callers:
 *     IoRemoveIoCompletion @ 0x140058990 (IoRemoveIoCompletion.c)
 *     IopCompleteRequest @ 0x1400BFC50 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDD70 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400E0690 (IopBuildAsynchronousFsdRequest.c)
 *     IopDropIrp @ 0x1400E0A1C (IopDropIrp.c)
 *     IopCancelIrpsInFileObjectList @ 0x140121AFC (IopCancelIrpsInFileObjectList.c)
 *     IopCompletePageWrite @ 0x1401397B0 (IopCompletePageWrite.c)
 *     PnpDeviceCompletionRoutine @ 0x140159CC0 (PnpDeviceCompletionRoutine.c)
 *     PopFreeIrp @ 0x140171080 (PopFreeIrp.c)
 *     FsRtlGetFileExtents @ 0x14026E868 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x14028B470 (IopDeviceEjectComplete.c)
 *     PnpDiagnosticCompletionRoutine @ 0x14028B4D0 (PnpDiagnosticCompletionRoutine.c)
 *     PopFxDestroyDeviceDpm @ 0x1402D7F24 (PopFxDestroyDeviceDpm.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140309040 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     CmpGetVolumeClusterSize @ 0x1405A5094 (CmpGetVolumeClusterSize.c)
 *     WmipSendWmiIrp @ 0x1405FCEA0 (WmipSendWmiIrp.c)
 *     IopCloseFile @ 0x14063AB30 (IopCloseFile.c)
 *     IopDeleteFile @ 0x14063C3E0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     IopFreeCompletionListPackets @ 0x140663FD0 (IopFreeCompletionListPackets.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A6380 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406B3AD0 (FsRtlKernelFsControlFile.c)
 *     CmpFileFlushAndPurge @ 0x1406B9A2C (CmpFileFlushAndPurge.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406C75D0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1406C76F0 (FsRtlMdlReadEx.c)
 *     FsRtlSetKernelEaFile @ 0x1406C9170 (FsRtlSetKernelEaFile.c)
 *     IopUserRundown @ 0x1406CEC50 (IopUserRundown.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140707780 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     WmipSetTraceNotify @ 0x14070EB78 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x14071EDF0 (WmipGetFilePDO.c)
 *     PopConnectToPolicyDevice @ 0x140742084 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x140746DF8 (PopAcquireCoolingInterface.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140754EDC (WmipSendWmiIrpToTraceDeviceList.c)
 *     FsRtlQueryInformationFile @ 0x1408168F0 (FsRtlQueryInformationFile.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140817E60 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IopExceptionCleanup @ 0x14081AD28 (IopExceptionCleanup.c)
 *     IoCancelFileOpen @ 0x14081CFC0 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x14083C018 (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x14087771C (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x1408ADBA4 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x1408ADEFC (SmKmIsVolumeIoPossible.c)
 *     VfIrpSendSynchronousIrp @ 0x140931534 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x1400B95E0 (IopFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x1409251EC (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  if ( IopDispatchFreeIrp )
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  else
    IopFreeIrp((ULONG_PTR)Irp);
}
