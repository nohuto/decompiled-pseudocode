/*
 * XREFs of sub_180114328 @ 0x180114328
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180009B00 (RtlQueryResourcePolicy.c)
 * Callees:
 *     sub_18000283C @ 0x18000283C (sub_18000283C.c)
 *     sub_180003214 @ 0x180003214 (sub_180003214.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwCreateFile @ 0x18009D180 (ZwCreateFile.c)
 *     sub_180114484 @ 0x180114484 (sub_180114484.c)
 */

__int64 __fastcall sub_180114328(__int64 a1, _DWORD *a2)
{
  NTSTATUS v3; // ebx
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v6; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *v7; // [rsp+70h] [rbp-90h]
  __int64 v8; // [rsp+78h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Buffer[264]; // [rsp+C0h] [rbp-40h] BYREF

  FileHandle = 0LL;
  if ( BYTE2(qword_180166590) )
  {
    v3 = 0;
    *a2 = BYTE2(qword_180166590);
  }
  else
  {
    sub_18000283C(Buffer, 0x208uLL, L"\\??\\%s", a1);
    v6 = 0LL;
    v7 = 0LL;
    if ( (int)sub_180003214(Buffer, 0x7FFFLL, &v8) >= 0 )
    {
      LOWORD(v6) = 2 * v8;
      WORD1(v6) = 2 * v8 + 2;
      v7 = Buffer;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v6;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
    if ( v3 >= 0 )
    {
      v3 = sub_180114484(FileHandle, a2);
      if ( v3 >= 0 )
        v3 = 0;
    }
    if ( FileHandle )
      ZwClose(FileHandle);
  }
  return (unsigned int)v3;
}
