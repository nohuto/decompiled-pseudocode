/*
 * XREFs of ?HandleOpenFromActionCenter@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801ADFA0
 * Callers:
 *     ?HandleProtocolActivation@CScreenClippingExperienceManager@@EEAAJW4ScreenClipProtocolActivationSourceType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1801AEB40 (-HandleProtocolActivation@CScreenClippingExperienceManager@@EEAAJW4ScreenClipProtocolActivationS.c)
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?HandlePendingShowExperience@CScreenClippingExperienceManager@@AEAAJAEA_N@Z @ 0x1801AE9D4 (-HandlePendingShowExperience@CScreenClippingExperienceManager@@AEAAJAEA_N@Z.c)
 *     ?IsActionCenterOpen@CScreenClippingExperienceManager@@AEAA_NXZ @ 0x1801AF390 (-IsActionCenterOpen@CScreenClippingExperienceManager@@AEAA_NXZ.c)
 *     ?ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1801B28D0 (-ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@She.c)
 *     ?StartClosingActionCenterAndOpenScreenClipping@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801B2E20 (-StartClosingActionCenterAndOpenScreenClipping@CScreenClippingExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::HandleOpenFromActionCenter(CScreenClippingExperienceManager *this)
{
  const struct _TlgProvider_t *v2; // rcx
  int started; // ebx
  __int64 v4; // rdx
  const struct _TlgProvider_t *v6; // rcx
  bool v7; // [rsp+30h] [rbp-40h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-3Ch] BYREF
  LPVOID Context; // [rsp+38h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  Context = 0LL;
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
  v2 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v2 > 5u )
    TlgWrite(v2, &unk_1804C372B, 0LL, 0LL, 2u, &pData);
  if ( CScreenClippingExperienceManager::IsActionCenterOpen(this) )
  {
    started = CScreenClippingExperienceManager::StartClosingActionCenterAndOpenScreenClipping(this);
    if ( started < 0 )
    {
      v4 = 1225LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)(unsigned int)started);
      return (unsigned int)started;
    }
  }
  else
  {
    v7 = 0;
    started = CScreenClippingExperienceManager::HandlePendingShowExperience(this, &v7);
    if ( started < 0 )
    {
      v4 = 1230LL;
      goto LABEL_9;
    }
    if ( v7 )
    {
      Context = 0LL;
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
      v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
      if ( *(_DWORD *)v6 > 5u )
        TlgWrite(v6, &unk_1804C356F, 0LL, 0LL, 2u, &pData);
    }
    else
    {
      started = CScreenClippingExperienceManager::ShowExperience(this, 2LL);
      if ( started < 0 )
      {
        v4 = 1238LL;
        goto LABEL_9;
      }
    }
  }
  return 0LL;
}
