/*
 * XREFs of ?AddShapeToCursor@Cursor@InputTraceLogging@@SAXPEBX_K@Z @ 0x1800CBD2C
 * Callers:
 *     ?AddShape@SystemCursor@@QEAAJV?$shared_ptr@VSystemCursorShape@@@std@@@Z @ 0x1800CBBE8 (-AddShape@SystemCursor@@QEAAJV-$shared_ptr@VSystemCursorShape@@@std@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180014BAC (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x180052EFC (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?ShapeIdToString@InputTraceLogging@@CAPEBDTSystemCursorShapeIdDetails@@@Z @ 0x1800CDDD8 (-ShapeIdToString@InputTraceLogging@@CAPEBDTSystemCursorShapeIdDetails@@@Z.c)
 */

void __fastcall InputTraceLogging::Cursor::AddShapeToCursor(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  const CHAR *v4; // rax
  TraceLoggingHProvider v5; // r10
  __int64 v6; // [rsp+30h] [rbp-29h] BYREF
  __int64 v7; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  __int64 *v9; // [rsp+60h] [rbp+7h]
  __int64 v10; // [rsp+68h] [rbp+Fh]
  __int64 *v11; // [rsp+70h] [rbp+17h]
  __int64 v12; // [rsp+78h] [rbp+1Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+27h] BYREF
  char *v14; // [rsp+90h] [rbp+37h]
  __int64 v15; // [rsp+98h] [rbp+3Fh]
  __int64 v16; // [rsp+C0h] [rbp+67h] BYREF

  v16 = a1;
  v6 = a2;
  v2 = wil::details::static_lazy<InputTraceLogging>::get(
         a1,
         lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v2[1] > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v2[1], 8uLL) )
    {
      v9 = &v16;
      v11 = &v6;
      v10 = v3;
      v12 = v3;
      v4 = (const CHAR *)InputTraceLogging::ShapeIdToString(v6);
      TlgCreateSz(&pDesc, v4);
      v14 = (char *)&v7 + 2;
      v7 = v6;
      v15 = 4LL;
      TlgWrite(v5, &unk_18019DEE5, 0LL, 0LL, 6u, &pData);
    }
  }
}
