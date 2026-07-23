/*
 * XREFs of VhdiGetVolumeNumber @ 0x1409FA328
 * Callers:
 *     VhdiInitializeBootDisk @ 0x1409FA480 (VhdiInitializeBootDisk.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1401B83D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401B8950 (ZwOpenFile.c)
 */

__int64 __fastcall VhdiGetVolumeNumber(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  HANDLE v4; // rax
  NTSTATUS inited; // ebx
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  _DWORD OutputBuffer[6]; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t pszDest[56]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 0LL;
  FileHandle = 0LL;
  if ( a1 && a4 )
  {
    inited = RtlStringCbPrintfW(pszDest, 0x64uLL, L"\\Device\\Harddisk%d\\Partition%d", a2, a3);
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
    v4 = FileHandle;
  }
  else
  {
    inited = -1073741811;
  }
  if ( v4 )
    ZwClose(v4);
  return (unsigned int)inited;
}
