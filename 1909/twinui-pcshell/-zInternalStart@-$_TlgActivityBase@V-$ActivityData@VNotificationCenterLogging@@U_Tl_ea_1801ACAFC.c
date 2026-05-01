/*
 * XREFs of ?zInternalStart@?$_TlgActivityBase@V?$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0CAAAAAAAAAAA@$04@@QEAAXXZ @ 0x1801ACAFC
 * Callers:
 *     ?zInternalStart@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801ACAC4 (-zInternalStart@-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflect.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x18003B260 (TraceLoggingProviderEnabled.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

ULONG __fastcall _TlgActivityBase<wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>::zInternalStart(
        __int64 a1)
{
  ULONG result; // eax
  WINBOOL v3; // [rsp+30h] [rbp+8h] BYREF
  TraceLoggingHProvider *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &v3, (LPVOID *)&v4) && v3 )
  {
    v4 = (TraceLoggingHProvider *)qword_1805C20C0;
    qword_1805C20C0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C20D8 = (struct _TlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20C0, qword_1805C20D8);
    InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_1805C20C0);
  }
  if ( TraceLoggingProviderEnabled(v4[1], 5u, 0x200000000000uLL) )
  {
    result = EventActivityIdControl(3u, (LPGUID)(a1 + 8));
  }
  else
  {
    result = 0;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)a1 = 1;
  return result;
}
