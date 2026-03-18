/*
 * XREFs of ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C002DF08
 * Callers:
 *     DxgNotifyVSyncCB @ 0x1C0037E30 (DxgNotifyVSyncCB.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z @ 0x1C0030668 (-NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z.c)
 *     ?RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C003D144 (-RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::NotifyVSync(DXGADAPTER *this, unsigned int a2, const GUID *a3)
{
  __int64 v5; // rcx
  ADAPTER_DISPLAY *v6; // rcx
  unsigned int i; // edi
  __int64 v8; // rcx
  const GUID *v9; // r8
  int v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h]
  char v12; // [rsp+30h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+60h] [rbp+10h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp+20h] BYREF

  v10 = -1;
  v11 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v12 = 1;
    v10 = 8009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 8009);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v10, 8009);
  v15 = KeQueryInterruptTimePrecise(&v14) / 0xAuLL;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 480, &LockHandle);
  if ( !*((_DWORD *)this + 912) )
  {
    v5 = *((_QWORD *)this + 482);
    if ( v5 )
      _InterlockedExchange64((volatile __int64 *)this + 483, v14 - v5);
    *((_QWORD *)this + 482) = v14;
  }
  v6 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 315);
  if ( v6 )
    ADAPTER_DISPLAY::NotifyVSync(v6, a2, &v15);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  for ( i = 0; i < *((_DWORD *)this + 970); ++i )
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordVSync((DXGPOWERSTATISTICSTRANSITIONENGINE *)(*((_QWORD *)this + 484)
                                                                                         + 136LL
                                                                                         + 248LL * i));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( v12 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v8, &EventProfilerExit, v9, v10);
  }
}
