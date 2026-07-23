/*
 * XREFs of PiGetDriverImageDirectory @ 0x14082672C
 * Callers:
 *     IoGetDriverDirectory @ 0x140825FF0 (IoGetDriverDirectory.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     IoQueryFullDriverPath @ 0x140191AA0 (IoQueryFullDriverPath.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401B8950 (ZwOpenFile.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 */

__int64 __fastcall PiGetDriverImageDirectory(__int64 a1, HANDLE *a2)
{
  int v4; // ebx
  unsigned int v5; // eax
  unsigned __int64 v6; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+A0h] [rbp+20h] BYREF

  FileHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v4 = IoQueryFullDriverPath(a1, &DestinationString);
  if ( v4 >= 0 )
  {
    LOWORD(v5) = DestinationString.Length;
    if ( DestinationString.Length < 2u )
      goto LABEL_9;
    while ( 1 )
    {
      v5 = (unsigned __int16)(v5 - 2);
      DestinationString.Length = v5;
      v6 = (unsigned __int64)v5 >> 1;
      if ( DestinationString.Buffer[v6] == 92 || DestinationString.Buffer[v6] == 47 )
        break;
      if ( (unsigned __int16)v5 < 2u )
        goto LABEL_8;
    }
    DestinationString.Buffer[v6] = 0;
    LOWORD(v5) = DestinationString.Length;
LABEL_8:
    if ( (unsigned __int16)v5 > 2u )
    {
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
      if ( v4 >= 0 )
      {
        *a2 = FileHandle;
        FileHandle = 0LL;
      }
    }
    else
    {
LABEL_9:
      v4 = -1073741811;
    }
  }
  RtlFreeAnsiString(&DestinationString);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v4;
}
