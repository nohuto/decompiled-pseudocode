/*
 * XREFs of ?HandleUnknownProtocolActivation@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x1801AEE48
 * Callers:
 *     ?HandleProtocolActivation@CScreenClippingExperienceManager@@EEAAJW4ScreenClipProtocolActivationSourceType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1801AEB40 (-HandleProtocolActivation@CScreenClippingExperienceManager@@EEAAJW4ScreenClipProtocolActivationS.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::ScreenClipOpenUrlParser @ 0x1801ABEE8 (_anonymous_namespace_--ScreenClipOpenUrlParser--ScreenClipOpenUrlParser.c)
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::GetTimeDelayInSeconds @ 0x1801AD6AC (_anonymous_namespace_--ScreenClipOpenUrlParser--GetTimeDelayInSeconds.c)
 *     ?HandlePendingShowExperience@CScreenClippingExperienceManager@@AEAAJAEA_N@Z @ 0x1801AE9D4 (-HandlePendingShowExperience@CScreenClippingExperienceManager@@AEAAJAEA_N@Z.c)
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::HasTimeDelay @ 0x1801AF28C (_anonymous_namespace_--ScreenClipOpenUrlParser--HasTimeDelay.c)
 *     ?ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1801B28D0 (-ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@She.c)
 *     ?StartScreenClippingPendingShowTimer@CScreenClippingExperienceManager@@AEAAXKW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1801B2FD4 (-StartScreenClippingPendingShowTimer@CScreenClippingExperienceManager@@AEAAXKW4ScreenClipInvocat.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::HandleUnknownProtocolActivation(
        CScreenClippingExperienceManager *this,
        HSTRING string)
{
  int v3; // ebx
  PCWSTR StringRawBuffer; // rax
  const WCHAR *v5; // rsi
  TraceLoggingHProvider v6; // r10
  char v7; // al
  const struct _TlgProvider_t *v8; // rcx
  __int64 v9; // rdx
  const struct _TlgProvider_t *v10; // rcx
  const struct _TlgProvider_t *v12; // rcx
  bool v13; // [rsp+30h] [rbp-D0h] BYREF
  char HasTimeDelay; // [rsp+31h] [rbp-CFh] BYREF
  char v15; // [rsp+32h] [rbp-CEh] BYREF
  int TimeDelayInSeconds; // [rsp+34h] [rbp-CCh] BYREF
  UINT32 length; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-C4h] BYREF
  WINBOOL v19; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v20; // [rsp+44h] [rbp-BCh] BYREF
  WINBOOL v21; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID v23; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID v24; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID v25; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v26[32]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR v27; // [rsp+90h] [rbp-70h] BYREF
  char *p_HasTimeDelay; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  int *p_TimeDelayInSeconds; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  char *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR v36; // [rsp+110h] [rbp+10h] BYREF
  EVENT_DATA_DESCRIPTOR v37; // [rsp+130h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  length = 0;
  v3 = -2147024809;
  StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
  v5 = L"[EMPTY]";
  Context = 0LL;
  if ( StringRawBuffer )
    v5 = StringRawBuffer;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    TlgCreateWsz(&pDesc, v5);
    TlgWrite(v6, &unk_1804C3B9B, 0LL, 0LL, 3u, &pData);
  }
  if ( !length )
    return (unsigned int)v3;
  anonymous_namespace_::ScreenClipOpenUrlParser::ScreenClipOpenUrlParser((__int64)v26);
  HasTimeDelay = anonymous_namespace_::ScreenClipOpenUrlParser::HasTimeDelay(v26);
  TimeDelayInSeconds = anonymous_namespace_::ScreenClipOpenUrlParser::GetTimeDelayInSeconds((__int64)v26);
  if ( !*((_BYTE *)this + 432) || (v7 = 1, *((_DWORD *)this + 115) != 5) )
    v7 = 0;
  v15 = v7;
  v23 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v19, &v23) && v19 )
  {
    v23 = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  v8 = (const struct _TlgProvider_t *)*((_QWORD *)v23 + 1);
  if ( *(_DWORD *)v8 > 5u )
  {
    v29 = 1LL;
    p_HasTimeDelay = &HasTimeDelay;
    p_TimeDelayInSeconds = &TimeDelayInSeconds;
    v32 = &v15;
    v31 = 4LL;
    v33 = 1LL;
    TlgWrite(v8, &unk_1804C3BF7, 0LL, 0LL, 5u, &v27);
  }
  v13 = 0;
  v3 = CScreenClippingExperienceManager::HandlePendingShowExperience(this, &v13);
  if ( v3 < 0 )
  {
    v9 = 936LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  if ( !v13 )
  {
    if ( HasTimeDelay && TimeDelayInSeconds )
    {
      v25 = 0LL;
      if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v21, &v25) && v21 )
      {
        v25 = qword_180599CD0;
        qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
        qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
        InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
      }
      v12 = (const struct _TlgProvider_t *)*((_QWORD *)v25 + 1);
      if ( *(_DWORD *)v12 > 5u )
        TlgWrite(v12, &unk_1804C39E5, 0LL, 0LL, 2u, &v37);
      CScreenClippingExperienceManager::StartScreenClippingPendingShowTimer(
        this,
        (unsigned int)(1000 * TimeDelayInSeconds),
        0LL);
    }
    else
    {
      v3 = CScreenClippingExperienceManager::ShowExperience(this, 0LL);
      if ( v3 < 0 )
      {
        v9 = 955LL;
        goto LABEL_19;
      }
    }
    return 0;
  }
  v24 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v20, &v24) && v20 )
  {
    v24 = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  v10 = (const struct _TlgProvider_t *)*((_QWORD *)v24 + 1);
  if ( *(_DWORD *)v10 > 5u )
    TlgWrite(v10, &unk_1804C3981, 0LL, 0LL, 2u, &v36);
  return 0LL;
}
