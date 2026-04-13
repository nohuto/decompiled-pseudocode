/*
 * XREFs of ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ @ 0x18000A6F0
 * Callers:
 *     ??$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAXAEAW4TaskbarPinReason@Pinning@Mobility@@@Z @ 0x1800152C4 (--$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTeleme.c)
 *     ?StopActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@MEAAXXZ @ 0x180045360 (-StopActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@Mobi.c)
 *     ?StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXU_GUID@@PEBGPEBD@Z @ 0x18004591C (-StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@Mob.c)
 *     ?Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXPEBD@Z @ 0x180045B20 (-Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExpe.c)
 *     ??1?$ActivityData@VMobilityExperienceLogging@Telemetry@MobilityExperience@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMobilityExperienceLogging@Telemetry@MobilityExperience@@$00$0IAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180046004 (--1-$ActivityData@VMobilityExperienceLogging@Telemetry@MobilityExperience@@U_TlgReflectorTag_Par.c)
 *     ?NotifyFailure@?$ActivityBase@VMobilityExperienceLogging@Telemetry@MobilityExperience@@$00$0IAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800498E0 (-NotifyFailure@-$ActivityBase@VMobilityExperienceLogging@Telemetry@MobilityExperience@@$00$0IAAA.c)
 *     ??$ReportLaunchStatus@_N_NPEBG@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAX$$QEA_N0$$QEAPEBG@Z @ 0x18004B284 (--$ReportLaunchStatus@_N_NPEBG@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAX$$QE.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180006D30 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800CAD84 (atexit.c)
 */

const struct _TlgProvider_t *MobilityExperience::Telemetry::MobilityExperienceLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(
         &`MobilityExperience::Telemetry::MobilityExperienceLogging::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    Context = qword_18018EF10;
    qword_18018EF10[0] = &CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    qword_18018EF28 = (struct _TlgProvider_t *)&`MobilityExperience::Telemetry::MobilityExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_e5247b73c30e393fca6255a7d4a63886_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18018EF10, qword_18018EF28);
    InitOnceComplete(
      &`MobilityExperience::Telemetry::MobilityExperienceLogging::Instance'::`2'::wrapper,
      0,
      qword_18018EF10);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
