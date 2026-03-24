/*
 * XREFs of IoGetRelatedDeviceObject @ 0x1400B8B90
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x14000E8D0 (PnpGetRelatedTargetDevice.c)
 *     FsRtlReleaseFileForModWrite @ 0x14001AF98 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14001B150 (FsRtlAcquireFileForModWriteEx.c)
 *     IoPageReadEx @ 0x1400DE740 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400DEA20 (IoSynchronousPageWriteEx.c)
 *     CcZeroData @ 0x1400E0C20 (CcZeroData.c)
 *     CcSetValidData @ 0x140126AA4 (CcSetValidData.c)
 *     IoAsynchronousPageWrite @ 0x140135014 (IoAsynchronousPageWrite.c)
 *     FsRtlGetFileExtents @ 0x14026E678 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x14026E7E0 (FsRtlMdlReadComplete.c)
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
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 *     NtFlushBuffersFileEx @ 0x14065C7A0 (NtFlushBuffersFileEx.c)
 *     NtQueryVolumeInformationFile @ 0x14065E460 (NtQueryVolumeInformationFile.c)
 *     IopQueryXxxInformation @ 0x140661720 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x140661910 (IopGetFileInformation.c)
 *     IoGetDeviceObjectPointer @ 0x140661E90 (IoGetDeviceObjectPointer.c)
 *     IopOpenLinkOrRenameTarget @ 0x14068BA28 (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x14068BC70 (IopGetBasicInformationFile.c)
 *     IopGetSetObjectId @ 0x14068C630 (IopGetSetObjectId.c)
 *     IopGetSetSecurityObject @ 0x1406990D0 (IopGetSetSecurityObject.c)
 *     NtUnlockFile @ 0x14069B640 (NtUnlockFile.c)
 *     IopParseFile @ 0x1406A3560 (IopParseFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A50E0 (FsRtlQueryKernelEaFile.c)
 *     NtQueryEaFile @ 0x1406A95B0 (NtQueryEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406B2830 (FsRtlKernelFsControlFile.c)
 *     CmpFileFlushAndPurge @ 0x1406B878C (CmpFileFlushAndPurge.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406B9CE0 (NtNotifyChangeDirectoryFileEx.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406C6330 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x1406C63B0 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x1406C6450 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x1406C64D0 (FsRtlMdlRead.c)
 *     CcMdlReadComplete @ 0x1406C7510 (CcMdlReadComplete.c)
 *     FsRtlSetKernelEaFile @ 0x1406C7ED0 (FsRtlSetKernelEaFile.c)
 *     CcMdlWriteComplete @ 0x1406C8F30 (CcMdlWriteComplete.c)
 *     FsRtlQueryCachedVdl @ 0x1406CA870 (FsRtlQueryCachedVdl.c)
 *     FsRtlSetFileSize @ 0x1406CAA60 (FsRtlSetFileSize.c)
 *     NtWriteFileGather @ 0x1406CC860 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CD390 (NtReadFileScatter.c)
 *     IopCopyOffloadCapable @ 0x1406CF1DC (IopCopyOffloadCapable.c)
 *     NtSetVolumeInformationFile @ 0x1406FF270 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x140701280 (IoSetInformation.c)
 *     WmipGetFilePDO @ 0x14071DB50 (WmipGetFilePDO.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14071DE80 (FsRtlIssueFileNotificationFsctl.c)
 *     PopGetPolicyDeviceObject @ 0x140741020 (PopGetPolicyDeviceObject.c)
 *     MiCreatePagingFile @ 0x14074BFB8 (MiCreatePagingFile.c)
 *     PiPagePathSetState @ 0x14075C1DC (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140814530 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlMdlWriteComplete @ 0x140814A70 (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x1408156F0 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x140819E24 (IopGetVolumeId.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081AC3C (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x14081B4F8 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x14081BCD0 (IoAttachDevice.c)
 *     NtSetEaFile @ 0x14081E1E0 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14081E840 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x1408228FC (IopFreeBandwidthContract.c)
 *     RawSetInformation @ 0x14088FC44 (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x1408ACC9C (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x1408AD58C (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x1408AE2E0 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1408AFC2C (SmpUtilsGetControlDevice.c)
 *     VhdiMountVhdFile @ 0x1409F9784 (VhdiMountVhdFile.c)
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
