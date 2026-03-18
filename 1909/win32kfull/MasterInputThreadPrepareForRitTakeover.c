/*
 * XREFs of MasterInputThreadPrepareForRitTakeover @ 0x1C0161A64
 * Callers:
 *     EditionDeactivateMitInput @ 0x1C0161920 (EditionDeactivateMitInput.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C01342A8 (WPP_RECORDER_SF_s.c)
 *     ResetPointerDevices @ 0x1C0139DC0 (ResetPointerDevices.c)
 *     ?RITORDIT@@YAPEADXZ @ 0x1C0161AD4 (-RITORDIT@@YAPEADXZ.c)
 */

__int64 MasterInputThreadPrepareForRitTakeover()
{
  const char *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v0 = RITORDIT();
    WPP_RECORDER_SF_s(v2, v1, 0x10u, 0xAu, (__int64)&WPP_a6fde0183d413f1722038a78a2860c55_Traceguids, v0);
  }
  ResetPointerDevices();
  gbPendRecreateTouchInjectionDevices = 1;
  CleanupSensorExplicitly(2LL);
  return EtwTraceDitDisEngaged();
}
