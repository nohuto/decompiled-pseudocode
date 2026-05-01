/*
 * XREFs of ??$FrameWindowChanged@AEAIAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x18023E498
 * Callers:
 *     ?SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0000_0001_0001@@@Z @ 0x180243D10 (-SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

TLG_STATUS __fastcall ViewManagerInteropTraceLogging::FrameWindowChanged<unsigned int &,HWND__ * &,unsigned long const &,unsigned long &>(
        int *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v9; // rcx
  int v10; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-49h] BYREF
  int v12; // [rsp+3Ch] [rbp-45h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-41h] BYREF
  __int64 v14; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-29h] BYREF
  int *v16; // [rsp+78h] [rbp-9h]
  int v17; // [rsp+80h] [rbp-1h]
  int v18; // [rsp+84h] [rbp+3h]
  __int64 *v19; // [rsp+88h] [rbp+7h]
  int v20; // [rsp+90h] [rbp+Fh]
  int v21; // [rsp+94h] [rbp+13h]
  __int64 v22; // [rsp+98h] [rbp+17h]
  int v23; // [rsp+A0h] [rbp+1Fh]
  int v24; // [rsp+A4h] [rbp+23h]
  __int64 v25; // [rsp+A8h] [rbp+27h]
  int v26; // [rsp+B0h] [rbp+2Fh]
  int v27; // [rsp+B4h] [rbp+33h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18050FB08;
    qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
    qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050FB08, qword_18050FB20);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18050FB08);
  }
  result = (int)Context;
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 5u )
  {
    v10 = *a1;
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v12 = v10;
    v16 = &v12;
    v14 = *a2;
    v19 = &v14;
    v17 = 4;
    v20 = 8;
    v22 = a3;
    v23 = 4;
    v25 = a4;
    v26 = 4;
    return TlgWrite(v9, &unk_18045EF6E, 0LL, 0LL, 6u, &pData);
  }
  return result;
}
