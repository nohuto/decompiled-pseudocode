/*
 * XREFs of PipCriticalDeviceWaitCallback @ 0x140A3A500
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiString @ 0x1400EA030 (RtlInitAnsiString.c)
 *     RtlStringCchPrintfA @ 0x140189BB8 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenFile @ 0x1401C12B0 (ZwOpenFile.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063FB50 (RtlAnsiStringToUnicodeString.c)
 */

__int64 __fastcall PipCriticalDeviceWaitCallback(__int64 a1, const char *a2, UNICODE_STRING *a3)
{
  NTSTATUS v5; // ebx
  HANDLE FileHandle; // [rsp+30h] [rbp-D0h] BYREF
  _STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  char pszDest[256]; // [rsp+90h] [rbp-70h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  FileHandle = 0LL;
  if ( a2 )
  {
    v5 = RtlStringCchPrintfA(pszDest, 0x100uLL, "\\ArcName\\%s", a2);
    if ( v5 >= 0 )
    {
      RtlInitAnsiString(&DestinationString, pszDest);
      v5 = RtlAnsiStringToUnicodeString(a3, &DestinationString, 1u);
      if ( v5 >= 0 )
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.ObjectName = a3;
        v5 = ZwOpenFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0, 0x40u);
      }
    }
    if ( FileHandle )
      ZwClose(FileHandle);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
