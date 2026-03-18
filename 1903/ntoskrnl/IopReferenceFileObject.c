/*
 * XREFs of IopReferenceFileObject @ 0x14003FC10
 * Callers:
 *     NtLockFile @ 0x1405D4830 (NtLockFile.c)
 *     NtReadFile @ 0x1405EF450 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x1405EFFA0 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1405F1C90 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x140679180 (BuildQueryDirectoryIrp.c)
 *     NtWriteFileGather @ 0x1406A3D30 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406A4400 (NtReadFileScatter.c)
 *     NtFlushBuffersFileEx @ 0x1406CC660 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406CF9A0 (NtQueryEaFile.c)
 *     NtCancelIoFile @ 0x1406D0D30 (NtCancelIoFile.c)
 *     NtCancelIoFileEx @ 0x1406D0ED0 (NtCancelIoFileEx.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406DB3A0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetVolumeInformationFile @ 0x14072B860 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140854B90 (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x1408556CC (IopValidateJunctionTarget.c)
 *     NtSetEaFile @ 0x140858120 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x1408587D0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     IopFileObjectRevoked @ 0x14003FCB0 (IopFileObjectRevoked.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall IopReferenceFileObject(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        PVOID *a4,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  NTSTATUS result; // eax
  NTSTATUS v7; // ebx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  result = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)IoFileObjectType, a3, &Object, HandleInformation);
  v7 = result;
  *a4 = Object;
  if ( result >= 0 )
  {
    if ( (unsigned __int8)IopFileObjectRevoked() )
    {
      ObfDereferenceObject(*a4);
      return -1073739504;
    }
    else
    {
      return v7;
    }
  }
  return result;
}
