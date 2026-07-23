/*
 * XREFs of sub_1801140B8 @ 0x1801140B8
 * Callers:
 *     sub_180111230 @ 0x180111230 (sub_180111230.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x18009C7C0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwCreateFile @ 0x18009D180 (ZwCreateFile.c)
 */

NTSTATUS __fastcall sub_1801140B8(__int64 a1, void *a2, ULONG a3)
{
  NTSTATUS result; // eax
  NTSTATUS v7; // ebx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-39h] BYREF
  _IO_STATUS_BLOCK v9; // [rsp+70h] [rbp-29h] BYREF
  _DWORD InputBuffer[4]; // [rsp+80h] [rbp-19h] BYREF
  __int16 v11; // [rsp+90h] [rbp-9h]
  __int64 v12; // [rsp+98h] [rbp-1h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp+Fh] BYREF
  HANDLE FileHandle; // [rsp+118h] [rbp+7Fh] BYREF

  if ( a3 < 8 )
    return -1073741811;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_18015F620;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 1u, 1u, 0x4Cu, 0LL, 0);
  if ( result >= 0 )
  {
    InputBuffer[1] = 0;
    InputBuffer[0] = 1;
    InputBuffer[2] = 2;
    v11 = 1;
    v12 = a1;
    v7 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &v9, 0x220006u, InputBuffer, 0x28u, a2, a3);
    ZwClose(FileHandle);
    return v7;
  }
  return result;
}
