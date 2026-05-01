/*
 * XREFs of ?SwitchItemInvoked_@MultitaskingViewTelemetry@@QEBAX_KI@Z @ 0x18031AAC8
 * Callers:
 *     ?InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z @ 0x18031A960 (-InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800EB014 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 */

void __fastcall MultitaskingViewTelemetry::SwitchItemInvoked_(MultitaskingViewTelemetry *this, __int64 a2, int a3)
{
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-9h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  __int64 *v8; // [rsp+68h] [rbp+27h]
  int v9; // [rsp+70h] [rbp+2Fh]
  int v10; // [rsp+74h] [rbp+33h]
  int *v11; // [rsp+78h] [rbp+37h]
  int v12; // [rsp+80h] [rbp+3Fh]
  int v13; // [rsp+84h] [rbp+43h]
  __int64 v14; // [rsp+B0h] [rbp+6Fh] BYREF
  int v15; // [rsp+B8h] [rbp+77h] BYREF

  v15 = a3;
  v14 = a2;
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
  v3 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v3 > 5u )
  {
    if ( TlgKeywordOn(v3, 0x400000000000uLL) )
    {
      v10 = 0;
      v13 = 0;
      v8 = &v14;
      v11 = &v15;
      v9 = 8;
      v12 = 4;
      TlgWrite(v4, &unk_180465005, 0LL, 0LL, 4u, &pData);
    }
  }
}
