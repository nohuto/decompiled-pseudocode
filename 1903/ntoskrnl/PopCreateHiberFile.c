/*
 * XREFs of PopCreateHiberFile @ 0x14074A544
 * Callers:
 *     PopEnableHiberFile @ 0x14074AAD0 (PopEnableHiberFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400E7910 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1401C05B0 (ZwSetInformationFile.c)
 *     ZwFsControlFile @ 0x1401C07F0 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x1401C0A30 (ZwFlushBuffersFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     IoCreateFile @ 0x140615D70 (IoCreateFile.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14074653C (FsRtlIssueFileNotificationFsctl.c)
 *     PopSanityCheckHiberFile @ 0x140746FB0 (PopSanityCheckHiberFile.c)
 *     PopSetHiberFileMcb @ 0x140747B08 (PopSetHiberFileMcb.c)
 *     PopResetCurrentPolicies @ 0x140749ADC (PopResetCurrentPolicies.c)
 *     PopValidateExistingHiberFile @ 0x14074A868 (PopValidateExistingHiberFile.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14074A954 (PopCreateHiberFileSecurityDescriptor.c)
 *     PopDeleteHiberFile @ 0x1408A7EC4 (PopDeleteHiberFile.c)
 */

__int64 __fastcall PopCreateHiberFile(LARGE_INTEGER a1)
{
  struct _FILE_OBJECT *v2; // rdi
  void *HiberFileSecurityDescriptor; // r14
  NTSTATUS v4; // eax
  HANDLE v5; // rsi
  int v6; // ecx
  int v7; // ebx
  NTSTATUS v8; // eax
  NTSTATUS Status; // eax
  __int64 v10; // rdx
  NTSTATUS v12; // eax
  PVOID P; // [rsp+70h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-41h] BYREF
  UNICODE_STRING Destination; // [rsp+88h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-11h] BYREF
  HANDLE FileHandle; // [rsp+120h] [rbp+67h] BYREF
  LARGE_INTEGER AllocationSize; // [rsp+128h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+130h] [rbp+77h] BYREF
  LARGE_INTEGER FileInformation; // [rsp+138h] [rbp+7Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(&Destination.MaximumLength + 2) = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  FileInformation.QuadPart = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  FileHandle = 0LL;
  v2 = 0LL;
  Object = 0LL;
  AllocationSize = a1;
  P = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
  *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(DestinationString.Length + IoArcBootDeviceName.Length);
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
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = HiberFileSecurityDescriptor;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v4 = IoCreateFile(
         &FileHandle,
         0x100003u,
         &ObjectAttributes,
         &IoStatusBlock,
         &AllocationSize,
         0x2006u,
         0,
         5u,
         0x9008u,
         0LL,
         0,
         CreateFileTypeNone,
         0LL,
         0x102u);
  v5 = FileHandle;
  v6 = v4;
  if ( v4 < 0 )
    goto LABEL_40;
  if ( IoStatusBlock.Information == 3 || !IoStatusBlock.Information )
  {
    v6 = PopValidateExistingHiberFile(FileHandle);
    if ( (PopSimulateHiberBugcheck & 0x400) != 0 )
      v6 = -1073741823;
  }
  if ( v6 < 0 )
  {
LABEL_40:
    ZwClose(v5);
    FileHandle = 0LL;
    PopDeleteHiberFile(&ObjectAttributes);
    v12 = IoCreateFile(
            &FileHandle,
            0x100003u,
            &ObjectAttributes,
            &IoStatusBlock,
            &AllocationSize,
            0x2006u,
            0,
            0,
            0x9008u,
            0LL,
            0,
            CreateFileTypeNone,
            0LL,
            0x102u);
    v5 = FileHandle;
    v7 = v12;
    if ( v12 < 0 )
      goto LABEL_34;
  }
  v7 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)v5, 3, (__int64)IoFileObjectType, 0, 0x62486F50u, &Object, 0LL, 0LL);
  if ( v7 < 0 )
  {
    v2 = (struct _FILE_OBJECT *)Object;
    goto LABEL_34;
  }
  FileInformation = AllocationSize;
  v8 = ZwSetInformationFile(v5, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
  v2 = (struct _FILE_OBJECT *)Object;
  v7 = v8;
  if ( v8 == 259 )
  {
    KeWaitForSingleObject((char *)Object + 152, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
    v7 = IoStatusBlock.Status;
  }
  else
  {
    Status = IoStatusBlock.Status;
  }
  if ( v7 < 0 )
    goto LABEL_34;
  if ( Status < 0 )
  {
    v7 = Status;
    goto LABEL_34;
  }
  if ( (v2->DeviceObject->Flags & 0x100) == 0 )
  {
    v7 = -1073741823;
LABEL_34:
    if ( v5 )
      ZwClose(v5);
    if ( v2 )
      ObfDereferenceObjectWithTag(v2, 0x62486F50u);
    goto LABEL_22;
  }
  v7 = ZwFsControlFile(v5, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
  if ( v7 == 259 )
  {
    KeWaitForSingleObject(&v2->Event, Executive, 0, 0, 0LL);
    v7 = IoStatusBlock.Status;
  }
  if ( v7 < 0 )
    goto LABEL_34;
  if ( ZwFlushBuffersFile(v5, &IoStatusBlock) == 259 )
    KeWaitForSingleObject(&v2->Event, Executive, 0, 0, 0LL);
  v7 = PopSanityCheckHiberFile(v5, (__int64)v2, &AllocationSize, (__int64 **)&P, &FileHandle);
  if ( v7 < 0 )
    goto LABEL_34;
  v7 = PopSetHiberFileMcb(P, (unsigned int)FileHandle);
  if ( v7 < 0 )
    goto LABEL_34;
  qword_140443410 = AllocationSize.QuadPart;
  *(_QWORD *)&PopHiberInfo = v5;
  FileObject = v2;
  FsRtlIssueFileNotificationFsctl(v2, v10, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE);
  PopResetCurrentPolicies();
  v7 = 0;
LABEL_22:
  if ( HiberFileSecurityDescriptor )
    ExFreePoolWithTag(HiberFileSecurityDescriptor, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v7;
}
