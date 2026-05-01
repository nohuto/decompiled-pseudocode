/*
 * XREFs of ??$EM_IhmChange@AEAW4IHM_DISPLAY_MODE@@@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEAW4IHM_DISPLAY_MODE@@@Z @ 0x18018405C
 * Callers:
 *     ?OnInputHostChanging@CToastCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x1801877C4 (-OnInputHostChanging@CToastCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

TLG_STATUS __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_IhmChange<enum IHM_DISPLAY_MODE &>(
        int *a1)
{
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v3; // rcx
  int v4; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  int v6; // [rsp+34h] [rbp-4Ch] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  int *v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+6Ch] [rbp-14h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180599CA0;
    qword_180599CA0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CB8 = (struct _TlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CA0, qword_180599CB8);
    InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_180599CA0);
  }
  result = (int)Context;
  v3 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v3 > 5u )
  {
    v4 = *a1;
    v11 = 0;
    v6 = v4;
    v9 = &v6;
    v10 = 4;
    return TlgWrite(v3, &unk_1804BEAD9, 0LL, 0LL, 3u, &pData);
  }
  return result;
}
