/*
 * XREFs of ?HandleScreenClippingPendingShowReturn@CScreenClippingExperienceManager@@AEAAXXZ @ 0x1801AED10
 * Callers:
 *     ?OnActionCenterVisibilityChanged@CScreenClippingExperienceManager@@AEAAXE@Z @ 0x1801AF98C (-OnActionCenterVisibilityChanged@CScreenClippingExperienceManager@@AEAAXE@Z.c)
 *     ?ScreenClippingPendingShowTimerCallback@CScreenClippingExperienceManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1801B2570 (-ScreenClippingPendingShowTimerCallback@CScreenClippingExperienceManager@@CAXPEAU_TP_CALLBACK_IN.c)
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1801B28D0 (-ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@She.c)
 *     ?UnsubscribeFromActionCenterVisibilityChanged@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801B396C (-UnsubscribeFromActionCenterVisibilityChanged@CScreenClippingExperienceManager@@AEAAJXZ.c)
 */

void __fastcall CScreenClippingExperienceManager::HandleScreenClippingPendingShowReturn(
        CScreenClippingExperienceManager *this)
{
  const struct _TlgProvider_t *v2; // rcx
  int v3; // eax
  WINBOOL v4; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v5; // [rsp+38h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v5 = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  v2 = (const struct _TlgProvider_t *)v5[1];
  if ( *(_DWORD *)v2 > 5u )
    TlgWrite(v2, &unk_1804C327B, 0LL, 0LL, 2u, &pData);
  if ( *((_BYTE *)this + 432) )
  {
    *((_BYTE *)this + 432) = 0;
    v3 = CScreenClippingExperienceManager::ShowExperience(this, *((unsigned int *)this + 115));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x586,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
    CScreenClippingExperienceManager::UnsubscribeFromActionCenterVisibilityChanged(this);
  }
}
