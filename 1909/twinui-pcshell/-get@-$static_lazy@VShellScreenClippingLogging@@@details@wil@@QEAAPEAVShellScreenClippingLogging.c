/*
 * XREFs of ?get@?$static_lazy@VShellScreenClippingLogging@@@details@wil@@QEAAPEAVShellScreenClippingLogging@@P6AXXZ@Z @ 0x1801D2ECC
 * Callers:
 *     ?ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1801D1840 (-ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@She.c)
 *     ??1?$ActivityData@VShellScreenClippingLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1804007C4 (--1-$ActivityData@VShellScreenClippingLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activi.c)
 *     ?CopyToClipboard@ScreenClippingBrokerImpl@@CAJPEAUHBITMAP__@@@Z @ 0x180400A4C (-CopyToClipboard@ScreenClippingBrokerImpl@@CAJPEAUHBITMAP__@@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180401810 (-NotifyFailure@-$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflect.c)
 *     ?StartActivity@CopiedToClipboard@ScreenClippingCommonTelemetry@@QEAAXXZ @ 0x180401C30 (-StartActivity@CopiedToClipboard@ScreenClippingCommonTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ScreenCapture@ScreenClippingCommonTelemetry@@QEAAXXZ @ 0x180401D28 (-StartActivity@ScreenCapture@ScreenClippingCommonTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180401E20 (-Stop@-$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 *     ?StopActivity@CopiedToClipboard@ScreenClippingCommonTelemetry@@MEAAXXZ @ 0x180401F70 (-StopActivity@CopiedToClipboard@ScreenClippingCommonTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ScreenCapture@ScreenClippingCommonTelemetry@@MEAAXXZ @ 0x180402230 (-StopActivity@ScreenCapture@ScreenClippingCommonTelemetry@@MEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18040265C (-zInternalStart@-$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflec.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008A080 (atexit.c)
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
    v5 = qword_1805C2170;
    qword_1805C2170[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2188 = (struct _TlgProvider_t *)&`ShellScreenClippingLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2170, qword_1805C2188);
    InitOnceComplete(&`ShellScreenClippingLogging::Instance'::`2'::wrapper, 0, qword_1805C2170);
  }
  return v5;
}
