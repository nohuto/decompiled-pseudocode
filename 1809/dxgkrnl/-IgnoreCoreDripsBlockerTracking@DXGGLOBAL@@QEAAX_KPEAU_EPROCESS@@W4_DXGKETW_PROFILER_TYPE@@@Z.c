/*
 * XREFs of ?IgnoreCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00E4290
 * Callers:
 *     DpiGetDxgAdapterSafe @ 0x1C00E3F4C (DpiGetDxgAdapterSafe.c)
 *     DxgkIgnoreCoreDripsBlockerTracking @ 0x1C013BB54 (DxgkIgnoreCoreDripsBlockerTracking.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01BC7E4 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?DoGetProcessEntry@DripsBlockerTrackingHelper@@AEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI@Z @ 0x1C020E988 (-DoGetProcessEntry@DripsBlockerTrackingHelper@@AEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@P.c)
 */

void __fastcall DXGGLOBAL::IgnoreCoreDripsBlockerTracking(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rax
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdEvent(a1, 0LL);
    *(_QWORD *)(v8 + 24) = 5016LL;
LABEL_7:
    WdLogEvent5_WdEvent(v8);
    return;
  }
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdEvent(a1, a2);
    *(_QWORD *)(v8 + 24) = 5022LL;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a1 + 1720) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGFASTMUTEX *const)(a1 + 1736), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
    v10 = 0;
    if ( (int)DripsBlockerTrackingHelper::DoGetProcessEntry(a1 + 1800, a2, a3, a4, &v10) >= 0 )
      *(_BYTE *)(a1 + 72LL * v10 + 1866) = 1;
    if ( v9[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  }
}
