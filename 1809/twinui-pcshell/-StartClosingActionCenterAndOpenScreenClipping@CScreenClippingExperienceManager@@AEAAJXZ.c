/*
 * XREFs of ?StartClosingActionCenterAndOpenScreenClipping@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180182C6C
 * Callers:
 *     ?HandleOpenFromActionCenter@CScreenClippingExperienceManager@@AEAAJXZ @ 0x18017E8D8 (-HandleOpenFromActionCenter@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetActionCenterBaseExperienceManager@CScreenClippingExperienceManager@@AEAAJAEAV?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18017D8F4 (-GetActionCenterBaseExperienceManager@CScreenClippingExperienceManager@@AEAAJAEAV-$ComPtr@UIBase.c)
 *     ?StartScreenClippingPendingShowTimer@CScreenClippingExperienceManager@@AEAAXKW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x180182F94 (-StartScreenClippingPendingShowTimer@CScreenClippingExperienceManager@@AEAAXKW4ScreenClipInvocat.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenClippingExperienceManager::StartClosingActionCenterAndOpenScreenClipping(
        CScreenClippingExperienceManager *this)
{
  const struct _TlgProvider_t *v2; // rcx
  int ActionCenterBaseExperienceManager; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // r8
  const struct _TlgProvider_t *v8; // rcx
  int v10; // [rsp+38h] [rbp-99h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-95h] BYREF
  WINBOOL v12; // [rsp+40h] [rbp-91h] BYREF
  int v13; // [rsp+44h] [rbp-8Dh] BYREF
  WINBOOL v14[2]; // [rsp+48h] [rbp-89h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-81h] BYREF
  LPVOID v16; // [rsp+58h] [rbp-79h] BYREF
  LPVOID v17; // [rsp+60h] [rbp-71h] BYREF
  __int64 v18[2]; // [rsp+68h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-59h] BYREF
  int *v20; // [rsp+98h] [rbp-39h]
  int v21; // [rsp+A0h] [rbp-31h]
  int v22; // [rsp+A4h] [rbp-2Dh]
  EVENT_DATA_DESCRIPTOR v23; // [rsp+A8h] [rbp-29h] BYREF
  int *v24; // [rsp+C8h] [rbp-9h]
  int v25; // [rsp+D0h] [rbp-1h]
  int v26; // [rsp+D4h] [rbp+3h]
  EVENT_DATA_DESCRIPTOR v27; // [rsp+D8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v18[1] = -2LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  v2 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v2 > 5u )
  {
    LOBYTE(v10) = *((_BYTE *)this + 424) != 0;
    v20 = &v10;
    v21 = 1;
    v22 = 0;
    TlgWrite(v2, &unk_18045274B, 0LL, 0LL, 3u, &pData);
  }
  v18[0] = 0LL;
  ActionCenterBaseExperienceManager = CScreenClippingExperienceManager::GetActionCenterBaseExperienceManager(
                                        (__int64)this,
                                        v18);
  v4 = ActionCenterBaseExperienceManager;
  if ( ActionCenterBaseExperienceManager >= 0 )
  {
    ActionCenterBaseExperienceManager = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18[0] + 56LL))(
                                          v18[0],
                                          0LL);
    v4 = ActionCenterBaseExperienceManager;
    if ( ActionCenterBaseExperienceManager < 0 )
    {
      v5 = 1210LL;
      goto LABEL_10;
    }
    if ( *((_BYTE *)this + 424) )
    {
      if ( *((_DWORD *)this + 113) == 2 )
      {
LABEL_26:
        v4 = 0;
        goto LABEL_27;
      }
      v16 = 0LL;
      if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v12, &v16) && v12 )
      {
        v16 = qword_18050F938;
        qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
        qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
        InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
      }
      v6 = (const struct _TlgProvider_t *)*((_QWORD *)v16 + 1);
      if ( *(_DWORD *)v6 > 5u )
      {
        v13 = *((_DWORD *)this + 113);
        v24 = &v13;
        v25 = 4;
        v26 = 0;
        TlgWrite(v6, &unk_1804527BD, 0LL, 0LL, 3u, &v23);
      }
      v7 = *((unsigned int *)this + 113);
    }
    else
    {
      v17 = 0LL;
      if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, v14, &v17) && v14[0] )
      {
        v17 = qword_18050F938;
        qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
        qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
        InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
      }
      v8 = (const struct _TlgProvider_t *)*((_QWORD *)v17 + 1);
      if ( *(_DWORD *)v8 > 5u )
        TlgWrite(v8, &unk_180452863, 0LL, 0LL, 2u, &v27);
      v7 = 2LL;
    }
    CScreenClippingExperienceManager::StartScreenClippingPendingShowTimer(this, 400LL, v7);
    goto LABEL_26;
  }
  v5 = 1209LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)ActionCenterBaseExperienceManager);
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
  return v4;
}
