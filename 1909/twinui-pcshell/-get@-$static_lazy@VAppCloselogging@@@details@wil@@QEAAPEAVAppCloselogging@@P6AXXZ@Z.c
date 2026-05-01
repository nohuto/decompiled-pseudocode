/*
 * XREFs of ?get@?$static_lazy@VAppCloselogging@@@details@wil@@QEAAPEAVAppCloselogging@@P6AXXZ@Z @ 0x18013F9F0
 * Callers:
 *     ??$UserInputCloseRequested@AEAKPEBGW4CloseRequestInputSource@AppCloseTelemetry@@@AppCloseTelemetry@@SAXAEAK$$QEAPEBG$$QEAW4CloseRequestInputSource@0@@Z @ 0x18012B330 (--$UserInputCloseRequested@AEAKPEBGW4CloseRequestInputSource@AppCloseTelemetry@@@AppCloseTelemet.c)
 *     ??1Completer@?$static_lazy@VAppCloseTelemetry@@@details@wil@@QEAA@XZ @ 0x18012DAA0 (--1Completer@-$static_lazy@VAppCloseTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ??1?$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18015AAC0 (--1-$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@VApp.c)
 *     ?NotifyFailure@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18015C0B0 (-NotifyFailure@-$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?StartActivity@ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAAXK@Z @ 0x18015CD38 (-StartActivity@ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAAXK@Z.c)
 *     ?Stop@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18015D014 (-Stop@-$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?StopActivity@ShellAppManagerCloseRequested@AppCloseTelemetry@@MEAAXXZ @ 0x18015D6E0 (-StopActivity@ShellAppManagerCloseRequested@AppCloseTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<AppCloselogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`AppCloselogging::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5) && (_DWORD)v4 )
  {
    v5 = qword_1805C1F78;
    qword_1805C1F78[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C1F90 = (struct _TlgProvider_t *)&`AppCloselogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C1F78, qword_1805C1F90);
    InitOnceComplete(&`AppCloselogging::Instance'::`2'::wrapper, 0, qword_1805C1F78);
  }
  return v5;
}
