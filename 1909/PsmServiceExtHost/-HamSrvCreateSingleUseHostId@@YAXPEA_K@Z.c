/*
 * XREFs of ?HamSrvCreateSingleUseHostId@@YAXPEA_K@Z @ 0x180073C50
 * Callers:
 *     HamRpcSrvCreateSingleUseHostId @ 0x180079E50 (HamRpcSrvCreateSingleUseHostId.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x18001096C (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall HamSrvCreateSingleUseHostId(unsigned __int64 *a1)
{
  __int64 v1; // rax
  __int64 *v2; // r9
  int v3; // edx
  const struct _TlgProvider_t *v4; // rcx
  __int64 v5; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v1 = HamObjectIdGenerate(0);
  *v2 = v1;
  if ( dword_1800AB2C0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
    {
      v9 = 0;
      v7 = v5;
      v8 = v3;
      TlgWrite(v4, &unk_180097B0A, 0LL, 0LL, 3u, &pData);
    }
  }
}
