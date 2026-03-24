/*
 * XREFs of MouClassTraceLoggingPrivilegeNotFoundForCreate @ 0x1C0004248
 * Callers:
 *     MouseClassCreate @ 0x1C00012F0 (MouseClassCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002900 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C0006B58 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0006B8C (_TlgWrite.c)
 */

void __fastcall MouClassTraceLoggingPrivilegeNotFoundForCreate(const struct _TlgProvider_t *a1, ULONGLONG a2)
{
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  char v5; // [rsp+30h] [rbp-19h] BYREF
  char v6; // [rsp+31h] [rbp-18h] BYREF
  int v7; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v9; // [rsp+60h] [rbp+17h]
  __int64 v10; // [rsp+68h] [rbp+1Fh]
  char *v11; // [rsp+70h] [rbp+27h]
  __int64 v12; // [rsp+78h] [rbp+2Fh]
  char *v13; // [rsp+80h] [rbp+37h]
  __int64 v14; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_1C0009010 > 5 )
  {
    if ( TlgKeywordOn(a1, a2) )
    {
      v7 = (int)v2;
      v9 = &v7;
      v11 = &v5;
      v13 = &v6;
      v5 = (char)v4;
      v6 = (char)v3;
      v10 = 4LL;
      v12 = 1LL;
      v14 = 1LL;
      TlgWrite(v2, &unk_1C0007579, v3, v4, 5u, &pData);
    }
  }
}
