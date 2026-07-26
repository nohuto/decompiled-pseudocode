/*
 * XREFs of NdisQueryDiagnosticSetting @ 0x1C0119850
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0032B90 (WPP_RECORDER_SF_S.c)
 *     wcscmp_0 @ 0x1C0041096 (wcscmp_0.c)
 *     WPP_RECORDER_SF_SD @ 0x1C0080460 (WPP_RECORDER_SF_SD_ea_1C0080460.c)
 */

__int64 __fastcall NdisQueryDiagnosticSetting(const wchar_t *a1)
{
  char v3[4]; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+30h] [rbp-18h]

  if ( !wcscmp_0(a1, L"NblTracking") )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v3 = *(_DWORD *)ndisNblTrackerMode;
      WPP_RECORDER_SF_SD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x1Bu,
        0xFu,
        (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
        a1,
        *(_DWORD *)v3);
    }
    return *(unsigned int *)ndisNblTrackerMode;
  }
  else if ( !wcscmp_0(a1, L"OidWatchdogTimeout") )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 270000;
      WPP_RECORDER_SF_SD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x1Bu,
        0x10u,
        (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
        a1,
        v4);
    }
    return 270000LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0x1Bu,
        0x11u,
        (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
        a1);
    return 0xFFFFFFFFLL;
  }
}
