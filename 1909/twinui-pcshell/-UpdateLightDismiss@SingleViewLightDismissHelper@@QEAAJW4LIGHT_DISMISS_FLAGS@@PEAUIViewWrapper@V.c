/*
 * XREFs of ?UpdateLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804328A0
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180098AC0 (-OnClientWindowReadyForPresentationChanged@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIClientWin.c)
 *     ?OnClientWindowReadyForPresentationChanged@CPeopleBarFlyoutExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1801AED90 (-OnClientWindowReadyForPresentationChanged@CPeopleBarFlyoutExperienceManager@@AEAAJPEAUIClientWi.c)
 *     ?OnClientWindowReadyForPresentationChanged@CPeopleBarJumpViewExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1801B1AA0 (-OnClientWindowReadyForPresentationChanged@CPeopleBarJumpViewExperienceManager@@AEAAJPEAUIClient.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800364A8 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SingleViewLightDismissHelper::UpdateLightDismiss(
        unsigned int *a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        ExperienceManagerUtils *a3)
{
  unsigned int v3; // ebx
  void *v5; // rax
  int v6; // ebx
  __int64 v7; // rdx
  const struct _TlgProvider_t *v9; // rcx
  LPVOID Context[2]; // [rsp+30h] [rbp-19h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-9h] BYREF
  unsigned int v12; // [rsp+44h] [rbp-5h] BYREF
  __int64 v13; // [rsp+48h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp+7h] BYREF
  unsigned int *v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v13 = -2LL;
  v3 = (unsigned int)a2;
  if ( a1[2] )
  {
    v5 = (void *)ExperienceManagerUtils::WindowFromViewWrapper(a3, a2);
    if ( !v5 )
    {
      v6 = -2147467259;
      v7 = 147LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    Context[0] = (LPVOID)v3;
    Context[1] = v5;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, LPVOID *))(**(_QWORD **)a1 + 32LL))(*(_QWORD *)a1, a1[2], Context);
    if ( v6 < 0 )
    {
      v7 = 153LL;
      goto LABEL_4;
    }
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
      && fPending )
    {
      Context[0] = qword_1805C20F0;
      qword_1805C20F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805C2108 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20F0, qword_1805C2108);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805C20F0);
    }
    v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
    if ( *(_DWORD *)v9 > 5u )
    {
      v12 = a1[2];
      v15 = &v12;
      v16 = 4;
      v17 = 0;
      TlgWrite(v9, &unk_18050C814, 0LL, 0LL, 3u, &pData);
    }
  }
  return 0LL;
}
