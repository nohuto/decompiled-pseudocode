/*
 * XREFs of ?OnViewHidden@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180091CB0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Provider@MeetNowTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18009217C (-Provider@MeetNowTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 */

__int64 __fastcall MeetNowExperienceManager::OnViewHidden(
        MeetNowExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  const struct _TlgProvider_t *v2; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v2 = MeetNowTelemetryLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
    TlgWrite(v2, &unk_1804C5076, 0LL, 0LL, 2u, &pData);
  return 0LL;
}
