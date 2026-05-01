/*
 * XREFs of ?StartClosingActionCenterAndOpenScreenClipping@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801B2E20
 * Callers:
 *     ?HandleOpenFromActionCenter@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801ADFA0 (-HandleOpenFromActionCenter@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetActionCenterBaseExperienceManager@CScreenClippingExperienceManager@@AEAAJAEAV?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1801ACFB4 (-GetActionCenterBaseExperienceManager@CScreenClippingExperienceManager@@AEAAJAEAV-$ComPtr@UIBase.c)
 *     ?SubscribeToActionCenterVisibilityChanged@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801B3154 (-SubscribeToActionCenterVisibilityChanged@CScreenClippingExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenClippingExperienceManager::StartClosingActionCenterAndOpenScreenClipping(
        CScreenClippingExperienceManager *this)
{
  const struct _TlgProvider_t *v2; // rcx
  int ActionCenterBaseExperienceManager; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  bool v7; // [rsp+38h] [rbp-9h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-5h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-1h] BYREF
  __int64 v10[2]; // [rsp+48h] [rbp+7h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+17h] BYREF
  bool *v12; // [rsp+78h] [rbp+37h]
  int v13; // [rsp+80h] [rbp+3Fh]
  int v14; // [rsp+84h] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v10[1] = -2LL;
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
  {
    v7 = *((_BYTE *)this + 432) != 0;
    v12 = &v7;
    v13 = 1;
    v14 = 0;
    TlgWrite(v2, &unk_1804C362A, 0LL, 0LL, 3u, &pData);
  }
  v10[0] = 0LL;
  ActionCenterBaseExperienceManager = CScreenClippingExperienceManager::GetActionCenterBaseExperienceManager(
                                        (__int64)this,
                                        v10);
  v4 = ActionCenterBaseExperienceManager;
  if ( ActionCenterBaseExperienceManager >= 0 )
  {
    ActionCenterBaseExperienceManager = CScreenClippingExperienceManager::SubscribeToActionCenterVisibilityChanged(this);
    v4 = ActionCenterBaseExperienceManager;
    if ( ActionCenterBaseExperienceManager >= 0 )
    {
      *((_BYTE *)this + 432) = 1;
      ActionCenterBaseExperienceManager = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10[0] + 80LL))(
                                            v10[0],
                                            0LL);
      v4 = ActionCenterBaseExperienceManager;
      if ( ActionCenterBaseExperienceManager >= 0 )
      {
        v4 = 0;
        goto LABEL_14;
      }
      v5 = 1304LL;
    }
    else
    {
      v5 = 1301LL;
    }
  }
  else
  {
    v5 = 1300LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)ActionCenterBaseExperienceManager);
LABEL_14:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
  return v4;
}
