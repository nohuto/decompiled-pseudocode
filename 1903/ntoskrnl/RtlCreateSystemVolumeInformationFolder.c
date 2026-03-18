/*
 * XREFs of RtlCreateSystemVolumeInformationFolder @ 0x1408D4410
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     NtCreateFile @ 0x140617110 (NtCreateFile.c)
 *     RtlpSysVolFree @ 0x1406E4210 (RtlpSysVolFree.c)
 *     RtlpSysVolAllocate @ 0x1408D46CC (RtlpSysVolAllocate.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1408D46F0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1408D4A0C (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolTakeOwnership @ 0x1408D4B7C (RtlpSysVolTakeOwnership.c)
 */

NTSTATUS __stdcall RtlCreateSystemVolumeInformationFolder(PCUNICODE_STRING VolumeRootPath)
{
  unsigned __int16 Length; // ax
  unsigned __int16 v3; // di
  unsigned __int16 v4; // dx
  wchar_t v5; // si
  ACL *v6; // rax
  unsigned __int16 v8; // ax
  int v9; // ebx
  PACL v10; // rcx
  ACL *v11; // rdi
  __int64 v12; // [rsp+60h] [rbp-29h] BYREF
  ACL *v13; // [rsp+68h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+7h] BYREF
  HANDLE FileHandle; // [rsp+F0h] [rbp+67h] BYREF
  PACL Dacl; // [rsp+F8h] [rbp+6Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  RtlInitUnicodeString(&DestinationString, L"System Volume Information");
  Length = VolumeRootPath->Length;
  v3 = DestinationString.Length;
  v4 = DestinationString.Length + VolumeRootPath->Length;
  LOWORD(v12) = v4;
  if ( (unsigned __int16)(DestinationString.Length + Length) < Length || v4 < DestinationString.Length )
    return -1073741811;
  v5 = VolumeRootPath->Buffer[((unsigned __int64)Length >> 1) - 1];
  if ( v5 != 92 )
  {
    v4 += 2;
    LOWORD(v12) = v4;
  }
  WORD1(v12) = v4 + 2;
  v6 = (ACL *)RtlpSysVolAllocate((unsigned __int16)(v4 + 2));
  v13 = v6;
  if ( !v6 )
    return -1073741670;
  memmove(v6, VolumeRootPath->Buffer, VolumeRootPath->Length);
  v8 = VolumeRootPath->Length;
  LOWORD(v12) = VolumeRootPath->Length;
  if ( v5 != 92 )
  {
    *((_WORD *)&v13->AclRevision + ((unsigned __int64)v8 >> 1)) = 92;
    v8 = v12 + 2;
    LOWORD(v12) = v12 + 2;
  }
  memmove((char *)v13 + v8, DestinationString.Buffer, v3);
  LOWORD(v12) = v3 + v12;
  *((_WORD *)&v13->AclRevision + ((unsigned __int64)(unsigned __int16)v12 >> 1)) = 0;
  v9 = RtlpSysVolCreateSecurityDescriptor(&FileHandle, &Dacl);
  if ( v9 >= 0 )
  {
    v11 = (ACL *)FileHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
    ObjectAttributes.SecurityDescriptor = FileHandle;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    if ( NtCreateFile(&FileHandle, 0x10000u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x201060u, 0LL, 0) >= 0 )
      NtClose(FileHandle);
    v9 = NtCreateFile(&FileHandle, 0x1E0000u, &ObjectAttributes, &IoStatusBlock, 0LL, 6u, 7u, 3u, 0x21u, 0LL, 0);
    if ( v9 < 0 )
    {
      RtlpSysVolTakeOwnership(&v12);
      v9 = NtCreateFile(&FileHandle, 0x1E0000u, &ObjectAttributes, &IoStatusBlock, 0LL, 6u, 7u, 3u, 0x21u, 0LL, 0);
    }
    RtlpSysVolFree(v13);
    if ( v9 >= 0 )
    {
      RtlpSysVolFree(v11);
      v9 = RtlpSysVolCheckOwnerAndSecurity(FileHandle, Dacl);
      NtClose(FileHandle);
      v10 = Dacl;
    }
    else
    {
      RtlpSysVolFree(Dacl);
      v10 = v11;
    }
  }
  else
  {
    v10 = v13;
  }
  RtlpSysVolFree(v10);
  return v9;
}
