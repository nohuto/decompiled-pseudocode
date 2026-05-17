/*
 * XREFs of sub_180005268 @ 0x180005268
 * Callers:
 *     sub_180004BA8 @ 0x180004BA8 (sub_180004BA8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     sub_180025F70 @ 0x180025F70 (sub_180025F70.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwSetInformationFile @ 0x18009CBC0 (ZwSetInformationFile.c)
 *     ZwCreateFile @ 0x18009D180 (ZwCreateFile.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_180005268(PCWSTR SourceString, __int64 a2, __int64 a3, _BYTE *a4, int a5, _QWORD *a6)
{
  int v8; // r15d
  bool v9; // di
  int v10; // ebx
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-69h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-59h] BYREF
  _BYTE v14[8]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v15; // [rsp+88h] [rbp-41h]
  int v16; // [rsp+90h] [rbp-39h] BYREF
  __int64 v17; // [rsp+98h] [rbp-31h]
  UNICODE_STRING *p_UnicodeString; // [rsp+A0h] [rbp-29h]
  int v19; // [rsp+A8h] [rbp-21h]
  __int128 v20; // [rsp+B0h] [rbp-19h]
  _DWORD v21[10]; // [rsp+C0h] [rbp-9h] BYREF

  *a6 = 0LL;
  v8 = 3;
  if ( *a4 != 1 )
    v8 = 5;
  RtlInitUnicodeString(&DestinationString, SourceString);
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v9 = 0;
  UnicodeString.Buffer = 0LL;
  if ( DestinationString.Length > 1u )
    v9 = SourceString[((unsigned __int64)DestinationString.Length >> 1) - 1] == 92;
  v10 = sub_180025F70(0, DestinationString.Buffer, (unsigned int)&UnicodeString, 0, 0LL);
  if ( v10 >= 0 )
  {
    v17 = 0LL;
    v16 = 48;
    v19 = 64;
    p_UnicodeString = &UnicodeString;
    v20 = 0LL;
    v10 = ZwCreateFile(&DestinationString, 3222274176LL, &v16, v14, 0LL, 128, 5, v8, 104, 0LL, 0);
    if ( v10 >= 0 )
    {
      if ( *a4 == 1 && v15 == 2 )
        *a4 = 0;
      if ( !v9 )
      {
        memset(v21, 0, sizeof(v21));
        v21[8] = 0x2000;
        v10 = ZwSetInformationFile(*(_QWORD *)&DestinationString.Length, v14, v21, 40LL, 4);
      }
      *a6 = *(_QWORD *)&DestinationString.Length;
    }
  }
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v10;
}
