/*
 * XREFs of RtlCreateSystemVolumeInformationFolder @ 0x1406D7560
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     NtCreateFile @ 0x14060CA30 (NtCreateFile.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1406D777C (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1406D78D8 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x1408976E0 (RtlpSysVolTakeOwnership.c)
 */

NTSTATUS __stdcall RtlCreateSystemVolumeInformationFolder(PCUNICODE_STRING VolumeRootPath)
{
  unsigned __int16 Length; // ax
  unsigned __int16 v3; // di
  unsigned __int16 v4; // dx
  wchar_t v5; // si
  SIZE_T v6; // rdx
  PVOID PoolWithTag; // rax
  unsigned __int16 v8; // ax
  int v9; // ebx
  HANDLE v10; // rdi
  PVOID v11; // rcx
  _WORD v13[4]; // [rsp+60h] [rbp-19h] BYREF
  PVOID P; // [rsp+68h] [rbp-11h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  HANDLE FileHandle; // [rsp+E0h] [rbp+67h] BYREF
  PVOID v18; // [rsp+E8h] [rbp+6Fh] BYREF

  RtlInitUnicodeString(&DestinationString, L"System Volume Information");
  Length = VolumeRootPath->Length;
  v3 = DestinationString.Length;
  v4 = DestinationString.Length + VolumeRootPath->Length;
  v13[0] = v4;
  if ( (unsigned __int16)(DestinationString.Length + Length) < Length || v4 < DestinationString.Length )
    return -1073741811;
  v5 = VolumeRootPath->Buffer[((unsigned __int64)Length >> 1) - 1];
  if ( v5 != 92 )
  {
    v4 += 2;
    v13[0] = v4;
  }
  v6 = (unsigned __int16)(v4 + 2);
  v13[1] = v6;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x536C6F56u);
  P = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memmove(PoolWithTag, VolumeRootPath->Buffer, VolumeRootPath->Length);
  v8 = VolumeRootPath->Length;
  v13[0] = VolumeRootPath->Length;
  if ( v5 != 92 )
  {
    *((_WORD *)P + ((unsigned __int64)v8 >> 1)) = 92;
    v8 = v13[0] + 2;
    v13[0] += 2;
  }
  memmove((char *)P + v8, DestinationString.Buffer, v3);
  v13[0] += v3;
  *((_WORD *)P + ((unsigned __int64)v13[0] >> 1)) = 0;
  v9 = RtlpSysVolCreateSecurityDescriptor(&FileHandle, &v18);
  if ( v9 < 0 )
  {
    v11 = P;
  }
  else
  {
    v10 = FileHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v13;
    ObjectAttributes.SecurityDescriptor = FileHandle;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    if ( NtCreateFile(
           &FileHandle,
           0x10000u,
           &ObjectAttributes,
           (PIO_STATUS_BLOCK)&DestinationString,
           0LL,
           0,
           7u,
           1u,
           0x201060u,
           0LL,
           0) >= 0 )
      NtClose(FileHandle);
    v9 = NtCreateFile(
           &FileHandle,
           0x1E0000u,
           &ObjectAttributes,
           (PIO_STATUS_BLOCK)&DestinationString,
           0LL,
           6u,
           7u,
           3u,
           0x21u,
           0LL,
           0);
    if ( v9 < 0 )
    {
      RtlpSysVolTakeOwnership(v13);
      v9 = NtCreateFile(
             &FileHandle,
             0x1E0000u,
             &ObjectAttributes,
             (PIO_STATUS_BLOCK)&DestinationString,
             0LL,
             6u,
             7u,
             3u,
             0x21u,
             0LL,
             0);
    }
    ExFreePoolWithTag(P, 0);
    if ( v9 < 0 )
    {
      ExFreePoolWithTag(v18, 0);
      v11 = v10;
    }
    else
    {
      ExFreePoolWithTag(v10, 0);
      v9 = RtlpSysVolCheckOwnerAndSecurity(FileHandle, (PACL)v18);
      NtClose(FileHandle);
      v11 = v18;
    }
  }
  ExFreePoolWithTag(v11, 0);
  return v9;
}
