/*
 * XREFs of PopCreateHiberFile @ 0x140747900
 * Callers:
 *     PopEnableHiberFile @ 0x14074716C (PopEnableHiberFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1401B8510 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1401B87D0 (ZwSetInformationFile.c)
 *     ZwFsControlFile @ 0x1401B8A10 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x1401B8C50 (ZwFlushBuffersFile.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     IoCreateFile @ 0x14060B8B0 (IoCreateFile.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14071F120 (FsRtlIssueFileNotificationFsctl.c)
 *     PopSanityCheckHiberFile @ 0x14071F818 (PopSanityCheckHiberFile.c)
 *     PopSetHiberFileMcb @ 0x14071FDF0 (PopSetHiberFileMcb.c)
 *     PopResetCurrentPolicies @ 0x1407487DC (PopResetCurrentPolicies.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140748E78 (PopCreateHiberFileSecurityDescriptor.c)
 */

__int64 __fastcall PopCreateHiberFile(LARGE_INTEGER a1)
{
  PFILE_OBJECT v1; // rsi
  int v2; // ebx
  void *HiberFileSecurityDescriptor; // r12
  unsigned int v4; // r14d
  NTSTATUS v5; // eax
  bool v6; // r15
  HANDLE v7; // rdi
  HANDLE v8; // rcx
  NTSTATUS v9; // eax
  NTSTATUS Status; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER AllocationSize; // [rsp+78h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-80h] BYREF
  PFILE_OBJECT FileObject; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING Destination; // [rsp+98h] [rbp-68h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  LARGE_INTEGER v21; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD InputBuffer[3]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE FileInformation[16]; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v26; // [rsp+120h] [rbp+20h]
  _DWORD v27[10]; // [rsp+128h] [rbp+28h] BYREF

  AllocationSize = a1;
  FileHandle = 0LL;
  FileObject = 0LL;
  v1 = 0LL;
  P = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
  Destination.MaximumLength = DestinationString.Length + IoArcBootDeviceName.Length;
  Destination.Length = 0;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                    PagedPool,
                                    (unsigned __int16)(DestinationString.Length + IoArcBootDeviceName.Length),
                                    0x72626968u);
  if ( !Destination.Buffer )
    return (unsigned int)-1073741670;
  RtlAppendUnicodeStringToString(&Destination, &IoArcBootDeviceName);
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  HiberFileSecurityDescriptor = (void *)PopCreateHiberFileSecurityDescriptor();
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &Destination;
  v4 = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = HiberFileSecurityDescriptor;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  while ( 1 )
  {
    v5 = IoCreateFile(
           &FileHandle,
           0x100003u,
           &ObjectAttributes,
           &IoStatusBlock,
           &AllocationSize,
           0x2006u,
           0,
           3u,
           0x9048u,
           0LL,
           0,
           CreateFileTypeNone,
           0LL,
           0x102u);
    v2 = v5;
    if ( v5 >= 0 )
      break;
    if ( v5 != -1073741638 )
    {
      v7 = FileHandle;
      goto LABEL_18;
    }
    v2 = IoCreateFile(
           &FileHandle,
           0x10000u,
           &ObjectAttributes,
           &IoStatusBlock,
           &AllocationSize,
           0,
           0,
           1u,
           0x201001u,
           0LL,
           0,
           CreateFileTypeNone,
           0LL,
           0x100u);
    if ( v2 < 0 )
    {
      v7 = FileHandle;
      goto LABEL_38;
    }
    v8 = FileHandle;
LABEL_11:
    ZwClose(v8);
    ++v4;
    FileHandle = 0LL;
    v7 = 0LL;
    if ( v4 >= 3 )
      goto LABEL_18;
  }
  v6 = IoStatusBlock.Information == 2;
  v7 = FileHandle;
  v2 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  if ( v2 < 0 )
    goto LABEL_38;
  if ( v26 > 1 )
  {
    v8 = v7;
    goto LABEL_11;
  }
  if ( !v6 )
  {
    InputBuffer[0] = 0x100000000LL;
    InputBuffer[2] = -1LL;
    InputBuffer[1] = 0LL;
    ZwFsControlFile(v7, 0LL, 0LL, 0LL, &IoStatusBlock, 0x98208u, InputBuffer, 0x18u, 0LL, 0);
  }
  v2 = 0;
LABEL_18:
  if ( v2 >= 0 )
  {
    memset(v27, 0, sizeof(v27));
    v27[8] = 8198;
    v2 = ZwSetInformationFile(v7, &IoStatusBlock, v27, 0x28u, FileBasicInformation);
    if ( v2 >= 0 )
    {
      v2 = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)v7,
             3,
             (__int64)IoFileObjectType,
             0,
             0x62486F50u,
             &FileObject,
             0LL,
             0LL);
      if ( v2 < 0 )
      {
        v1 = FileObject;
      }
      else
      {
        v21 = AllocationSize;
        v9 = ZwSetInformationFile(v7, &IoStatusBlock, &v21, 8u, FileEndOfFileInformation);
        v1 = FileObject;
        v2 = v9;
        if ( v9 == 259 )
        {
          KeWaitForSingleObject(&FileObject->Event, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
          v2 = IoStatusBlock.Status;
        }
        else
        {
          Status = IoStatusBlock.Status;
        }
        if ( v2 >= 0 )
        {
          if ( Status < 0 )
          {
            v2 = Status;
          }
          else if ( (v1->DeviceObject->Flags & 0x100) != 0 )
          {
            v2 = ZwFsControlFile(v7, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
            if ( v2 == 259 )
            {
              KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
              v2 = IoStatusBlock.Status;
            }
            if ( v2 >= 0 )
            {
              if ( ZwFlushBuffersFile(v7, &IoStatusBlock) == 259 )
                KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
              v2 = PopSanityCheckHiberFile(v7, (__int64)v1, &AllocationSize, (__int64 **)&P, &FileHandle);
              if ( v2 >= 0 )
              {
                v2 = PopSetHiberFileMcb(P, (unsigned int)FileHandle);
                if ( v2 >= 0 )
                {
                  qword_1404188D0 = AllocationSize.QuadPart;
                  PopHiberInfo = v7;
                  ::FileObject = v1;
                  FsRtlIssueFileNotificationFsctl(v1, v11, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE);
                  PopResetCurrentPolicies(v13, v12);
                  v2 = 0;
                  goto LABEL_42;
                }
              }
            }
          }
          else
          {
            v2 = -1073741823;
          }
        }
      }
    }
  }
LABEL_38:
  if ( v7 )
    ZwClose(v7);
  if ( v1 )
    ObfDereferenceObjectWithTag(v1, 0x62486F50u);
LABEL_42:
  if ( HiberFileSecurityDescriptor )
    ExFreePoolWithTag(HiberFileSecurityDescriptor, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v2;
}
