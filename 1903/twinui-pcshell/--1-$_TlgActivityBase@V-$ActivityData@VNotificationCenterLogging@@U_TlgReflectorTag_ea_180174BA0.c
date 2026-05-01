/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$04@@IEAA@XZ @ 0x180174BA0
 * Callers:
 *     ??1?$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180174A24 (--1-$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderTyp_ea_180174A24.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18010CC28 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

int __fastcall _TlgActivityBase<wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>,0,5>::~_TlgActivityBase<wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>,0,5>(
        __int64 a1)
{
  _UNKNOWN **v1; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  WINBOOL v5; // [rsp+30h] [rbp+8h] BYREF
  const struct _TlgProvider_t **v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = &retaddr;
  if ( *(_DWORD *)a1 == 1 )
  {
    v6 = 0LL;
    *(_DWORD *)a1 = 2;
    if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
    {
      v6 = (const struct _TlgProvider_t **)qword_180599CA0;
      qword_180599CA0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180599CB8 = (struct _TlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CA0, qword_180599CB8);
      InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_180599CA0);
    }
    LODWORD(v1) = _TlgWriteActivityAutoStop<0,5>(v6[1], (const GUID *)(a1 + 8));
  }
  *(_DWORD *)a1 = 3;
  return (int)v1;
}
