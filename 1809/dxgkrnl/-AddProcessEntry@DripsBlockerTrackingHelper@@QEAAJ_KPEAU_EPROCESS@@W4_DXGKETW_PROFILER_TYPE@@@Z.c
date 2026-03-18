/*
 * XREFs of ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C020E020
 * Callers:
 *     ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00F92D4 (-StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DoGetProcessEntry@DripsBlockerTrackingHelper@@AEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI@Z @ 0x1C020E988 (-DoGetProcessEntry@DripsBlockerTrackingHelper@@AEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@P.c)
 *     ?StartStopEntryAccounting@DripsBlockerTrackingHelper@@AEAAXI_N@Z @ 0x1C021237C (-StartStopEntryAccounting@DripsBlockerTrackingHelper@@AEAAXI_N@Z.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::AddProcessEntry(
        DripsBlockerTrackingHelper *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int ProcessEntry; // edi
  __int64 v6; // rcx
  __int64 v7; // r9
  unsigned int v9[6]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0;
  ProcessEntry = DripsBlockerTrackingHelper::DoGetProcessEntry(a1, a2, a3, a4, v9);
  if ( ProcessEntry >= 0 )
  {
    v6 = v9[0];
    v7 = 9LL * v9[0];
    ++*((_DWORD *)a1 + 2 * v7 + 6);
    ++*((_DWORD *)a1 + 2 * v7 + 7);
    if ( *((_DWORD *)a1 + 2 * v7 + 6) == 1 )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v6) + 431) )
        DripsBlockerTrackingHelper::StartStopEntryAccounting(a1, v9[0], 1);
    }
  }
  return (unsigned int)ProcessEntry;
}
