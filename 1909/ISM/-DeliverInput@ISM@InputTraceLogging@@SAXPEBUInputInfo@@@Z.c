/*
 * XREFs of ?DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x1800C7028
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800C6D80 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800C7960 (-DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180014BAC (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x180052EFC (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x180092698 (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 */

void __fastcall InputTraceLogging::ISM::DeliverInput(const struct InputInfo *a1)
{
  __int64 v1; // rdi
  _QWORD *v3; // rax
  __int64 v4; // rax
  int v5; // ecx
  const char *v6; // rax
  int v7; // ecx
  int v8; // r9d
  TraceLoggingHProvider v9; // r10
  int v10; // [rsp+30h] [rbp-39h] BYREF
  __int64 v11; // [rsp+38h] [rbp-31h] BYREF
  __int64 v12; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v14; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+17h] BYREF
  int *v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+98h] [rbp+2Fh]
  int v20; // [rsp+9Ch] [rbp+33h]
  __int64 *v21; // [rsp+A0h] [rbp+37h]
  int v22; // [rsp+A8h] [rbp+3Fh]
  int v23; // [rsp+ACh] [rbp+43h]

  v1 = 0LL;
  if ( (*(_BYTE *)a1 & 0x3B) != 0 )
    v1 = *((_QWORD *)a1 + 9);
  v3 = wil::details::static_lazy<InputTraceLogging>::get(
         (__int64)a1,
         lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v3[1] > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v3[1], 0x200uLL) )
    {
      v4 = *((_QWORD *)a1 + 2);
      v5 = *(_DWORD *)a1;
      v16 = 0;
      v11 = v4;
      v14 = &v11;
      v15 = 8;
      v6 = InputTraceLogging::InputTypeToString(v5);
      TlgCreateSz(&pDesc, v6);
      v20 = 0;
      v7 = *((_DWORD *)a1 + 1);
      v23 = 0;
      v18 = &v10;
      v21 = &v12;
      v10 = v7;
      v19 = 4;
      v12 = v1;
      v22 = v8;
      TlgWrite(v9, &unk_18019DD37, 0LL, 0LL, 6u, &pData);
    }
  }
}
