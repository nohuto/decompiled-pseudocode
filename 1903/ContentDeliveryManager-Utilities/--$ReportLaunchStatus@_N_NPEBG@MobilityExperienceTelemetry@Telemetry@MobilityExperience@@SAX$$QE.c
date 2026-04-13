/*
 * XREFs of ??$ReportLaunchStatus@_N_NPEBG@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAX$$QEA_N0$$QEAPEBG@Z @ 0x18004B284
 * Callers:
 *     ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x1800486D8 (-LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ @ 0x18000A6F0 (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

int __fastcall MobilityExperience::Telemetry::MobilityExperienceTelemetry::ReportLaunchStatus<bool,bool,unsigned short const *>(
        __int64 a1,
        __int64 a2,
        const WCHAR **a3)
{
  const struct _TlgProvider_t *v6; // rax
  const struct _TlgProvider_t *v7; // r10
  const WCHAR *v8; // rcx
  const WCHAR *v9; // rdx
  __int64 v10; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+50h] [rbp-48h]
  __int64 v14; // [rsp+58h] [rbp-40h]
  __int64 v15; // [rsp+60h] [rbp-38h]
  __int64 v16; // [rsp+68h] [rbp-30h]
  const WCHAR *v17; // [rsp+70h] [rbp-28h]
  int v18; // [rsp+78h] [rbp-20h]
  int v19; // [rsp+7Ch] [rbp-1Ch]

  v6 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
  v7 = v6;
  if ( *(_DWORD *)v6 > 5u )
  {
    LODWORD(v6) = 0;
    if ( (*((_QWORD *)v7 + 2) & 0x800000000000LL) != 0
      && (*((_QWORD *)v7 + 3) & 0x800000000000LL) == *((_QWORD *)v7 + 3) )
    {
      v8 = *a3;
      v9 = &Src;
      v13 = a1;
      v14 = 1LL;
      LODWORD(v10) = 0;
      v15 = a2;
      v16 = 1LL;
      if ( v8 )
      {
        v9 = v8;
        v10 = -1LL;
        do
          ++v10;
        while ( v8[v10] );
      }
      v17 = v9;
      v18 = 2 * v10 + 2;
      v19 = 0;
      LODWORD(v6) = TlgWrite(v7, &unk_18016C49F, 0LL, 0LL, 5u, &pData);
    }
  }
  return (int)v6;
}
