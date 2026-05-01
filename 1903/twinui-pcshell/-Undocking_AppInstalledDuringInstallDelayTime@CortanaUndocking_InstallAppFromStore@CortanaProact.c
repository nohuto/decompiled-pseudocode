/*
 * XREFs of ?Undocking_AppInstalledDuringInstallDelayTime@CortanaUndocking_InstallAppFromStore@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801CBCDC
 * Callers:
 *     _lambda_6beee81bb2061f57cf9eaca4a4fea397_::operator() @ 0x1801C5328 (_lambda_6beee81bb2061f57cf9eaca4a4fea397_--operator().c)
 * Callees:
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore::Undocking_AppInstalledDuringInstallDelayTime(
        CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore *this)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v8; // [rsp+68h] [rbp-18h]
  int v9; // [rsp+70h] [rbp-10h]
  int v10; // [rsp+74h] [rbp-Ch]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180599CF8;
    qword_180599CF8[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599D10 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CF8, qword_180599D10);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_180599CF8);
  }
  v2 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v2 > 5u )
  {
    if ( TlgKeywordOn(v2, 0x400000000000uLL) )
    {
      v10 = 0;
      v8 = &v6;
      v6 = 0x2000000LL;
      v9 = 8;
      TlgWrite(v3, &unk_1804C659D, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 3u, &pData);
    }
  }
}
