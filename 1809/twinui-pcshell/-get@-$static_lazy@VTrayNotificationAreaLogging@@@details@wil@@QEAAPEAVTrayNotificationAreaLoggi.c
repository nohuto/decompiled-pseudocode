/*
 * XREFs of ?get@?$static_lazy@VTrayNotificationAreaLogging@@@details@wil@@QEAAPEAVTrayNotificationAreaLogging@@P6AXXZ@Z @ 0x1802DBDA8
 * Callers:
 *     ??1?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802DAD50 (--1-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ?NotifyFailure@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1802DB180 (-NotifyFailure@-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0Is.c)
 *     ?ReportStopActivity@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1802DB624 (-ReportStopActivity@-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Par.c)
 *     ?StartActivity@FindAppInfoContext@TrayNotificationsTelemetry@@QEAAXPEAUHSTRING__@@@Z @ 0x1802DB8BC (-StartActivity@FindAppInfoContext@TrayNotificationsTelemetry@@QEAAXPEAUHSTRING__@@@Z.c)
 *     ?Stop@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802DBA18 (-Stop@-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?StopActivity@FindAppInfoContext@TrayNotificationsTelemetry@@MEAAXXZ @ 0x1802DBB30 (-StopActivity@FindAppInfoContext@TrayNotificationsTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<TrayNotificationAreaLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`TrayNotificationAreaLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5)
    && (_DWORD)v4 )
  {
    v5 = qword_180510160;
    qword_180510160[0] = &ShellScreenClippingLogging::`vftable';
    qword_180510178 = (struct _TlgProvider_t *)&`TrayNotificationAreaLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180510160, qword_180510178);
    InitOnceComplete(&`TrayNotificationAreaLogging::Instance'::`2'::wrapper, 0, qword_180510160);
  }
  return v5;
}
