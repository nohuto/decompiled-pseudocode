/*
 * XREFs of ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800069F0
 * Callers:
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ @ 0x18000A60C (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x18000A6FC (-Instance@FeatureLogging@details@wil@@KAPEAV123@XZ.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001F80C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x180024AD4 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@CDMUtilsUnlockLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18007B3FC (-Provider@CDMUtilsUnlockLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
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
