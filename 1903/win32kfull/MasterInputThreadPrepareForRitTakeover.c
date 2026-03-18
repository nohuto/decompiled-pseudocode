/*
 * XREFs of MasterInputThreadPrepareForRitTakeover @ 0x1C0160AA4
 * Callers:
 *     EditionDeactivateMitInput @ 0x1C0160960 (EditionDeactivateMitInput.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0019388 (WPP_RECORDER_SF_s.c)
 *     ResetPointerDevices @ 0x1C0081690 (ResetPointerDevices.c)
 *     ?RITORDIT@@YAPEADXZ @ 0x1C0160B14 (-RITORDIT@@YAPEADXZ.c)
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
