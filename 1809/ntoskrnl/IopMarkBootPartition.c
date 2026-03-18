/*
 * XREFs of IopMarkBootPartition @ 0x1409D6100
 * Callers:
 *     <none>
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACDD0 (ObfReferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1400EED70 (RtlInitAnsiString.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x14018DF70 (IopCreateUnicodeFromAnsiBuffer.c)
 *     RtlStringCchPrintfA @ 0x14018DFA0 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1401B87D0 (ZwOpenFile.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405AADA0 (RtlAnsiStringToUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1405F5700 (ObCloseHandle.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14073C23C (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopStoreSystemPartitionInformation @ 0x1409D62F4 (IopStoreSystemPartitionInformation.c)
 *     IopAssignBootDriveLetter @ 0x1409D65AC (IopAssignBootDriveLetter.c)
 */

__int64 __fastcall IopMarkBootPartition(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  __int64 v5; // r9
  NTSTATUS v6; // ebx
  PVOID *v7; // rbx
  void *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v9; // rcx
  void *v10; // rdi
  __int64 v11; // rcx
  int v13; // edx
  HANDLE FileHandle; // [rsp+30h] [rbp-D0h] BYREF
  STRING SourceString; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  char pszFormat[24]; // [rsp+98h] [rbp-68h] BYREF
  char pszDest[256]; // [rsp+B0h] [rbp-50h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  v5 = *(_QWORD *)(a1 + 184);
  strcpy(pszFormat, "\\ArcName\\%s");
  v6 = RtlStringCchPrintfA(pszDest, 0x100uLL, pszFormat, v5);
  if ( v6 >= 0 )
  {
    RtlInitAnsiString(&SourceString, pszDest);
    v6 = RtlAnsiStringToUnicodeString(a3, &SourceString, 1u);
    if ( v6 >= 0 )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.ObjectName = a3;
      v6 = ZwOpenFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0, 0x40u);
      if ( v6 >= 0 )
      {
        v6 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, (PVOID *)&SourceString, 0LL);
        if ( v6 >= 0 )
        {
          v7 = *(PVOID **)&SourceString.Length;
          DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(
                                             *(_QWORD *)(*(_QWORD *)&SourceString.Length + 8LL),
                                             0x746C6644u);
          v9 = (__int64)v7[1];
          v10 = DeviceAttachmentBaseRefWithTag;
          *(_DWORD *)(v9 + 48) |= 0x100u;
          *((_DWORD *)DeviceAttachmentBaseRefWithTag + 12) |= 0x100u;
          if ( InitIsWinPEMode )
          {
            v9 = (__int64)v7[1];
            v13 = *(_DWORD *)(v9 + 52);
            if ( (v13 & 1) != 0 )
              InitWinPEModeType |= 0x200u;
            if ( (v13 & 2) != 0 )
              InitWinPEModeType |= 0x100u;
          }
          PnpHardwareConfigCreateBootDriverFlags(v9, FileHandle);
          ObfReferenceObjectWithTag(v7[1], 0x746C6644u);
          ObCloseHandle(FileHandle, 0);
          ObfDereferenceObjectWithTag(v7, 0x746C6644u);
          ObfDereferenceObjectWithTag(v10, 0x746C6644u);
          IopAssignBootDriveLetter();
          v6 = IopCreateUnicodeFromAnsiBuffer(&DestinationString, *(const char **)(a1 + 208));
          if ( v6 >= 0 )
          {
            IopStoreSystemPartitionInformation(v11, &DestinationString);
            RtlFreeAnsiString(&DestinationString);
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
