/*
 * XREFs of ??$InfraFailure@AEA_NAEAJ@StartMenuExperienceTelemetry@@SAXAEA_NAEAJ@Z @ 0x18016922C
 * Callers:
 *     ?OnApplicationActivatedForLaunch@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x18016A5C0 (-OnApplicationActivatedForLaunch@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

BOOLEAN __fastcall StartMenuExperienceTelemetry::InfraFailure<bool &,long &>(unsigned __int8 *a1, __int64 a2)
{
  BOOLEAN result; // al
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  int v7; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-9h] BYREF
  int v9; // [rsp+3Ch] [rbp-5h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  int *v12; // [rsp+68h] [rbp+27h]
  int v13; // [rsp+70h] [rbp+2Fh]
  int v14; // [rsp+74h] [rbp+33h]
  __int64 v15; // [rsp+78h] [rbp+37h]
  int v16; // [rsp+80h] [rbp+3Fh]
  int v17; // [rsp+84h] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_18050F9B0;
    qword_18050F9B0[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F9C8 = (struct _TlgProvider_t *)&`StartMenuExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b070bc67e2c9c03cf4cc93f221b7b97d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F9B0, qword_18050F9C8);
    InitOnceComplete(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F9B0);
  }
  result = (unsigned __int8)Context;
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    result = TlgKeywordOn(v5, 0x200000000000uLL);
    if ( result )
    {
      v7 = *a1;
      v14 = 0;
      v17 = 0;
      v9 = v7;
      v12 = &v9;
      v13 = 4;
      v15 = a2;
      v16 = 4;
      return TlgWrite(v6, &unk_180450234, 0LL, 0LL, 4u, &pData);
    }
  }
  return result;
}
