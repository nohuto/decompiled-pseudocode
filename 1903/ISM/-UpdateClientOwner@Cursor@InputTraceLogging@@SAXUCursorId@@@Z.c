/*
 * XREFs of ?UpdateClientOwner@Cursor@InputTraceLogging@@SAXUCursorId@@@Z @ 0x180144C5C
 * Callers:
 *     ?UpdateClientOwner@DWMCursor@@UEAAJXZ @ 0x180144D00 (-UpdateClientOwner@DWMCursor@@UEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180014C3C (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

char __fastcall InputTraceLogging::Cursor::UpdateClientOwner(__int64 a1)
{
  _QWORD *v2; // rax
  const struct _TlgProvider_t *v3; // rcx
  int v4; // edx
  const struct _TlgProvider_t *v5; // rcx
  UINT32 cData; // r9d
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  __int64 v9; // [rsp+50h] [rbp-38h]
  UINT32 v10; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+5Ch] [rbp-2Ch]
  __int64 v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+68h] [rbp-20h]
  int v14; // [rsp+6Ch] [rbp-1Ch]

  v2 = wil::details::static_lazy<InputTraceLogging>::get(
         a1,
         lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v3 = (const struct _TlgProvider_t *)v2[1];
  if ( *(_DWORD *)v3 > 4u )
  {
    LOBYTE(v2) = TlgKeywordOn(v3, 8uLL);
    if ( (_BYTE)v2 )
    {
      v11 = 0;
      v14 = 0;
      v12 = a1 + 8;
      v9 = a1;
      v10 = cData;
      v13 = v4;
      LOBYTE(v2) = TlgWrite(v5, &unk_1801A1A96, 0LL, 0LL, cData, &pData);
    }
  }
  return (char)v2;
}
