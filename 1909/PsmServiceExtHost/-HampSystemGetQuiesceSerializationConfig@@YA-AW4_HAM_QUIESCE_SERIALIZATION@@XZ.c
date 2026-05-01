/*
 * XREFs of ?HampSystemGetQuiesceSerializationConfig@@YA?AW4_HAM_QUIESCE_SERIALIZATION@@XZ @ 0x180042970
 * Callers:
 *     ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180042704 (-HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     RtlQueryResourcePolicy @ 0x180042A80 (RtlQueryResourcePolicy.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HampSystemGetQuiesceSerializationConfig(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  const struct _TlgProvider_t *v3; // rcx
  char v4; // r9
  char v6; // [rsp+30h] [rbp-39h] BYREF
  char v7; // [rsp+31h] [rbp-38h] BYREF
  __int64 v8; // [rsp+38h] [rbp-31h] BYREF
  int v9; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  int *v11; // [rsp+70h] [rbp+7h]
  __int64 v12; // [rsp+78h] [rbp+Fh]
  char *v13; // [rsp+80h] [rbp+17h]
  __int64 v14; // [rsp+88h] [rbp+1Fh]
  char *v15; // [rsp+90h] [rbp+27h]
  __int64 v16; // [rsp+98h] [rbp+2Fh]
  __int64 *v17; // [rsp+A0h] [rbp+37h]
  __int64 v18; // [rsp+A8h] [rbp+3Fh]

  LODWORD(v8) = 0;
  v2 = 2;
  v9 = RtlQueryResourcePolicy(2LL, a2, &v8);
  if ( v9 < 0 )
  {
    v2 = 0;
  }
  else if ( (int)v8 > 10 )
  {
    v2 = 0;
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 0x400000000008uLL) )
  {
    v12 = 4LL;
    v11 = &v9;
    v13 = &v6;
    v15 = &v7;
    v17 = &v8;
    v6 = v2;
    v14 = 1LL;
    v7 = v4;
    v16 = 1LL;
    v8 = 0x1000000LL;
    v18 = 8LL;
    TlgWrite(v3, &unk_18009681F, 0LL, 0LL, 6u, &pData);
  }
  return v2;
}
