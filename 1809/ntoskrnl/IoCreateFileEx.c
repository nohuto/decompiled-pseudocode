/*
 * XREFs of IoCreateFileEx @ 0x14060C870
 * Callers:
 *     NtCreateUserProcess @ 0x14060B950 (NtCreateUserProcess.c)
 *     IopOpenLinkOrRenameTarget @ 0x14068CBE8 (IopOpenLinkOrRenameTarget.c)
 *     IoCreateFileSpecifyDeviceObjectHint @ 0x1406C78B0 (IoCreateFileSpecifyDeviceObjectHint.c)
 * Callees:
 *     FsRtlpPrepareExtraCreateParametersForCreate @ 0x14058294C (FsRtlpPrepareExtraCreateParametersForCreate.c)
 *     IopCreateFile @ 0x14060CAC0 (IopCreateFile.c)
 */

NTSTATUS __stdcall IoCreateFileEx(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG Disposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength,
        CREATE_FILE_TYPE CreateFileType,
        PVOID InternalParameters,
        ULONG Options,
        PIO_DRIVER_CREATE_CONTEXT DriverContext)
{
  int v15; // ebp
  int v16; // r14d
  int v17; // r10d
  int v19; // r12d
  struct _ECP_LIST *ExtraCreateParameter; // rcx
  ULONG v21; // edi
  NTSTATUS result; // eax
  int v23; // ecx
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-48h]

  v15 = (int)IoStatusBlock;
  v16 = (int)ObjectAttributes;
  v17 = (Options >> 10) & 2;
  v19 = (int)FileHandle;
  if ( !DriverContext )
  {
LABEL_11:
    LODWORD(NumberOfBytes) = EaLength;
    return IopCreateFile(
             v19,
             DesiredAccess,
             v16,
             v15,
             (__int64)AllocationSize,
             FileAttributes,
             ShareAccess,
             Disposition,
             CreateOptions,
             EaBuffer,
             NumberOfBytes,
             CreateFileType,
             (__int64)InternalParameters,
             Options | 0x100,
             v17,
             DriverContext);
  }
  ExtraCreateParameter = DriverContext->ExtraCreateParameter;
  v21 = v17 | 1;
  if ( !DriverContext->DeviceObjectHint )
    v21 = (Options >> 10) & 2;
  if ( !ExtraCreateParameter
    || (result = FsRtlpPrepareExtraCreateParametersForCreate((ULONG_PTR)ExtraCreateParameter), result >= 0) )
  {
    v23 = v21 | 4;
    if ( !DriverContext->TxnParameters )
      v23 = v21;
    v17 = v23;
    if ( DriverContext->Size >= 0x28u && *(_QWORD *)&DriverContext[1].Size != 1LL )
      v17 = v23 | 0x40;
    goto LABEL_11;
  }
  return result;
}
