/*
 * XREFs of ExpTranslateNtPath @ 0x140910158
 * Callers:
 *     ExpConvertArcName @ 0x14090CE48 (ExpConvertArcName.c)
 *     NtTranslateFilePath @ 0x1409131A0 (NtTranslateFilePath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwDeviceIoControlFile @ 0x1401C0D30 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenFile @ 0x1401C12B0 (ZwOpenFile.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpCreateOutputARC @ 0x14090D234 (ExpCreateOutputARC.c)
 *     ExpCreateOutputEFI @ 0x14090D328 (ExpCreateOutputEFI.c)
 *     ExpCreateOutputSIGNATURE @ 0x14090D5D4 (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateSymbolicLink @ 0x14091046C (ExpTranslateSymbolicLink.c)
 */

int __fastcall ExpTranslateNtPath(__int64 a1, int a2, char *a3, unsigned int *a4)
{
  int v5; // esi
  const WCHAR *v8; // rbx
  char v9; // di
  char v10; // r15
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  wchar_t *v13; // r14
  int result; // eax
  wchar_t *Buffer; // rbx
  int OutputARC; // esi
  NTSTATUS v17; // ebx
  ULONG OutputBufferLength; // esi
  _DWORD *i; // rax
  NTSTATUS v20; // r15d
  _DWORD *v21; // rbx
  __int64 *v22; // r8
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t *v25; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  __int64 OutputBuffer[24]; // [rsp+C0h] [rbp-40h] BYREF
  int v30; // [rsp+190h] [rbp+90h] BYREF
  int v31; // [rsp+198h] [rbp+98h]

  v31 = a2;
  v5 = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(OutputBuffer, 0, 0x90uLL);
  v8 = (const WCHAR *)(a1 + 12);
  v30 = 0;
  v9 = 1;
  v10 = 1;
  RtlInitUnicodeString(&DestinationString, v8);
  v11 = (unsigned __int64)v8 + DestinationString.Length + 2;
  v12 = -1LL;
  do
    ++v12;
  while ( *(_WORD *)(v11 + 2 * v12) );
  v13 = (wchar_t *)(v11 & -(__int64)((_DWORD)v12 != 0));
  if ( v5 != 1 )
  {
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x60u);
    if ( result < 0 )
      return result;
    v17 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x70048u, 0LL, 0, OutputBuffer, 0x90u);
    if ( v17 < 0 )
      goto LABEL_22;
    if ( LODWORD(OutputBuffer[0]) )
    {
      if ( LODWORD(OutputBuffer[0]) != 1 )
      {
        v17 = -1073741804;
LABEL_22:
        ZwClose(FileHandle);
        return v17;
      }
    }
    else
    {
      OutputBufferLength = 2352;
      for ( i = ExAllocatePoolWithTag(NonPagedPoolNx, 0x930uLL, 0x72766E45u);
            ;
            i = ExAllocatePoolWithTag(NonPagedPoolNx, OutputBufferLength, 0x72766E45u) )
      {
        v21 = i;
        if ( !i )
        {
          v17 = -1073741670;
          goto LABEL_22;
        }
        v20 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x70050u, 0LL, 0, i, OutputBufferLength);
        if ( v20 >= 0 )
          break;
        ExFreePoolWithTag(v21, 0);
        if ( v20 != -1073741789 )
        {
          v17 = v20;
          goto LABEL_22;
        }
        OutputBufferLength *= 2;
      }
      v30 = v21[2];
      ExFreePoolWithTag(v21, 0);
      v5 = v31;
    }
    ZwClose(FileHandle);
    if ( LODWORD(OutputBuffer[0]) == 1 )
    {
      v22 = &OutputBuffer[6];
    }
    else
    {
      v22 = (__int64 *)&v30;
      v9 = 0;
    }
    if ( v5 == 4 )
      return ExpCreateOutputEFI(a3, a4, v22, (int *)&OutputBuffer[3], &OutputBuffer[1], &OutputBuffer[2], v13, v9);
    else
      return ExpCreateOutputSIGNATURE(
               (__int64)a3,
               a4,
               (GUID *)v22,
               (unsigned int *)&OutputBuffer[3],
               &OutputBuffer[1],
               &OutputBuffer[2],
               v13,
               v9);
  }
  result = ExpTranslateSymbolicLink(v8);
  if ( result >= 0 )
  {
    Buffer = v25;
  }
  else
  {
    if ( result != -1073741788 )
      return result;
    v10 = 0;
    Buffer = DestinationString.Buffer;
    LODWORD(v24) = *(_DWORD *)&DestinationString.Length;
    v25 = DestinationString.Buffer;
  }
  OutputARC = ExpCreateOutputARC(a3, a4, (__int64)&v24, v13);
  if ( v10 == 1 )
    ExFreePoolWithTag(Buffer, 0);
  return OutputARC;
}
