/*
 * XREFs of ?UpdateDpiScale@Cursor@InputTraceLogging@@SAX_KH@Z @ 0x180144D78
 * Callers:
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x1800071F0 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ?CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z @ 0x1800108B8 (-CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180014BAC (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall InputTraceLogging::Cursor::UpdateDpiScale(__int64 a1, int a2)
{
  const struct _TlgProvider_t *v2; // rcx
  int v3; // edx
  const struct _TlgProvider_t *v4; // rcx
  UINT32 cData; // r9d
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v7; // [rsp+50h] [rbp-38h]
  int v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+5Ch] [rbp-2Ch]
  int *v10; // [rsp+60h] [rbp-28h]
  UINT32 v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]
  __int64 v13; // [rsp+90h] [rbp+8h] BYREF
  int v14; // [rsp+98h] [rbp+10h] BYREF

  v14 = a2;
  v13 = a1;
  v2 = (const struct _TlgProvider_t *)wil::details::static_lazy<InputTraceLogging>::get(
                                        a1,
                                        lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v2 > 4u )
  {
    if ( TlgKeywordOn(v2, 8uLL) )
    {
      v9 = 0;
      v12 = 0;
      v7 = &v13;
      v10 = &v14;
      v8 = v3;
      v11 = cData;
      TlgWrite(v4, &unk_1801A1962, 0LL, 0LL, cData, &pData);
    }
  }
}
