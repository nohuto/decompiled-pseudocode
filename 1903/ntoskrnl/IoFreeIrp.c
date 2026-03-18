/*
 * XREFs of IoFreeIrp @ 0x140043EA0
 * Callers:
 *     IoRemoveIoCompletion @ 0x140044840 (IoRemoveIoCompletion.c)
 *     IopCompleteRequest @ 0x1400656B0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400668F0 (IopfCompleteRequest.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400BB0E0 (IopBuildDeviceIoControlRequest.c)
 *     IopDropIrp @ 0x1400FCC10 (IopDropIrp.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140127260 (IopBuildAsynchronousFsdRequest.c)
 *     IopCancelIrpsInFileObjectList @ 0x1401275E0 (IopCancelIrpsInFileObjectList.c)
 *     IopCompletePageWrite @ 0x14013B8A0 (IopCompletePageWrite.c)
 *     PnpDeviceCompletionRoutine @ 0x1401454C0 (PnpDeviceCompletionRoutine.c)
 *     PopFreeIrp @ 0x140172020 (PopFreeIrp.c)
 *     PopFxDestroyDeviceDpm @ 0x14019C7D4 (PopFxDestroyDeviceDpm.c)
 *     FsRtlGetFileExtents @ 0x140282130 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x1402A14F0 (IopDeviceEjectComplete.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1402A1550 (PnpDiagnosticCompletionRoutine.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1403268F0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     IopCloseFile @ 0x1405D8630 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1405F0850 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     CmpFileFlushAndPurge @ 0x140663994 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x140663B30 (CmpGetVolumeClusterSize.c)
 *     FsRtlSetKernelEaFile @ 0x14069D0C0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x14069D260 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x14069D570 (FsRtlQueryKernelEaFile.c)
 *     IopFreeCompletionListPackets @ 0x1406AF620 (IopFreeCompletionListPackets.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406EBBA0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1406EBCC0 (FsRtlMdlReadEx.c)
 *     IopUserRundown @ 0x1406ECA70 (IopUserRundown.c)
 *     WmipSendWmiIrp @ 0x140711938 (WmipSendWmiIrp.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x14071BF9C (WmipSendWmiIrpToTraceDeviceList.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14072D1E0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     WmipSetTraceNotify @ 0x140739CC0 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x1407462D0 (WmipGetFilePDO.c)
 *     PopConnectToPolicyDevice @ 0x14074D5B4 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x14075AD58 (PopAcquireCoolingInterface.c)
 *     FsRtlQueryInformationFile @ 0x14084F1F0 (FsRtlQueryInformationFile.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140850780 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IopExceptionCleanup @ 0x140853DA8 (IopExceptionCleanup.c)
 *     IoCancelFileOpen @ 0x140855E20 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x140875B7C (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x1408B378C (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x1408E9864 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x1408E9BD0 (SmKmIsVolumeIoPossible.c)
 *     VfIrpSendSynchronousIrp @ 0x14096EDB0 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x140043ED0 (IopFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x140963370 (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  if ( IopDispatchFreeIrp )
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  else
    IopFreeIrp((ULONG_PTR)Irp);
}
