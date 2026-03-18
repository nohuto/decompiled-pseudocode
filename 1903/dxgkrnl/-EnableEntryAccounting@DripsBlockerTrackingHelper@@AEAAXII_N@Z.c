/*
 * XREFs of ?EnableEntryAccounting@DripsBlockerTrackingHelper@@AEAAXII_N@Z @ 0x1C0242F18
 * Callers:
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0241320 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 *     ?EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C0242C60 (-EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 *     ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1C02431CC (-EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z.c)
 *     ?FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ @ 0x1C0243524 (-FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ.c)
 *     ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0245534 (-RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TY.c)
 * Callees:
 *     ?AddActiveTime@DripsBlockerTrackingHelper@@AEAAXII@Z @ 0x1C0240E0C (-AddActiveTime@DripsBlockerTrackingHelper@@AEAAXII@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::EnableEntryAccounting(
        DripsBlockerTrackingHelper *this,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // rdi
  char *v6; // rbp
  __int64 v7; // rsi

  v4 = a3;
  if ( a4 )
  {
    v6 = (char *)this + 4720 * a2;
    if ( !v6[72 * a3 + 112] && !*((_BYTE *)this + 302104) )
    {
      *(LARGE_INTEGER *)&v6[72 * a3 + 120] = KeQueryPerformanceCounter(0LL);
      v6[72 * v4 + 112] = 1;
    }
  }
  else
  {
    v7 = 4720LL * a2;
    if ( *((_BYTE *)this + 72 * a3 + v7 + 112) == 1 )
    {
      DripsBlockerTrackingHelper::AddActiveTime(this, a2, a3);
      *((_BYTE *)this + 72 * v4 + v7 + 112) = 0;
      *(_DWORD *)((char *)this + 72 * v4 + v7 + 144) = 0;
    }
  }
}
