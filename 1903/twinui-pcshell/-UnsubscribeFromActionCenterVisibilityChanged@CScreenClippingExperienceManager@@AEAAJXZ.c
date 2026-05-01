/*
 * XREFs of ?UnsubscribeFromActionCenterVisibilityChanged@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801B396C
 * Callers:
 *     ??1CScreenClippingExperienceManager@@EEAA@XZ @ 0x1801ABFBC (--1CScreenClippingExperienceManager@@EEAA@XZ.c)
 *     ?HandleScreenClippingPendingShowReturn@CScreenClippingExperienceManager@@AEAAXXZ @ 0x1801AED10 (-HandleScreenClippingPendingShowReturn@CScreenClippingExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetActionCenterBaseExperienceManager@CScreenClippingExperienceManager@@AEAAJAEAV?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1801ACFB4 (-GetActionCenterBaseExperienceManager@CScreenClippingExperienceManager@@AEAAJAEAV-$ComPtr@UIBase.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenClippingExperienceManager::UnsubscribeFromActionCenterVisibilityChanged(
        CScreenClippingExperienceManager *this)
{
  const struct _TlgProvider_t *v2; // rcx
  int ActionCenterBaseExperienceManager; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  const struct _TlgProvider_t *v6; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  __int64 v10[2]; // [rsp+40h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

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
    TlgWrite(v2, &unk_1804C330B, 0LL, 0LL, 2u, &pData);
  v10[0] = 0LL;
  ActionCenterBaseExperienceManager = CScreenClippingExperienceManager::GetActionCenterBaseExperienceManager(
                                        (__int64)this,
                                        v10);
  v4 = ActionCenterBaseExperienceManager;
  if ( ActionCenterBaseExperienceManager >= 0 )
  {
    if ( v10[0] && *((_QWORD *)this + 58) )
    {
      ActionCenterBaseExperienceManager = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10[0] + 72LL))(
                                            v10[0],
                                            *((_QWORD *)this + 58));
      v4 = ActionCenterBaseExperienceManager;
      if ( ActionCenterBaseExperienceManager < 0 )
      {
        v5 = 1357LL;
        goto LABEL_12;
      }
      *((_QWORD *)this + 58) = 0LL;
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
        TlgWrite(v6, &unk_1804C3371, 0LL, 0LL, 2u, &pData);
    }
    v4 = 0;
    goto LABEL_19;
  }
  v5 = 1353LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)ActionCenterBaseExperienceManager);
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
  return v4;
}
