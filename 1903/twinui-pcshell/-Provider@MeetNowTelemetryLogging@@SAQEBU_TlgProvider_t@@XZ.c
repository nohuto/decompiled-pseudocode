/*
 * XREFs of ?Provider@MeetNowTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18009217C
 * Callers:
 *     ??$FailedToShowInSpecifiedTime@K@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX$$QEAK@Z @ 0x18008EA58 (--$FailedToShowInSpecifiedTime@K@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX$$QEAK@Z.c)
 *     ??1?$ActivityData@VMeetNowTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18008F1A8 (--1-$ActivityData@VMeetNowTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityB.c)
 *     ?CancelledByAnotherInvoke@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ @ 0x18008FCEC (-CancelledByAnotherInvoke@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ.c)
 *     ?CancelledDueToForeground@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ @ 0x18008FD88 (-CancelledDueToForeground@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ.c)
 *     ?CancelledDueToLock@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ @ 0x18008FE24 (-CancelledDueToLock@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180090B30 (-NotifyFailure@-$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgRefl.c)
 *     ?OnViewHidden@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180091CB0 (-OnViewHidden@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?StartActivity@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX_N@Z @ 0x180092D18 (-StartActivity@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX_N@Z.c)
 *     ?Stop@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180092E90 (-Stop@-$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_.c)
 *     ?StopActivity@ShowFlyoutActivity@MeetNowTelemetry@@MEAAXXZ @ 0x180092FE0 (-StopActivity@ShowFlyoutActivity@MeetNowTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VMeetNowTelemetryLogging@@@details@wil@@QEAAPEAVMeetNowTelemetryLogging@@P6AXXZ@Z @ 0x1800935C8 (-get@-$static_lazy@VMeetNowTelemetryLogging@@@details@wil@@QEAAPEAVMeetNowTelemetryLogging@@P6AX.c)
 */

const struct _TlgProvider_t *__fastcall MeetNowTelemetryLogging::Provider(__int64 a1)
{
  return *(const struct _TlgProvider_t **)(wil::details::static_lazy<MeetNowTelemetryLogging>::get(
                                             a1,
                                             lambda_50d5f5935f73d6e1cfa7918addf0e10e_::_lambda_invoker_cdecl_)
                                         + 8);
}
