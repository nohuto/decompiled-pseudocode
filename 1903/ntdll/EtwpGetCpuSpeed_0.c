/*
 * XREFs of EtwpGetCpuSpeed_0 @ 0x18000434C
 * Callers:
 *     EtwpGetCpuSpeed @ 0x180004340 (EtwpGetCpuSpeed.c)
 *     sub_180004BA8 @ 0x180004BA8 (sub_180004BA8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 */

__int64 __fastcall EtwpGetCpuSpeed_0(_DWORD *a1)
{
  __int64 result; // rax
  int v3; // ebx
  __int64 v4; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v5[8]; // [rsp+38h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING v7; // [rsp+50h] [rbp-9h] BYREF
  int v8; // [rsp+60h] [rbp+7h] BYREF
  __int64 v9; // [rsp+68h] [rbp+Fh]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp+17h]
  int v11; // [rsp+78h] [rbp+1Fh]
  __int128 v12; // [rsp+80h] [rbp+27h]
  _BYTE v13[12]; // [rsp+90h] [rbp+37h] BYREF
  int v14; // [rsp+9Ch] [rbp+43h]

  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0");
  v9 = 0LL;
  p_DestinationString = &DestinationString;
  v8 = 48;
  v11 = 64;
  v12 = 0LL;
  result = ZwOpenKey(&v4, 131097LL, &v8);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&v7, L"~MHz");
    v3 = ZwQueryValueKey(v4, &v7, 2LL, v13, 16, v5);
    if ( v3 >= 0 )
      *a1 = v14;
    ZwClose(v4);
    return (unsigned int)v3;
  }
  return result;
}
