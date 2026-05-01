/*
 * XREFs of ?get@?$static_lazy@VShellScreenClippingLogging@@@details@wil@@QEAAPEAVShellScreenClippingLogging@@P6AXXZ@Z @ 0x1801B3F5C
 * Callers:
 *     ?ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1801B28D0 (-ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@She.c)
 *     ??1?$ActivityData@VShellScreenClippingLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803E11B4 (--1-$ActivityData@VShellScreenClippingLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activi.c)
 *     ?CopyToClipboard@ScreenClippingBrokerImpl@@CAJPEAUHBITMAP__@@@Z @ 0x1803E143C (-CopyToClipboard@ScreenClippingBrokerImpl@@CAJPEAUHBITMAP__@@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1803E21F0 (-NotifyFailure@-$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflect.c)
 *     ?StartActivity@CopiedToClipboard@ScreenClippingCommonTelemetry@@QEAAXXZ @ 0x1803E2610 (-StartActivity@CopiedToClipboard@ScreenClippingCommonTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ScreenCapture@ScreenClippingCommonTelemetry@@QEAAXXZ @ 0x1803E2708 (-StartActivity@ScreenCapture@ScreenClippingCommonTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803E2800 (-Stop@-$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 *     ?StopActivity@CopiedToClipboard@ScreenClippingCommonTelemetry@@MEAAXXZ @ 0x1803E2950 (-StopActivity@CopiedToClipboard@ScreenClippingCommonTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ScreenCapture@ScreenClippingCommonTelemetry@@MEAAXXZ @ 0x1803E2C10 (-StopActivity@ScreenCapture@ScreenClippingCommonTelemetry@@MEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1803E303C (-zInternalStart@-$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflec.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<ShellScreenClippingLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`ShellScreenClippingLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5)
    && (_DWORD)v4 )
  {
    v5 = qword_180599D50;
    qword_180599D50[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599D68 = (struct _TlgProvider_t *)&`ShellScreenClippingLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599D50, qword_180599D68);
    InitOnceComplete(&`ShellScreenClippingLogging::Instance'::`2'::wrapper, 0, qword_180599D50);
  }
  return v5;
}
