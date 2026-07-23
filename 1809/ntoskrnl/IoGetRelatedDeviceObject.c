/*
 * XREFs of IoGetRelatedDeviceObject @ 0x1400B8AD0
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x14000E8D0 (PnpGetRelatedTargetDevice.c)
 *     FsRtlReleaseFileForModWrite @ 0x14001AF98 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14001B150 (FsRtlAcquireFileForModWriteEx.c)
 *     IoPageReadEx @ 0x1400DE7C0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400DEAA0 (IoSynchronousPageWriteEx.c)
 *     CcZeroData @ 0x1400E0CA0 (CcZeroData.c)
 *     CcSetValidData @ 0x140126B74 (CcSetValidData.c)
 *     IoAsynchronousPageWrite @ 0x1401350E4 (IoAsynchronousPageWrite.c)
 *     FsRtlGetFileExtents @ 0x14026E868 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x14026E9D0 (FsRtlMdlReadComplete.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1405DDE70 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1405DE0AC (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFile @ 0x1405DF940 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405DFB10 (FsRtlAcquireFileExclusiveCommon.c)
 *     IopXxxControlFile @ 0x1405E9BD0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1405FB000 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1405FB710 (BuildQueryDirectoryIrp.c)
 *     FsRtlGetFileSize @ 0x14061C4A0 (FsRtlGetFileSize.c)
 *     NtWriteFile @ 0x140639C60 (NtWriteFile.c)
 *     IopCloseFile @ 0x14063AB30 (IopCloseFile.c)
 *     NtReadFile @ 0x14063B160 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x14063BA30 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x14063C3E0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     NtFlushBuffersFileEx @ 0x14065D960 (NtFlushBuffersFileEx.c)
 *     NtQueryVolumeInformationFile @ 0x14065F620 (NtQueryVolumeInformationFile.c)
 *     IopQueryXxxInformation @ 0x1406628E0 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x140662AD0 (IopGetFileInformation.c)
 *     IoGetDeviceObjectPointer @ 0x140663050 (IoGetDeviceObjectPointer.c)
 *     IopOpenLinkOrRenameTarget @ 0x14068CBE8 (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x14068CE30 (IopGetBasicInformationFile.c)
 *     IopGetSetObjectId @ 0x14068D7F0 (IopGetSetObjectId.c)
 *     IopGetSetSecurityObject @ 0x14069A290 (IopGetSetSecurityObject.c)
 *     NtUnlockFile @ 0x14069C800 (NtUnlockFile.c)
 *     IopParseFile @ 0x1406A4800 (IopParseFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A6380 (FsRtlQueryKernelEaFile.c)
 *     NtQueryEaFile @ 0x1406AA850 (NtQueryEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406B3AD0 (FsRtlKernelFsControlFile.c)
 *     CmpFileFlushAndPurge @ 0x1406B9A2C (CmpFileFlushAndPurge.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406BAF80 (NtNotifyChangeDirectoryFileEx.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406C75D0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x1406C7650 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x1406C76F0 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x1406C7770 (FsRtlMdlRead.c)
 *     CcMdlReadComplete @ 0x1406C87B0 (CcMdlReadComplete.c)
 *     FsRtlSetKernelEaFile @ 0x1406C9170 (FsRtlSetKernelEaFile.c)
 *     CcMdlWriteComplete @ 0x1406CA1D0 (CcMdlWriteComplete.c)
 *     FsRtlQueryCachedVdl @ 0x1406CBB10 (FsRtlQueryCachedVdl.c)
 *     FsRtlSetFileSize @ 0x1406CBD00 (FsRtlSetFileSize.c)
 *     NtWriteFileGather @ 0x1406CDB00 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CE630 (NtReadFileScatter.c)
 *     IopCopyOffloadCapable @ 0x1406D047C (IopCopyOffloadCapable.c)
 *     NtSetVolumeInformationFile @ 0x140700510 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x140702520 (IoSetInformation.c)
 *     WmipGetFilePDO @ 0x14071EDF0 (WmipGetFilePDO.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14071F120 (FsRtlIssueFileNotificationFsctl.c)
 *     PopGetPolicyDeviceObject @ 0x140742210 (PopGetPolicyDeviceObject.c)
 *     MiCreatePagingFile @ 0x14074D1A8 (MiCreatePagingFile.c)
 *     PiPagePathSetState @ 0x14075D3CC (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140815730 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlMdlWriteComplete @ 0x140815C70 (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x1408168F0 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x14081B024 (IopGetVolumeId.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081BE3C (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x14081C6F8 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x14081CED0 (IoAttachDevice.c)
 *     NtSetEaFile @ 0x14081F3E0 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14081FA40 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x140823AFC (IopFreeBandwidthContract.c)
 *     RawSetInformation @ 0x140890EA4 (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x1408ADEFC (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x1408AE7EC (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x1408AF540 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1408B0E8C (SmpUtilsGetControlDevice.c)
 *     VhdiMountVhdFile @ 0x1409FA784 (VhdiMountVhdFile.c)
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
