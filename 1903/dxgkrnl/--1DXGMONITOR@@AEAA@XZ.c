/*
 * XREFs of ??1DXGMONITOR@@AEAA@XZ @ 0x1C02CDC44
 * Callers:
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C0056004 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C014A724 (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C016FEA4 (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C01747EC (-_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ @ 0x1C02CAC0C (-_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ @ 0x1C02CE02C (-_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C02CE134 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 *     ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C02CEC44 (-_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 */

void __fastcall DXGMONITOR::~DXGMONITOR(DXGMONITOR *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rdx
  void *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  ReferenceCounted *v13; // rcx
  GUID ActivityId; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DXGMONITOR::LogMonitorObjectOnOffState((char *)this, (__int64)&ActivityId, 0, 1);
  if ( *((_DWORD *)this + 128) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdError(v3, v2, v4);
    v5[3] = *((unsigned int *)this + 128);
    v5[4] = this;
    v5[5] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
    WdLogEvent5_WdError(v5);
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)((char *)this + 400), this, 0x20u);
  DXGMONITOR::_DestroyTtmDevice(this);
  DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(this, v6, v7);
  DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(this, v8);
  DXGMONITOR::_CleanupRegistryOverridedFrequencyRanges(this, v9);
  DXGMONITOR::_CleanupMonitorDescriptors(this);
  v10 = (void *)*((_QWORD *)this + 14);
  if ( v10 )
  {
    operator delete[](v10);
    *((_QWORD *)this + 14) = 0LL;
  }
  DXGMONITOR::_CleanupMonitorCCDName(this);
  v13 = (ReferenceCounted *)*((_QWORD *)this + 150);
  if ( v13 )
    ReferenceCounted::Release(v13, v11, v12);
  ExDeleteResourceLite((PERESOURCE)((char *)this + 296));
}
