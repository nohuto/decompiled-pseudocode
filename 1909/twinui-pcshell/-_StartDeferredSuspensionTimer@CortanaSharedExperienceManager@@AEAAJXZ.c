/*
 * XREFs of ?_StartDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180077CD4
 * Callers:
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180042D50 (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 *     ?Hide@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180077A40 (-Hide@CortanaSharedExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180045F20 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_StartDeferredSuspensionTimer(struct _TP_TIMER **this)
{
  const struct _TlgProvider_t *v2; // rcx
  void *v3; // rdx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v5; // r9
  struct _TP_TIMER *v6; // rcx
  WINBOOL v8; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp-40h] BYREF
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v9 = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v8, (LPVOID *)&v9) && v8 )
  {
    v9 = qword_1805C2118;
    qword_1805C2118[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2130 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2118, qword_1805C2130);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1805C2118);
  }
  v2 = (const struct _TlgProvider_t *)v9[1];
  if ( *(_DWORD *)v2 > 4u )
    TlgWrite(v2, &unk_1804E3472, 0LL, 0LL, 2u, &pData);
  v3 = (void *)*((unsigned int *)this + 116);
  pftDueTime = (struct _FILETIME)-50000000LL;
  ThreadpoolTimer = CreateThreadpoolTimer(lambda_efaffaa5f4b32d09aefa47929c9cb96f_::_lambda_invoker_cdecl_, v3, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 59,
    ThreadpoolTimer);
  v6 = this[59];
  if ( !v6 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x588,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
             v5);
  SetThreadpoolTimer(v6, &pftDueTime, 0, 0);
  return 0LL;
}
