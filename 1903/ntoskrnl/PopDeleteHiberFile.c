/*
 * XREFs of PopDeleteHiberFile @ 0x1408A7EC4
 * Callers:
 *     PopCreateHiberFile @ 0x14074A544 (PopCreateHiberFile.c)
 *     PopEnableHiberFile @ 0x14074AAD0 (PopEnableHiberFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400E7910 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401C0730 (ZwOpenFile.c)
 *     ZwDeleteFile @ 0x1401C1A90 (ZwDeleteFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     IoSetInformation @ 0x1406ECC40 (IoSetInformation.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14074A954 (PopCreateHiberFileSecurityDescriptor.c)
 */

void __fastcall PopDeleteHiberFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  ACL *v2; // rdi
  ACL *HiberFileSecurityDescriptor; // rax
  NTSTATUS v4; // eax
  struct _FILE_OBJECT *v5; // rbx
  char v6[8]; // [rsp+40h] [rbp-59h] BYREF
  HANDLE FileHandle; // [rsp+48h] [rbp-51h] BYREF
  UNICODE_STRING Destination; // [rsp+50h] [rbp-49h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-31h] BYREF
  __int64 v11; // [rsp+78h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-19h] BYREF
  _QWORD v13[6]; // [rsp+90h] [rbp-9h] BYREF
  _DWORD FileInformation[10]; // [rsp+C0h] [rbp+27h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(FileInformation, 0, sizeof(FileInformation));
  v11 = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  v6[0] = 0;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(v13, 0, sizeof(v13));
  FileHandle = 0LL;
  v2 = 0LL;
  Destination.Buffer = 0LL;
  FileObject = 0LL;
  if ( !ObjectAttributes )
  {
    RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
    Destination.MaximumLength = DestinationString.Length + IoArcBootDeviceName.Length;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                      PagedPool,
                                      (unsigned __int16)(DestinationString.Length + IoArcBootDeviceName.Length),
                                      0x72626968u);
    if ( !Destination.Buffer )
      return;
    RtlAppendUnicodeStringToString(&Destination, &IoArcBootDeviceName);
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    HiberFileSecurityDescriptor = PopCreateHiberFileSecurityDescriptor();
    v13[1] = 0LL;
    v2 = HiberFileSecurityDescriptor;
    v13[5] = 0LL;
    v13[2] = &Destination;
    ObjectAttributes = (POBJECT_ATTRIBUTES)v13;
    LODWORD(v13[0]) = 48;
    LODWORD(v13[3]) = 576;
    v13[4] = HiberFileSecurityDescriptor;
  }
  v4 = ZwDeleteFile(ObjectAttributes);
  if ( (int)(v4 + 0x80000000) >= 0
    && v4 != -1073741772
    && ZwOpenFile(&FileHandle, 0x10100u, ObjectAttributes, &IoStatusBlock, 7u, 0x204000u) >= 0 )
  {
    if ( (int)ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)FileHandle,
                0x10000,
                (__int64)IoFileObjectType,
                KeGetCurrentThread()->PreviousMode,
                0x62486F50u,
                &FileObject,
                &v11,
                0LL) >= 0 )
    {
      v5 = FileObject;
      FileInformation[8] = 128;
      IoSetInformation(FileObject, FileBasicInformation, 0x28u, FileInformation);
      v6[0] = 1;
      IoSetInformation(v5, FileDispositionInformation, 1u, v6);
      ObfDereferenceObjectWithTag(v5, 0x62486F50u);
    }
    ZwClose(FileHandle);
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
}
