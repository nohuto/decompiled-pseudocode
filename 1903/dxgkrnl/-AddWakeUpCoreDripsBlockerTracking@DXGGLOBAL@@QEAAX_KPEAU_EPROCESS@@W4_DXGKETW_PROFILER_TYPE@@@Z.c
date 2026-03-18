/*
 * XREFs of ?AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0241458
 * Callers:
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01EFA3C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReportGpuWakeupWorkItemCallback@DXGGLOBAL@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0245700 (-ReportGpuWakeupWorkItemCallback@DXGGLOBAL@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0241514 (-AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_T.c)
 */

void __fastcall DXGGLOBAL::AddWakeUpCoreDripsBlockerTracking(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1688) && *(_BYTE *)(a1 + 303824) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGFASTMUTEX *const)(a1 + 1696), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
      DripsBlockerTrackingHelper::AddWakeUpToProcessEntry(a1 + 1744, a2, a3, a4);
      if ( v9[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdEvent(a1);
    *(_QWORD *)(v8 + 24) = 5077LL;
    WdLogEvent5_WdEvent(v8);
  }
}
