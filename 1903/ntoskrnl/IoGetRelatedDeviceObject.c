/*
 * XREFs of IoGetRelatedDeviceObject @ 0x140037070
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x1400996E0 (PnpGetRelatedTargetDevice.c)
 *     CcSetValidData @ 0x14009990C (CcSetValidData.c)
 *     IoPageReadEx @ 0x1400A7640 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400A794C (IoSynchronousPageWriteEx.c)
 *     CcZeroData @ 0x1400FC620 (CcZeroData.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14011DBF8 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14011E148 (FsRtlReleaseFileForModWrite.c)
 *     IoAsynchronousPageWrite @ 0x140137438 (IoAsynchronousPageWrite.c)
 *     FsRtlGetFileExtents @ 0x140282130 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x140282290 (FsRtlMdlReadComplete.c)
 *     NtLockFile @ 0x1405D4830 (NtLockFile.c)
 *     FsRtlReleaseFile @ 0x1405D5620 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405D5810 (FsRtlAcquireFileExclusiveCommon.c)
 *     IopCloseFile @ 0x1405D8630 (IopCloseFile.c)
 *     NtReadFile @ 0x1405EF450 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x1405EFFA0 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x1405F0850 (IopDeleteFile.c)
 *     IopXxxControlFile @ 0x1405F1C90 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     IopGetFileInformation @ 0x140627E84 (IopGetFileInformation.c)
 *     NtWriteFile @ 0x140629160 (NtWriteFile.c)
 *     IopQueryXxxInformation @ 0x14062AFE4 (IopQueryXxxInformation.c)
 *     NtQueryVolumeInformationFile @ 0x14062B1F0 (NtQueryVolumeInformationFile.c)
 *     IoGetDeviceObjectPointer @ 0x140661AF0 (IoGetDeviceObjectPointer.c)
 *     CmpFileFlushAndPurge @ 0x140663994 (CmpFileFlushAndPurge.c)
 *     BuildQueryDirectoryIrp @ 0x140679180 (BuildQueryDirectoryIrp.c)
 *     FsRtlGetFileSize @ 0x14068A6A0 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x14069CFA0 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x14069D0C0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x14069D260 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x14069D570 (FsRtlQueryKernelEaFile.c)
 *     IopGetSetSecurityObject @ 0x14069E430 (IopGetSetSecurityObject.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14069ECE0 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14069EF34 (FsRtlAcquireFileForCcFlushEx.c)
 *     NtWriteFileGather @ 0x1406A3D30 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406A4400 (NtReadFileScatter.c)
 *     IopGetSetObjectId @ 0x1406B0448 (IopGetSetObjectId.c)
 *     NtUnlockFile @ 0x1406C1390 (NtUnlockFile.c)
 *     IopParseFile @ 0x1406C6FB0 (IopParseFile.c)
 *     NtFlushBuffersFileEx @ 0x1406CC660 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406CF9A0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406DB3A0 (NtNotifyChangeDirectoryFileEx.c)
 *     IopOpenLinkOrRenameTarget @ 0x1406DDF24 (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x1406DE1AC (IopGetBasicInformationFile.c)
 *     CcMdlReadComplete @ 0x1406E9FB0 (CcMdlReadComplete.c)
 *     FsRtlQueryCachedVdl @ 0x1406EAAC0 (FsRtlQueryCachedVdl.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406EBBA0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x1406EBC20 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x1406EBCC0 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x1406EBD40 (FsRtlMdlRead.c)
 *     IoSetInformation @ 0x1406ECC40 (IoSetInformation.c)
 *     CcMdlWriteComplete @ 0x1406ED890 (CcMdlWriteComplete.c)
 *     IopCopyOffloadCapable @ 0x1406EEDD4 (IopCopyOffloadCapable.c)
 *     IopGetVolumeId @ 0x1406F7CA4 (IopGetVolumeId.c)
 *     NtSetVolumeInformationFile @ 0x14072B860 (NtSetVolumeInformationFile.c)
 *     WmipGetFilePDO @ 0x1407462D0 (WmipGetFilePDO.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14074653C (FsRtlIssueFileNotificationFsctl.c)
 *     PopGetPolicyDeviceObject @ 0x14074D740 (PopGetPolicyDeviceObject.c)
 *     MiCreatePagingFile @ 0x140770618 (MiCreatePagingFile.c)
 *     PiPagePathSetState @ 0x14078175C (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14084DF9C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlMdlWriteComplete @ 0x14084E4F0 (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x14084F1F0 (FsRtlQueryInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140854B90 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x1408554D8 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x140855D20 (IoAttachDevice.c)
 *     NtSetEaFile @ 0x140858120 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x1408587D0 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x14085CBD4 (IopFreeBandwidthContract.c)
 *     RawSetInformation @ 0x1408CE058 (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x1408E9BD0 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x1408EA4E0 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x1408EB2A0 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1408ECC8C (SmpUtilsGetControlDevice.c)
 *     VhdiMountVhdFile @ 0x140A3F35C (VhdiMountVhdFile.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetRelatedDeviceObject(PFILE_OBJECT FileObject)
{
  PVPB Vpb; // rax
  PDEVICE_OBJECT result; // rax
  struct _DEVICE_OBJECT *AttachedDevice; // rdx
  _QWORD *FileObjectExtension; // r8
  PVPB v5; // rax
  PDEVICE_OBJECT *v6; // rcx

  Vpb = FileObject->Vpb;
  if ( (!Vpb || (result = Vpb->DeviceObject) == 0LL)
    && ((FileObject->Flags & 0x800) != 0
     || (v5 = FileObject->DeviceObject->Vpb) == 0LL
     || (result = v5->DeviceObject) == 0LL) )
  {
    result = FileObject->DeviceObject;
  }
  AttachedDevice = result->AttachedDevice;
  if ( AttachedDevice )
  {
    FileObjectExtension = FileObject->FileObjectExtension;
    if ( FileObjectExtension
      && FileObjectExtension != IopRevocationExtension
      && (v6 = (PDEVICE_OBJECT *)FileObjectExtension[2]) != 0LL
      && *v6 )
    {
      while ( result != *v6 )
      {
        result = result->AttachedDevice;
        if ( !result )
          goto LABEL_5;
      }
      return *v6;
    }
    else
    {
      do
      {
LABEL_5:
        result = AttachedDevice;
        AttachedDevice = AttachedDevice->AttachedDevice;
      }
      while ( AttachedDevice );
    }
  }
  return result;
}
