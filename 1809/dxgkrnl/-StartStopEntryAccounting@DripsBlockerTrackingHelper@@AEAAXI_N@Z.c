/*
 * XREFs of ?StartStopEntryAccounting@DripsBlockerTrackingHelper@@AEAAXI_N@Z @ 0x1C021237C
 * Callers:
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C020E020 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXPEAVDripsBlockerInfoList@@@Z @ 0x1C020F5CC (-FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXPEAVDripsBlockerInfoList@@@Z.c)
 *     ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02116A4 (-RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@.c)
 *     ?StartStopAccounting@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C02121E8 (-StartStopAccounting@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 * Callees:
 *     ?AddActiveTime@DripsBlockerTrackingHelper@@AEAAXI@Z @ 0x1C020DE30 (-AddActiveTime@DripsBlockerTrackingHelper@@AEAAXI@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::StartStopEntryAccounting(LARGE_INTEGER *this, unsigned int a2, char a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdi

  if ( a3 )
  {
    v4 = 9LL * a2;
    if ( !LOBYTE(this[9 * a2 + 4].LowPart) )
    {
      this[9 * a2] = KeQueryPerformanceCounter(0LL);
      LOBYTE(this[v4 + 4].LowPart) = 1;
    }
  }
  else
  {
    v5 = 9LL * a2;
    if ( LOBYTE(this[9 * a2 + 4].LowPart) == 1 )
    {
      DripsBlockerTrackingHelper::AddActiveTime((DripsBlockerTrackingHelper *)this, a2);
      LOBYTE(this[v5 + 4].LowPart) = 0;
      BYTE2(this[v5 + 8].u.LowPart) = 0;
    }
  }
}
