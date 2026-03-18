/*
 * XREFs of VhdiGetVolumeNumber @ 0x140A3EEAC
 * Callers:
 *     VhdiInitializeBootDisk @ 0x140A3F040 (VhdiInitializeBootDisk.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbPrintfW @ 0x1400040E8 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1401C01B0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401C0730 (ZwOpenFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall VhdiGetVolumeNumber(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  HANDLE v8; // rcx
  NTSTATUS inited; // ebx
  int ShareAccess; // [rsp+20h] [rbp-E0h]
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  _QWORD OutputBuffer[2]; // [rsp+A8h] [rbp-58h] BYREF
  int v17; // [rsp+B8h] [rbp-48h]
  wchar_t pszDest[56]; // [rsp+C0h] [rbp-40h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v8 = 0LL;
  OutputBuffer[0] = 0LL;
  OutputBuffer[1] = 0LL;
  v17 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  FileHandle = 0LL;
  if ( a1 && a4 )
  {
    ShareAccess = a3;
    inited = RtlStringCbPrintfW(pszDest, 0x64uLL, L"\\Device\\Harddisk%d\\Partition%d", a2, ShareAccess);
    if ( inited >= 0 )
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
      if ( inited >= 0 )
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        inited = ZwOpenFile(&FileHandle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
        if ( inited >= 0 )
        {
          inited = ZwDeviceIoControlFile(
                     FileHandle,
                     0LL,
                     0LL,
                     0LL,
                     &IoStatusBlock,
                     0x56001Cu,
                     0LL,
                     0,
                     OutputBuffer,
                     0x14u);
          if ( inited >= 0 )
            *a4 = OutputBuffer[0];
        }
      }
    }
    v8 = FileHandle;
  }
  else
  {
    inited = -1073741811;
  }
  if ( v8 )
    ZwClose(v8);
  return (unsigned int)inited;
}
