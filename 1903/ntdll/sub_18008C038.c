/*
 * XREFs of sub_18008C038 @ 0x18008C038
 * Callers:
 *     sub_18008BF20 @ 0x18008BF20 (sub_18008BF20.c)
 *     sub_180114534 @ 0x180114534 (sub_180114534.c)
 * Callees:
 *     sub_18000283C @ 0x18000283C (sub_18000283C.c)
 *     sub_180003214 @ 0x180003214 (sub_180003214.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwCreateFile @ 0x18009D180 (ZwCreateFile.c)
 */

NTSTATUS __fastcall sub_18008C038(unsigned __int16 *a1, HANDLE *a2)
{
  __int64 v2; // r9
  NTSTATUS result; // eax
  HANDLE FileHandle; // [rsp+60h] [rbp-29h] BYREF
  __int64 v6; // [rsp+68h] [rbp-21h] BYREF
  wchar_t *v7; // [rsp+70h] [rbp-19h]
  __int64 v8; // [rsp+78h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp+27h] BYREF
  wchar_t Buffer[12]; // [rsp+C0h] [rbp+37h] BYREF

  v2 = *a1;
  FileHandle = 0LL;
  sub_18000283C(Buffer, 0x14uLL, L"\\??\\%C:", v2);
  v6 = 0LL;
  v7 = 0LL;
  if ( (int)sub_180003214(Buffer, 0x7FFFLL, &v8) >= 0 )
  {
    LOWORD(v6) = 2 * v8;
    WORD1(v6) = 2 * v8 + 2;
    v7 = Buffer;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v6;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
  if ( result >= 0 )
  {
    *a2 = FileHandle;
    return 0;
  }
  return result;
}
