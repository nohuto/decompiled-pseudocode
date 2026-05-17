/*
 * XREFs of sub_18005D960 @ 0x18005D960
 * Callers:
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18005CB10 (RtlQueryEnvironmentVariable_U.c)
 *     sub_18005D8C0 @ 0x18005D8C0 (sub_18005D8C0.c)
 *     RtlSetThreadErrorMode @ 0x18005DAE0 (RtlSetThreadErrorMode.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenFile @ 0x18009CD40 (ZwOpenFile.c)
 */

__int64 __fastcall sub_18005D960(WCHAR a1)
{
  int v2; // ebx
  __int64 v4; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v5; // [rsp+40h] [rbp-C8h]
  __int64 v6; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v7; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v9[3]; // [rsp+68h] [rbp-A0h] BYREF
  int v10; // [rsp+80h] [rbp-88h]
  __int128 v11; // [rsp+88h] [rbp-80h]
  _BYTE v12[16]; // [rsp+98h] [rbp-70h] BYREF
  WCHAR SourceString[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v14; // [rsp+ACh] [rbp-5Ch]
  __int64 v15; // [rsp+B8h] [rbp-50h] BYREF
  char v16; // [rsp+C0h] [rbp-48h] BYREF

  SourceString[1] = a1;
  SourceString[0] = 61;
  v14 = 58;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v15 = 0x5C003F003F005CLL;
  LODWORD(v4) = 34078720;
  v5 = (__int64 *)&v16;
  if ( (int)RtlQueryEnvironmentVariable_U(0LL, (wchar_t **)&DestinationString, (__int64)&v4) < 0 )
  {
    *(_WORD *)v5 = a1;
    *((_WORD *)v5 + 1) = 58;
    *((_WORD *)v5 + 2) = 92;
    *((_WORD *)v5 + 3) = 0;
    LOWORD(v4) = 6;
    return sub_18005D8C0(a1);
  }
  LOWORD(v4) = v4 + 8;
  LODWORD(v9[0]) = 48;
  WORD1(v4) = 544;
  v9[1] = 0LL;
  v5 = &v15;
  v10 = 64;
  v9[2] = &v4;
  v11 = 0LL;
  RtlSetThreadErrorMode(16LL, &v6);
  v2 = ZwOpenFile(&v7, 0x100000LL, v9, v12, 3, 33);
  RtlSetThreadErrorMode((unsigned int)v6, 0LL);
  if ( v2 < 0 )
    return sub_18005D8C0(a1);
  return ZwClose(v7);
}
