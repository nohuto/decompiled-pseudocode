/*
 * XREFs of ?RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x180063784
 * Callers:
 *     ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180061004 (-RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800637F8 (-RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall RmpGpuMonitorDisable(struct _RM_GPU_MONITOR *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  *((_DWORD *)a1 + 11) &= ~1u;
  if ( dword_18009B0B0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
      TlgWrite(v1, &unk_180087CAC, 0LL, 0LL, 2u, &pData);
  }
}
