/*
 * XREFs of ?get@?$static_lazy@VShellScreenClippingLogging@@@details@wil@@QEAAPEAVShellScreenClippingLogging@@P6AXXZ@Z @ 0x18018391C
 * Callers:
 *     ?ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x180182720 (-ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@She.c)
 *     ??1?$ActivityData@VShellScreenClippingLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18037B334 (--1-$ActivityData@VShellScreenClippingLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activi.c)
 *     ?CopyToClipboard@ScreenClippingBrokerImpl@@CAJPEAUHBITMAP__@@@Z @ 0x18037B5BC (-CopyToClipboard@ScreenClippingBrokerImpl@@CAJPEAUHBITMAP__@@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18037C390 (-NotifyFailure@-$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTa.c)
 *     ?StartActivity@CopiedToClipboard@ScreenClippingCommonTelemetry@@QEAAXXZ @ 0x18037C770 (-StartActivity@CopiedToClipboard@ScreenClippingCommonTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ScreenCapture@ScreenClippingCommonTelemetry@@QEAAXXZ @ 0x18037C844 (-StartActivity@ScreenCapture@ScreenClippingCommonTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18037C918 (-Stop@-$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     ?StopActivity@CopiedToClipboard@ScreenClippingCommonTelemetry@@MEAAXXZ @ 0x18037CA50 (-StopActivity@CopiedToClipboard@ScreenClippingCommonTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ScreenCapture@ScreenClippingCommonTelemetry@@MEAAXXZ @ 0x18037CCB0 (-StopActivity@ScreenCapture@ScreenClippingCommonTelemetry@@MEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18037D07C (-zInternalStart@-$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorT.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
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
    v5 = qword_18050FA00;
    qword_18050FA00[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050FA18 = (struct _TlgProvider_t *)&`ShellScreenClippingLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050FA00, qword_18050FA18);
    InitOnceComplete(&`ShellScreenClippingLogging::Instance'::`2'::wrapper, 0, qword_18050FA00);
  }
  return v5;
}
