/*
 * XREFs of ?InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18000D15C
 * Callers:
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18000D12C (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAU.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803B0D50 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 * Callees:
 *     ?EnsureLightDismissProvider@SingleViewLightDismissHelper@@AEAAJXZ @ 0x18000D268 (-EnsureLightDismissProvider@SingleViewLightDismissHelper@@AEAAJXZ.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x18000D344 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003F6A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SingleViewLightDismissHelper::InternalRegisterWithLightDismiss(
        SingleViewLightDismissHelper *a1,
        unsigned int a2,
        __int64 a3,
        ExperienceManagerUtils *a4)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v8; // rdx
  int v9; // edi
  HWND v10; // rax
  const struct _TlgProvider_t *v11; // rcx
  __int64 v13; // rdx
  UINT32 cData; // [rsp+20h] [rbp-59h]
  _DWORD v15[4]; // [rsp+30h] [rbp-49h] BYREF
  LPVOID Context[2]; // [rsp+40h] [rbp-39h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-29h] BYREF
  int v18; // [rsp+54h] [rbp-25h] BYREF
  __int64 v19; // [rsp+58h] [rbp-21h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  int *v21; // [rsp+80h] [rbp+7h]
  int v22; // [rsp+88h] [rbp+Fh]
  int v23; // [rsp+8Ch] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v19 = -2LL;
  SingleViewLightDismissHelper::UnregisterWithLightDismiss(a1);
  v9 = SingleViewLightDismissHelper::EnsureLightDismissProvider(a1);
  if ( v9 < 0 )
  {
    v13 = 75LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
      (const char *)(unsigned int)v9,
      cData);
    return (unsigned int)v9;
  }
  v10 = ExperienceManagerUtils::WindowFromViewWrapper(a4, v8);
  if ( !v10 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
      (const char *)0x80004005LL,
      cData);
    return 2147500037LL;
  }
  Context[0] = (LPVOID)a2;
  Context[1] = v10;
  v9 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *, __int64, _DWORD *))(**(_QWORD **)a1 + 24LL))(
         *(_QWORD *)a1,
         Context,
         a3,
         v15);
  if ( v9 < 0 )
  {
    v13 = 83LL;
    goto LABEL_14;
  }
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
    && fPending )
  {
    Context[0] = qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  v11 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v11 > 5u )
  {
    v18 = v15[0];
    v21 = &v18;
    v22 = 4;
    v23 = 0;
    TlgWrite(v11, &unk_18046C1E4, 0LL, 0LL, 3u, &pData);
  }
  if ( *((_DWORD *)a1 + 2) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a1 + 40LL))(*(_QWORD *)a1, v15[0]);
  else
    *((_DWORD *)a1 + 2) = v15[0];
  return 0LL;
}
