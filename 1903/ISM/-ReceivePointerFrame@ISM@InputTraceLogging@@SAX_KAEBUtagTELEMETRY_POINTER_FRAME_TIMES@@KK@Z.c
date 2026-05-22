/*
 * XREFs of ?ReceivePointerFrame@ISM@InputTraceLogging@@SAX_KAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@KK@Z @ 0x1800BE9F4
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800BC7B4 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180014C3C (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

void __fastcall InputTraceLogging::ISM::ReceivePointerFrame(
        __int64 a1,
        const struct tagTELEMETRY_POINTER_FRAME_TIMES *a2,
        int a3,
        int a4)
{
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // [rsp+38h] [rbp-79h] BYREF
  __int64 v10; // [rsp+40h] [rbp-71h] BYREF
  __int64 v11; // [rsp+48h] [rbp-69h] BYREF
  __int64 v12; // [rsp+50h] [rbp-61h] BYREF
  __int64 v13; // [rsp+58h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-49h] BYREF
  __int64 *v15; // [rsp+88h] [rbp-29h]
  __int64 v16; // [rsp+90h] [rbp-21h]
  __int64 *v17; // [rsp+98h] [rbp-19h]
  __int64 v18; // [rsp+A0h] [rbp-11h]
  __int64 *v19; // [rsp+A8h] [rbp-9h]
  __int64 v20; // [rsp+B0h] [rbp-1h]
  __int64 *v21; // [rsp+B8h] [rbp+7h]
  __int64 v22; // [rsp+C0h] [rbp+Fh]
  __int64 *v23; // [rsp+C8h] [rbp+17h]
  __int64 v24; // [rsp+D0h] [rbp+1Fh]
  int *v25; // [rsp+D8h] [rbp+27h]
  __int64 v26; // [rsp+E0h] [rbp+2Fh]
  int *v27; // [rsp+E8h] [rbp+37h]
  __int64 v28; // [rsp+F0h] [rbp+3Fh]
  int v29; // [rsp+128h] [rbp+77h] BYREF
  int v30; // [rsp+130h] [rbp+7Fh] BYREF

  v30 = a4;
  v29 = a3;
  v6 = (const struct _TlgProvider_t *)wil::details::static_lazy<InputTraceLogging>::get(
                                        a1,
                                        lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v6 > 4u )
  {
    if ( TlgKeywordOn(v6, 0x200uLL) )
    {
      v9 = a1;
      v15 = &v9;
      v10 = *(_QWORD *)a2;
      v17 = &v10;
      v11 = *((_QWORD *)a2 + 1);
      v19 = &v11;
      v12 = *((_QWORD *)a2 + 2);
      v21 = &v12;
      v13 = *((_QWORD *)a2 + 3);
      v23 = &v13;
      v25 = &v29;
      v27 = &v30;
      v16 = 8LL;
      v18 = 8LL;
      v20 = 8LL;
      v22 = 8LL;
      v24 = 8LL;
      v26 = v8;
      v28 = v8;
      TlgWrite(v7, &unk_18019D8A4, 0LL, 0LL, 9u, &pData);
    }
  }
}
