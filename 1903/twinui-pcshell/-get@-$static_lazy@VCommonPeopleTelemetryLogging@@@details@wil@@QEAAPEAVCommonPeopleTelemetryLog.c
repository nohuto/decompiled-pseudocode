/*
 * XREFs of ?get@?$static_lazy@VCommonPeopleTelemetryLogging@@@details@wil@@QEAAPEAVCommonPeopleTelemetryLogging@@P6AXXZ@Z @ 0x180191B44
 * Callers:
 *     ??$PeopleBarFlyoutDidntShowInSpecifiedTime@AEBI@CommonPeopleTelemetry@@SAXAEBI@Z @ 0x18018E044 (--$PeopleBarFlyoutDidntShowInSpecifiedTime@AEBI@CommonPeopleTelemetry@@SAXAEBI@Z.c)
 *     ??1?$ActivityData@VCommonPeopleTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18018E620 (--1-$ActivityData@VCommonPeopleTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Acti.c)
 *     ?NotifyFailure@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18018F840 (-NotifyFailure@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefle.c)
 *     ?SessionBecameIdleDuringShow@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXXZ @ 0x180190B20 (-SessionBecameIdleDuringShow@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAAXW4PeopleFlyoutAction@@@Z @ 0x180190E68 (-StartActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAAXW4PeopleFlyoutAction@@@Z.c)
 *     ?StartActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXUPoint@Foundation@Windows@@@Z @ 0x180190F7C (-StartActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXUPoint@Foundation@Windows@@@Z.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801910C4 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 *     ?StopActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@MEAAXXZ @ 0x180191220 (-StopActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@MEAAXXZ @ 0x1801914E0 (-StopActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@MEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180191C40 (-zInternalStart@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefl.c)
 *     ??$PaneDidntShowInSpecifiedTime@AEBW4ViewType@@AEBI@CommonPeopleTelemetry@@SAXAEBW4ViewType@@AEBI@Z @ 0x18021E0DC (--$PaneDidntShowInSpecifiedTime@AEBW4ViewType@@AEBI@CommonPeopleTelemetry@@SAXAEBW4ViewType@@AEB.c)
 *     ??$PeoplePaneNewView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z @ 0x18021E19C (--$PeoplePaneNewView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z.c)
 *     ??$PeoplePaneSwitchToView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z @ 0x18021E244 (--$PeoplePaneSwitchToView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z.c)
 *     ??1Completer@?$static_lazy@VCommonPeopleTelemetry@@@details@wil@@QEAA@XZ @ 0x18021F1A4 (--1Completer@-$static_lazy@VCommonPeopleTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z @ 0x18022283C (-PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z.c)
 *     ?StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXPEBG@Z @ 0x180222F50 (-StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXPEBG@Z.c)
 *     ?StopActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@MEAAXXZ @ 0x1802230D0 (-StopActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<CommonPeopleTelemetryLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`CommonPeopleTelemetryLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5)
    && (_DWORD)v4 )
  {
    v5 = qword_180599D20;
    qword_180599D20[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599D38 = (struct _TlgProvider_t *)&`CommonPeopleTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599D20, qword_180599D38);
    InitOnceComplete(&`CommonPeopleTelemetryLogging::Instance'::`2'::wrapper, 0, qword_180599D20);
  }
  return v5;
}
