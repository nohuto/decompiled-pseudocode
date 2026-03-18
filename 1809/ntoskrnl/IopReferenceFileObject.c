/*
 * XREFs of IopReferenceFileObject @ 0x14008C7EC
 * Callers:
 *     NtLockFile @ 0x1405FA000 (NtLockFile.c)
 *     NtFlushBuffersFileEx @ 0x14065C7C0 (NtFlushBuffersFileEx.c)
 *     NtCancelIoFile @ 0x1406A6630 (NtCancelIoFile.c)
 *     NtCancelIoFileEx @ 0x1406A68D0 (NtCancelIoFileEx.c)
 *     NtQueryEaFile @ 0x1406A95D0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406B9D00 (NtNotifyChangeDirectoryFileEx.c)
 *     NtWriteFileGather @ 0x1406CC880 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CD3B0 (NtReadFileScatter.c)
 *     NtSetVolumeInformationFile @ 0x1406FF290 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081AC5C (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x14081B6DC (IopValidateJunctionTarget.c)
 *     NtSetEaFile @ 0x14081E200 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14081E860 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     IopFileObjectRevoked @ 0x14008C898 (IopFileObjectRevoked.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopReferenceFileObject(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        PVOID *a4,
        POBJECT_HANDLE_INFORMATION a5)
{
  NTSTATUS v6; // ebx
  PVOID v8; // [rsp+58h] [rbp+20h] BYREF

  v6 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)IoFileObjectType, a3, &v8, a5);
  *a4 = v8;
  if ( v6 >= 0 && (unsigned __int8)IopFileObjectRevoked() )
  {
    ObfDereferenceObjectWithTag(*a4, 0x746C6644u);
    return (unsigned int)-1073739504;
  }
  return (unsigned int)v6;
}
