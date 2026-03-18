/*
 * XREFs of ?StopCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00E42EC
 * Callers:
 *     DpiGetDxgAdapterSafe @ 0x1C00E3F4C (DpiGetDxgAdapterSafe.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     McTemplateK0xptq @ 0x1C003C148 (McTemplateK0xptq.c)
 *     ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02116A4 (-RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@.c)
 */

void __fastcall DXGGLOBAL::StopCoreDripsBlockerTracking(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  _BYTE v11[24]; // [rsp+40h] [rbp-18h] BYREF

  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdEvent(a1, 0LL);
    *(_QWORD *)(v8 + 24) = 4959LL;
LABEL_6:
    WdLogEvent5_WdEvent(v8);
    return;
  }
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdEvent(a1, a2);
    *(_QWORD *)(v8 + 24) = 4965LL;
    goto LABEL_6;
  }
  if ( *(_DWORD *)(a1 + 1720) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGFASTMUTEX *const)(a1 + 1736), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
    DripsBlockerTrackingHelper::RemoveProcessEntry(a1 + 1800, a2, a3, a4);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      McTemplateK0xptq(v9, &EventStopDripsBlockerTracking, v10, a2, a3);
    if ( v11[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  }
}
