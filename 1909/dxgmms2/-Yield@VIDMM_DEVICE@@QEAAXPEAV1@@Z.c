/*
 * XREFs of ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C00B3740
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0088B00 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0ppq @ 0x1C0025CF0 (McTemplateK0ppq.c)
 *     McTemplateK0pq @ 0x1C00261CC (McTemplateK0pq.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00602D0 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007D3A4 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007D694 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00B33AC (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::Yield(VIDMM_DEVICE *this, struct VIDMM_DEVICE *a2)
{
  unsigned int v3; // esi
  __int64 v5; // rbx
  __int64 v6; // rcx
  const GUID *v7; // r8
  __int64 v8; // rcx
  const GUID *v9; // r8
  __int64 v10; // rbx
  _QWORD *v11; // rax

  v3 = *((_DWORD *)this + 13) & 7;
  *((_QWORD *)this + 29) = a2;
  if ( v3 != 2 )
  {
    if ( v3 )
    {
      if ( v3 == 1 )
        VIDMM_DEVICE::SuspendPagingQueues(this);
    }
    else
    {
      VIDMM_DEVICE::SuspendSchedulerDevice(this);
      VIDMM_DEVICE::SuspendPagingQueues(this);
      v5 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)this + 28) = *((_QWORD *)this + 27) - v5 * KeQueryTimeIncrement();
    }
    VIDMM_DEVICE::MoveToPenaltyBoxBand((__int64)this, 2);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      McTemplateK0pq(v6, &EventVidMmSuspendDevice, v7, *((_QWORD *)this + 3), 2);
  }
  VIDMM_DEVICE::FaultAllAllocations(this);
  v10 = *((_QWORD *)a2 + 27);
  *((_QWORD *)this + 26) = v10;
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8);
    v11[3] = this;
    v11[4] = *((_QWORD *)this + 29);
    v8 = v3;
    v11[5] = v3;
    v11[6] = 3LL;
    v11[7] = v10;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
    McTemplateK0ppq(
      v8,
      &EventVidMmYieldDevice,
      v9,
      *((_QWORD *)this + 3),
      *((_QWORD *)a2 + 3),
      v10 - *(_DWORD *)(*(_QWORD *)this + 4608LL));
}
