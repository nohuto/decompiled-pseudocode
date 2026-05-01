/*
 * XREFs of ?HandlePendingShowExperience@CScreenClippingExperienceManager@@AEAAJAEA_N@Z @ 0x1801AE9D4
 * Callers:
 *     ?HandleOpenFromActionCenter@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801ADFA0 (-HandleOpenFromActionCenter@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x1801AE1C0 (-HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?HandleOpenFromSearchBox@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x1801AE6FC (-HandleOpenFromSearchBox@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?HandleUnknownProtocolActivation@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x1801AEE48 (-HandleUnknownProtocolActivation@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?KillPendingShowTimer@CScreenClippingExperienceManager@@AEAAXXZ @ 0x1801AF428 (-KillPendingShowTimer@CScreenClippingExperienceManager@@AEAAXXZ.c)
 *     ?ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1801B28D0 (-ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@She.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::HandlePendingShowExperience(
        CScreenClippingExperienceManager *this,
        bool *a2)
{
  const struct _TlgProvider_t *v4; // rcx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  int v10; // [rsp+34h] [rbp-4Ch] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  int *v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  *a2 = 0;
  if ( *((_BYTE *)this + 432) )
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
    v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v4 > 5u )
    {
      v5 = *((_DWORD *)this + 115);
      v15 = 0;
      v10 = v5;
      v13 = &v10;
      v14 = 4;
      TlgWrite(v4, &unk_1804C2E48, 0LL, 0LL, 3u, &pData);
    }
    CScreenClippingExperienceManager::KillPendingShowTimer(this);
    *((_BYTE *)this + 432) = 0;
    v6 = CScreenClippingExperienceManager::ShowExperience(this, *((unsigned int *)this + 115));
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x619,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
    *a2 = 1;
  }
  return 0LL;
}
