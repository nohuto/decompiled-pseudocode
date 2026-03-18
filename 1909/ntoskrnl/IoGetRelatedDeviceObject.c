/*
 * XREFs of IoGetRelatedDeviceObject @ 0x140037470
 * Callers:
 *     IoPageReadEx @ 0x140094BE0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140094EEC (IoSynchronousPageWriteEx.c)
 *     CcSetValidData @ 0x1400ED764 (CcSetValidData.c)
 *     PnpGetRelatedTargetDevice @ 0x1400ED9FC (PnpGetRelatedTargetDevice.c)
 *     CcZeroData @ 0x1400FE7B0 (CcZeroData.c)
 *     IoAsynchronousPageWrite @ 0x14011A258 (IoAsynchronousPageWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14011D3E8 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14011D938 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlGetFileExtents @ 0x140281E90 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x140281FF0 (FsRtlMdlReadComplete.c)
 *     NtLockFile @ 0x1405D4D30 (NtLockFile.c)
 *     FsRtlReleaseFile @ 0x1405D5DE0 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405D5FD0 (FsRtlAcquireFileExclusiveCommon.c)
 *     IopCloseFile @ 0x1405D8DF0 (IopCloseFile.c)
 *     NtReadFile @ 0x1405EFC20 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x1405F0890 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x1405F1150 (IopDeleteFile.c)
 *     IopXxxControlFile @ 0x1405F25A0 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     IopGetSetSecurityObject @ 0x140623F40 (IopGetSetSecurityObject.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1406247F0 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140624A44 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlSetFileSize @ 0x140625490 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1406255B0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140625750 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140625A60 (FsRtlQueryKernelEaFile.c)
 *     IopGetFileInformation @ 0x14062BCD4 (IopGetFileInformation.c)
 *     NtWriteFile @ 0x14062CFB0 (NtWriteFile.c)
 *     IopQueryXxxInformation @ 0x14062EE34 (IopQueryXxxInformation.c)
 *     NtQueryVolumeInformationFile @ 0x14062F040 (NtQueryVolumeInformationFile.c)
 *     FsRtlGetFileSize @ 0x1406507C0 (FsRtlGetFileSize.c)
 *     NtReadFileScatter @ 0x140674200 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140674810 (NtWriteFileGather.c)
 *     BuildQueryDirectoryIrp @ 0x14067EAF0 (BuildQueryDirectoryIrp.c)
 *     IoGetDeviceObjectPointer @ 0x1406907A0 (IoGetDeviceObjectPointer.c)
 *     CmpFileFlushAndPurge @ 0x140690A7C (CmpFileFlushAndPurge.c)
 *     IopGetSetObjectId @ 0x1406B2378 (IopGetSetObjectId.c)
 *     NtUnlockFile @ 0x1406C02D0 (NtUnlockFile.c)
 *     IopParseFile @ 0x1406C5890 (IopParseFile.c)
 *     NtFlushBuffersFileEx @ 0x1406CB490 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406CEC10 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406DC110 (NtNotifyChangeDirectoryFileEx.c)
 *     IopOpenLinkOrRenameTarget @ 0x1406DF314 (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x1406DF59C (IopGetBasicInformationFile.c)
 *     CcMdlReadComplete @ 0x1406EB150 (CcMdlReadComplete.c)
 *     FsRtlQueryCachedVdl @ 0x1406EBD80 (FsRtlQueryCachedVdl.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406ECE60 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x1406ECEE0 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x1406ECF80 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x1406ED000 (FsRtlMdlRead.c)
 *     IoSetInformation @ 0x1406EDE60 (IoSetInformation.c)
 *     CcMdlWriteComplete @ 0x1406EEC00 (CcMdlWriteComplete.c)
 *     IopCopyOffloadCapable @ 0x1406F08F4 (IopCopyOffloadCapable.c)
 *     IopGetVolumeId @ 0x1406F9A64 (IopGetVolumeId.c)
 *     NtSetVolumeInformationFile @ 0x14072D700 (NtSetVolumeInformationFile.c)
 *     WmipGetFilePDO @ 0x1407481D0 (WmipGetFilePDO.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14074843C (FsRtlIssueFileNotificationFsctl.c)
 *     PopGetPolicyDeviceObject @ 0x14074E1D0 (PopGetPolicyDeviceObject.c)
 *     MiCreatePagingFile @ 0x140773BF8 (MiCreatePagingFile.c)
 *     PiPagePathSetState @ 0x140783ABC (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14084D69C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlMdlWriteComplete @ 0x14084DBF0 (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x14084E8F0 (FsRtlQueryInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140854290 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x140854BD8 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x140855420 (IoAttachDevice.c)
 *     NtSetEaFile @ 0x140857820 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140857ED0 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x14085C2D4 (IopFreeBandwidthContract.c)
 *     RawSetInformation @ 0x1408CD938 (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x1408E94D8 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x1408E9DE8 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x1408EABA8 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1408EC59C (SmpUtilsGetControlDevice.c)
 *     VhdiMountVhdFile @ 0x140A3F12C (VhdiMountVhdFile.c)
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
