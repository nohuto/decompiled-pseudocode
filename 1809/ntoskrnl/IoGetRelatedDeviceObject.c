/*
 * XREFs of IoGetRelatedDeviceObject @ 0x1400B8B70
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x14000E8D0 (PnpGetRelatedTargetDevice.c)
 *     FsRtlReleaseFileForModWrite @ 0x14001AF98 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14001B150 (FsRtlAcquireFileForModWriteEx.c)
 *     IoPageReadEx @ 0x1400DE720 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400DEA00 (IoSynchronousPageWriteEx.c)
 *     CcZeroData @ 0x1400E0C00 (CcZeroData.c)
 *     CcSetValidData @ 0x140126A84 (CcSetValidData.c)
 *     IoAsynchronousPageWrite @ 0x140134FF4 (IoAsynchronousPageWrite.c)
 *     FsRtlGetFileExtents @ 0x14026E578 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x14026E6E0 (FsRtlMdlReadComplete.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1405DCE70 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1405DD0AC (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFile @ 0x1405DE940 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405DEB10 (FsRtlAcquireFileExclusiveCommon.c)
 *     IopXxxControlFile @ 0x1405E8BD0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1405FA000 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1405FA710 (BuildQueryDirectoryIrp.c)
 *     FsRtlGetFileSize @ 0x14061B4A0 (FsRtlGetFileSize.c)
 *     NtWriteFile @ 0x140638C40 (NtWriteFile.c)
 *     IopCloseFile @ 0x140639B10 (IopCloseFile.c)
 *     NtReadFile @ 0x14063A140 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x14063AA10 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x14063B3C0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     NtFlushBuffersFileEx @ 0x14065C7C0 (NtFlushBuffersFileEx.c)
 *     NtQueryVolumeInformationFile @ 0x14065E480 (NtQueryVolumeInformationFile.c)
 *     IopQueryXxxInformation @ 0x140661740 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x140661930 (IopGetFileInformation.c)
 *     IoGetDeviceObjectPointer @ 0x140661EB0 (IoGetDeviceObjectPointer.c)
 *     IopOpenLinkOrRenameTarget @ 0x14068BA48 (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x14068BC90 (IopGetBasicInformationFile.c)
 *     IopGetSetObjectId @ 0x14068C650 (IopGetSetObjectId.c)
 *     IopGetSetSecurityObject @ 0x1406990F0 (IopGetSetSecurityObject.c)
 *     NtUnlockFile @ 0x14069B660 (NtUnlockFile.c)
 *     IopParseFile @ 0x1406A3580 (IopParseFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A5100 (FsRtlQueryKernelEaFile.c)
 *     NtQueryEaFile @ 0x1406A95D0 (NtQueryEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406B2850 (FsRtlKernelFsControlFile.c)
 *     CmpFileFlushAndPurge @ 0x1406B87AC (CmpFileFlushAndPurge.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406B9D00 (NtNotifyChangeDirectoryFileEx.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406C6350 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x1406C63D0 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x1406C6470 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x1406C64F0 (FsRtlMdlRead.c)
 *     CcMdlReadComplete @ 0x1406C7530 (CcMdlReadComplete.c)
 *     FsRtlSetKernelEaFile @ 0x1406C7EF0 (FsRtlSetKernelEaFile.c)
 *     CcMdlWriteComplete @ 0x1406C8F50 (CcMdlWriteComplete.c)
 *     FsRtlQueryCachedVdl @ 0x1406CA890 (FsRtlQueryCachedVdl.c)
 *     FsRtlSetFileSize @ 0x1406CAA80 (FsRtlSetFileSize.c)
 *     NtWriteFileGather @ 0x1406CC880 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CD3B0 (NtReadFileScatter.c)
 *     IopCopyOffloadCapable @ 0x1406CF1FC (IopCopyOffloadCapable.c)
 *     NtSetVolumeInformationFile @ 0x1406FF290 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x1407012A0 (IoSetInformation.c)
 *     WmipGetFilePDO @ 0x14071DB70 (WmipGetFilePDO.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14071DEA0 (FsRtlIssueFileNotificationFsctl.c)
 *     PopGetPolicyDeviceObject @ 0x140741040 (PopGetPolicyDeviceObject.c)
 *     MiCreatePagingFile @ 0x14074BFD8 (MiCreatePagingFile.c)
 *     PiPagePathSetState @ 0x14075C1FC (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140814550 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlMdlWriteComplete @ 0x140814A90 (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x140815710 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x140819E44 (IopGetVolumeId.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081AC5C (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x14081B518 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x14081BCF0 (IoAttachDevice.c)
 *     NtSetEaFile @ 0x14081E200 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14081E860 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x14082291C (IopFreeBandwidthContract.c)
 *     RawSetInformation @ 0x14088FC64 (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x1408ACCBC (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x1408AD5AC (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x1408AE300 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1408AFC4C (SmpUtilsGetControlDevice.c)
 *     VhdiMountVhdFile @ 0x1409F9774 (VhdiMountVhdFile.c)
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
