/*
 * XREFs of ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180006D30
 * Callers:
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ @ 0x18000A6F0 (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x18000A7DC (-Instance@FeatureLogging@details@wil@@KAPEAV123@XZ.c)
 *     ?Provider@TaskbarLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18000B1F0 (-Provider@TaskbarLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001F98C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x180024C1C (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@CDMUtilsUnlockLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18007CE5C (-Provider@CDMUtilsUnlockLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?CortanaUndocking_ReplaceDecisionReadBeforeReevaluation@CortanaProactiveTelemetry@@SAXXZ @ 0x180095C1C (-CortanaUndocking_ReplaceDecisionReadBeforeReevaluation@CortanaProactiveTelemetry@@SAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::TraceLoggingProvider::Register(
        wil::TraceLoggingProvider *this,
        const struct _TlgProvider_t *const a2)
{
  GUID v4; // xmm0
  __int64 v5; // rax
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = 1;
  v4 = *(GUID *)(*((_QWORD *)a2 + 1) - 16LL);
  *((_QWORD *)a2 + 5) = 0LL;
  *((_QWORD *)a2 + 6) = 0LL;
  ProviderId = v4;
  if ( !EventRegister(&ProviderId, TlgEnableCallback, a2, (PREGHANDLE)a2 + 4) )
    EventSetInformation(*((_QWORD *)a2 + 4), 2LL, *((_QWORD *)a2 + 1), **((unsigned __int16 **)a2 + 1));
  v5 = *(_QWORD *)this;
  *((_DWORD *)this + 5) = 1;
  (*(void (__fastcall **)(wil::TraceLoggingProvider *))(v5 + 8))(this);
}
