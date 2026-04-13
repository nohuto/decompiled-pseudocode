/*
 * XREFs of ??$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAXAEAW4TaskbarPinReason@Pinning@Mobility@@@Z @ 0x1800152C4
 * Callers:
 *     _lambda_67d3978e1092d2b882811411f68ad6cb_::operator() @ 0x18000B7EC (_lambda_67d3978e1092d2b882811411f68ad6cb_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ @ 0x18000A6F0 (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

int __fastcall MobilityExperience::Telemetry::MobilityExperienceTelemetry::YourPhoneTaskbarIconCreated<enum Mobility::Pinning::TaskbarPinReason &>(
        int *a1)
{
  const struct _TlgProvider_t *v2; // rax
  const struct _TlgProvider_t *v3; // rcx
  int v4; // eax
  int v6; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
  v3 = v2;
  if ( *(_DWORD *)v2 > 5u )
  {
    LODWORD(v2) = 0;
    if ( (*((_QWORD *)v3 + 2) & 0x800000000000LL) != 0
      && (*((_QWORD *)v3 + 3) & 0x800000000000LL) == *((_QWORD *)v3 + 3) )
    {
      v4 = *a1;
      v10 = 0;
      v6 = v4;
      v8 = &v6;
      v9 = 4;
      LODWORD(v2) = TlgWrite(v3, &unk_18016AED9, 0LL, 0LL, 3u, &pData);
    }
  }
  return (int)v2;
}
