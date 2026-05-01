/*
 * XREFs of ?_StartDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180011144
 * Callers:
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800236DC (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 *     ?Hide@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1800709F0 (-Hide@CortanaSharedExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001432C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_StartDeferredSuspensionTimer(CortanaSharedExperienceManager *this)
{
  const struct _TlgProvider_t *v2; // rcx
  void *v3; // rdx
  PTP_TIMER ThreadpoolTimer; // rax
  const char *v5; // r9
  struct _TP_TIMER *v6; // rcx
  WINBOOL v8; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp-40h] BYREF
  _FILETIME pftDueTime; // [rsp+40h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v9 = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v8, (LPVOID *)&v9) && v8 )
  {
    v9 = qword_18050F960;
    qword_18050F960[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F978 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F960, qword_18050F978);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_18050F960);
  }
  v2 = (const struct _TlgProvider_t *)v9[1];
  if ( *(_DWORD *)v2 > 4u )
    TlgWrite(v2, &unk_18044DB70, 0LL, 0LL, 2u, &pData);
  v3 = (void *)*((unsigned int *)this + 110);
  pftDueTime = (_FILETIME)-50000000LL;
  ThreadpoolTimer = CreateThreadpoolTimer(lambda_426d63d8a8f31d1aac1a208ad6758ad1_::_lambda_invoker_cdecl_, v3, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (char *)this + 448,
    ThreadpoolTimer);
  v6 = (struct _TP_TIMER *)*((_QWORD *)this + 56);
  if ( !v6 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x583,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
             v5);
  SetThreadpoolTimer(v6, &pftDueTime, 0, 0);
  return 0LL;
}
