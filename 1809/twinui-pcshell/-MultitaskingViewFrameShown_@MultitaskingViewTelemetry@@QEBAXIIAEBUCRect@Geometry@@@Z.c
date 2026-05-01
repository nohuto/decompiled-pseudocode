/*
 * XREFs of ?MultitaskingViewFrameShown_@MultitaskingViewTelemetry@@QEBAXIIAEBUCRect@Geometry@@@Z @ 0x1802FBA08
 * Callers:
 *     ?Show@CMultitaskingViewFrame@@UEAAJXZ @ 0x1802FC4B0 (-Show@CMultitaskingViewFrame@@UEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800EB014 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 */

void __fastcall MultitaskingViewTelemetry::MultitaskingViewFrameShown_(
        MultitaskingViewTelemetry *this,
        int a2,
        int a3,
        const struct Geometry::CRect *a4)
{
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-49h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  int *v10; // [rsp+68h] [rbp-19h]
  int v11; // [rsp+70h] [rbp-11h]
  int v12; // [rsp+74h] [rbp-Dh]
  int *v13; // [rsp+78h] [rbp-9h]
  int v14; // [rsp+80h] [rbp-1h]
  int v15; // [rsp+84h] [rbp+3h]
  const struct Geometry::CRect *v16; // [rsp+88h] [rbp+7h]
  int v17; // [rsp+90h] [rbp+Fh]
  int v18; // [rsp+94h] [rbp+13h]
  char *v19; // [rsp+98h] [rbp+17h]
  int v20; // [rsp+A0h] [rbp+1Fh]
  int v21; // [rsp+A4h] [rbp+23h]
  char *v22; // [rsp+A8h] [rbp+27h]
  int v23; // [rsp+B0h] [rbp+2Fh]
  int v24; // [rsp+B4h] [rbp+33h]
  char *v25; // [rsp+B8h] [rbp+37h]
  int v26; // [rsp+C0h] [rbp+3Fh]
  int v27; // [rsp+C4h] [rbp+43h]
  int v28; // [rsp+F0h] [rbp+6Fh] BYREF
  int v29; // [rsp+F8h] [rbp+77h] BYREF

  v29 = a3;
  v28 = a2;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18050F8E8;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_18050F8E8);
    qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
    qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
  }
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    if ( TlgKeywordOn(v5, 0x200000000000uLL) )
    {
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v10 = &v28;
      v13 = &v29;
      v19 = (char *)a4 + 4;
      v22 = (char *)a4 + 8;
      v25 = (char *)a4 + 12;
      v11 = 4;
      v14 = 4;
      v16 = a4;
      v17 = 4;
      v20 = 4;
      v23 = 4;
      v26 = 4;
      TlgWrite(v6, &unk_180464CED, 0LL, 0LL, 8u, &pData);
    }
  }
}
