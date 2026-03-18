/*
 * XREFs of ?ProcessFrozenProcesses@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_DEVICE@@PEA_N@Z @ 0x1C00B4708
 * Callers:
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C00B4368 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003750 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00037AC (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1C00B4ADC (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 */

void __fastcall VIDMM_WORKER_THREAD::ProcessFrozenProcesses(
        VIDMM_WORKER_THREAD *this,
        struct VIDMM_DEVICE *a2,
        bool *a3)
{
  _QWORD **v6; // rax
  _QWORD *v7; // rbx
  VIDMM_PROCESS_ADAPTER_INFO *v8; // rcx
  __int64 v9; // rdx
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  *a3 = 0;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v10,
    (struct DXGPUSHLOCK *const)(*(_QWORD *)this + 40968LL));
  v6 = (_QWORD **)(*(_QWORD *)this + 41008LL);
  v7 = *v6;
  while ( v7 != v6 )
  {
    v8 = (VIDMM_PROCESS_ADAPTER_INFO *)(v7 - 3);
    if ( *((_QWORD **)a2 + 2) != v7 - 3 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)v8 + 5) + 32LL);
      if ( v9 )
      {
        if ( *(_BYTE *)(v9 + 412) && VIDMM_PROCESS_ADAPTER_INFO::SuspendAllDevices(v8, 1) )
          *a3 = 1;
      }
    }
    v7 = (_QWORD *)*v7;
    v6 = (_QWORD **)(*(_QWORD *)this + 41008LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
}
