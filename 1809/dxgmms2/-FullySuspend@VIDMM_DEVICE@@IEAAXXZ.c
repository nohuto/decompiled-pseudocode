/*
 * XREFs of ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B0010
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0083F00 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1C00B1A34 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEA_NPEAPEAV3@@Z @ 0x1C00B1B18 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00023E8 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     VidSchDeviceQueuesNotEmpty @ 0x1C0012B8C (VidSchDeviceQueuesNotEmpty.c)
 *     McTemplateK0pq @ 0x1C002672C (McTemplateK0pq.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007BBE8 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C007BD54 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007BED8 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C007C144 (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE.c)
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C00C1504 (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 */

void __fastcall VIDMM_DEVICE::FullySuspend(__int64 **this)
{
  unsigned int v2; // esi
  unsigned int v3; // ebp
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 TimeIncrement; // rcx
  const GUID *v8; // r8
  __int64 v9; // rbx
  _QWORD *v10; // rax
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF

  VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
    (VIDMM_GLOBAL *)*this,
    (struct VIDMM_PROCESS *)this[1],
    (struct VIDMM_DEVICE *)this,
    0);
  v2 = 4;
  v3 = *((_DWORD *)this + 13) & 7;
  if ( !v3 )
    VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)this);
  VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)this);
  this[28] = (__int64 *)qword_1C004D3C0;
  v4 = **this;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4 + 128, 0LL);
  *(_QWORD *)(v4 + 136) = KeGetCurrentThread();
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v11, (struct _KTHREAD **)*this + 5155);
  if ( VidSchDeviceQueuesNotEmpty((__int64)this[4]) || *((_DWORD *)this + 16) )
    v2 = 3;
  VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock((__int64)this, v2);
  v5 = **this + 128;
  *(_QWORD *)(v5 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  if ( (*((_BYTE *)this + 50) & 4) != 0 )
  {
    --*((_DWORD *)*this + 10344);
    *((_BYTE *)this + 50) &= ~4u;
  }
  v6 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v9 = qword_1C004D3B0 + TimeIncrement * v6;
  this[26] = (__int64 *)v9;
  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(TimeIncrement);
    v10[4] = v3;
    TimeIncrement = v2;
    v10[5] = v2;
    v10[3] = this;
    v10[6] = v9;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
    McTemplateK0pq(TimeIncrement, &EventVidMmSuspendDevice, v8, this[3], v2);
  if ( *(_BYTE *)(this[3][5] + 322) )
    VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent(
      (VIDMM_COMMIT_TELEMETRY *)(**this + 184),
      (struct VIDMM_DEVICE *)this,
      1);
}
