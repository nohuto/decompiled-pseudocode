/*
 * XREFs of IopReferenceFileObject @ 0x14003F950
 * Callers:
 *     NtLockFile @ 0x1405D4D30 (NtLockFile.c)
 *     NtReadFile @ 0x1405EFC20 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x1405F0890 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1405F25A0 (IopXxxControlFile.c)
 *     NtReadFileScatter @ 0x140674200 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140674810 (NtWriteFileGather.c)
 *     BuildQueryDirectoryIrp @ 0x14067EAF0 (BuildQueryDirectoryIrp.c)
 *     NtFlushBuffersFileEx @ 0x1406CB490 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406CEC10 (NtQueryEaFile.c)
 *     NtCancelIoFile @ 0x1406CFFA0 (NtCancelIoFile.c)
 *     NtCancelIoFileEx @ 0x1406D0140 (NtCancelIoFileEx.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406DC110 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetVolumeInformationFile @ 0x14072D700 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140854290 (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x140854DCC (IopValidateJunctionTarget.c)
 *     NtSetEaFile @ 0x140857820 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140857ED0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     IopFileObjectRevoked @ 0x14003F9F0 (IopFileObjectRevoked.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
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
