/*
 * XREFs of sub_1801141DC @ 0x1801141DC
 * Callers:
 *     sub_180111230 @ 0x180111230 (sub_180111230.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x18009C7C0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwCreateFile @ 0x18009D180 (ZwCreateFile.c)
 */

NTSTATUS __fastcall sub_1801141DC(__int64 a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx
  HANDLE FileHandle; // [rsp+60h] [rbp-59h] BYREF
  _DWORD InputBuffer[4]; // [rsp+68h] [rbp-51h] BYREF
  __int16 v8; // [rsp+78h] [rbp-41h]
  __int64 v9; // [rsp+80h] [rbp-39h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-29h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp+7h] BYREF
  _IO_STATUS_BLOCK v12; // [rsp+D0h] [rbp+17h] BYREF
  _BYTE OutputBuffer[8]; // [rsp+E0h] [rbp+27h] BYREF
  unsigned __int64 v14; // [rsp+E8h] [rbp+2Fh]

  *a2 = 0;
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
    InputBuffer[2] = 1;
    v8 = 1;
    v9 = a1;
    v5 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &v12, 0x220004u, InputBuffer, 0x28u, OutputBuffer, 0x10u);
    ZwClose(FileHandle);
    if ( v5 >= 0 )
    {
      if ( v14 <= 0xFFFFFFFF )
      {
        *a2 = v14;
        return 0;
      }
      else
      {
        return -1073740757;
      }
    }
    else
    {
      return v5;
    }
  }
  return result;
}
