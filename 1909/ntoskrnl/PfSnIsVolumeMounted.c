/*
 * XREFs of PfSnIsVolumeMounted @ 0x14062A72C
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x14062A850 (PfSnOpenVolumesForPrefetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 *     NtCreateFile @ 0x140618C20 (NtCreateFile.c)
 *     NtQueryVolumeInformationFile @ 0x14062F040 (NtQueryVolumeInformationFile.c)
 */

__int64 __fastcall PfSnIsVolumeMounted(PCWSTR SourceString, int *a2, int *a3)
{
  NTSTATUS v5; // ebx
  int v6; // eax
  HANDLE FileHandle; // [rsp+68h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-1h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp+Fh] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 FsInformation; // [rsp+F0h] [rbp+7Fh] BYREF

  FsInformation = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = NtCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
  if ( v5 >= 0 )
  {
    v5 = NtQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &FsInformation, 8u, FileFsDeviceInformation);
    if ( (v5 & 0xC0000000) != 0xC0000000 )
    {
      v6 = (HIDWORD(FsInformation) >> 5) & 1;
      *a3 = BYTE4(FsInformation) & 1;
      *a2 = v6;
      v5 = 0;
    }
    NtClose(FileHandle);
  }
  return (unsigned int)v5;
}
