/*
 * XREFs of ?SetCursorImage@Cursor@InputTraceLogging@@SAX_K_N@Z @ 0x1800CDA3C
 * Callers:
 *     ?SetVisible@SystemCursorShape@@QEAAJ_N@Z @ 0x1800CDD78 (-SetVisible@SystemCursorShape@@QEAAJ_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180014BAC (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x180052EFC (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?ShapeIdToString@InputTraceLogging@@CAPEBDTSystemCursorShapeIdDetails@@@Z @ 0x1800CDDD8 (-ShapeIdToString@InputTraceLogging@@CAPEBDTSystemCursorShapeIdDetails@@@Z.c)
 */

void __fastcall InputTraceLogging::Cursor::SetCursorImage(__int64 a1, unsigned __int8 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  const CHAR *v5; // rax
  __int64 v6; // r11
  TraceLoggingHProvider v7; // r10
  int v8; // [rsp+30h] [rbp-39h] BYREF
  __int64 v9; // [rsp+38h] [rbp-31h] BYREF
  __int64 v10; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v12; // [rsp+70h] [rbp+7h]
  __int64 v13; // [rsp+78h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+17h] BYREF
  char *v15; // [rsp+90h] [rbp+27h]
  __int64 v16; // [rsp+98h] [rbp+2Fh]
  int *v17; // [rsp+A0h] [rbp+37h]
  __int64 v18; // [rsp+A8h] [rbp+3Fh]

  v9 = a1;
  v3 = wil::details::static_lazy<InputTraceLogging>::get(
         a1,
         lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v3[1] > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v3[1], 8uLL) )
    {
      v12 = &v9;
      v13 = v4;
      v5 = (const CHAR *)InputTraceLogging::ShapeIdToString(v9);
      TlgCreateSz(&pDesc, v5);
      v15 = (char *)&v10 + 2;
      v8 = a2;
      v17 = &v8;
      v10 = v9;
      v16 = v6;
      v18 = v6;
      TlgWrite(v7, &unk_18019DE57, 0LL, 0LL, 6u, &pData);
    }
  }
}
