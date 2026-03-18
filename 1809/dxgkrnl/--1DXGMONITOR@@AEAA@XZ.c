/*
 * XREFs of ??1DXGMONITOR@@AEAA@XZ @ 0x1C0133988
 * Callers:
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C0018C34 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C0133A90 (-_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0133AE8 (-_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C0133B3C (-_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0133B9C (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C0133CBC (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C0133E70 (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 */

void __fastcall DXGMONITOR::~DXGMONITOR(DXGMONITOR *this)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  GUID ActivityId; // [rsp+20h] [rbp-28h] BYREF

  EtwActivityIdControl(3u, &ActivityId);
  LOBYTE(v2) = 1;
  DXGMONITOR::LogMonitorObjectOnOffState(this, &ActivityId, 0LL, v2);
  if ( *((_DWORD *)this + 128) )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdError(v3);
    v6[3] = *((unsigned int *)this + 128);
    v6[4] = this;
    v6[5] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
    WdLogEvent5_WdError(v6);
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)((char *)this + 400), this, 0x20u);
  DXGMONITOR::_DestroyTtmDevice(this);
  DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(this);
  DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(this);
  DXGMONITOR::_CleanupRegistryOverridedFrequencyRanges(this);
  DXGMONITOR::_CleanupMonitorDescriptors(this);
  v4 = (void *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    operator delete[](v4);
    *((_QWORD *)this + 14) = 0LL;
  }
  if ( *((_QWORD *)this + 71) )
  {
    KeAcquireGuardedMutex(&DXGMONITOR::_UniqueTableLock);
    v7 = *((_QWORD *)this + 71);
    if ( (*(_DWORD *)(v7 + 16))-- == 1 )
    {
      v9 = (_QWORD *)*((_QWORD *)this + 71);
      v10 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      operator delete[](*((void **)this + 71));
    }
    *((_QWORD *)this + 71) = 0LL;
    KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  }
  if ( *((_BYTE *)this + 516) )
  {
    if ( !*((_QWORD *)this + 66) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v12);
    }
    RtlFreeUnicodeString((PUNICODE_STRING)((char *)this + 520));
    *((_QWORD *)this + 66) = 0LL;
    *((_BYTE *)this + 516) = 0;
  }
  *((_QWORD *)this + 68) = 0LL;
  v5 = (void *)*((_QWORD *)this + 70);
  if ( v5 )
  {
    operator delete[](v5);
    *((_QWORD *)this + 70) = 0LL;
  }
  ExDeleteResourceLite((PERESOURCE)((char *)this + 296));
}
