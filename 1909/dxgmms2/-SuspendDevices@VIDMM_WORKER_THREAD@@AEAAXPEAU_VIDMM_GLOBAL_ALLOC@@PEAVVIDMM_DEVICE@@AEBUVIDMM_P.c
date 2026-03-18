/*
 * XREFs of ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEA_NPEAPEAV3@@Z @ 0x1C00B4BC0
 * Callers:
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C00B4368 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001E74 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003750 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00117A4 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00602D0 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B30B0 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B3478 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEAV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAPEAV2@@Z @ 0x1C00B4214 (-GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEAV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1C00B4ADC (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 *     ?FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C00BF7E0 (-FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VID.c)
 */

void __fastcall VIDMM_WORKER_THREAD::SuspendDevices(
        __int64 *a1,
        __int64 a2,
        VIDMM_DEVICE *a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        _BYTE *a7,
        struct VIDMM_DEVICE **a8)
{
  __int64 v9; // r10
  int v10; // r14d
  unsigned int v11; // r9d
  __int64 *v13; // r8
  int v14; // r12d
  unsigned int v15; // r13d
  unsigned int v16; // edi
  char v17; // cl
  int v18; // edx
  unsigned int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rbx
  VIDMM_GLOBAL *v23; // rcx
  struct _LIST_ENTRY *v24; // rdi
  struct _LIST_ENTRY *v25; // rdx
  VIDMM_GLOBAL **v26; // rbx
  VIDMM_DEVICE *DeviceToSuspend; // rax
  VIDMM_DEVICE *v28; // rbx
  VIDMM_PROCESS_ADAPTER_INFO *v29; // rcx
  int v30; // eax
  struct _LIST_ENTRY *v31[2]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v32[40]; // [rsp+40h] [rbp-28h] BYREF
  int v34; // [rsp+B8h] [rbp+50h]
  unsigned int v37; // [rsp+E0h] [rbp+78h]

  v9 = a4;
  v10 = 0;
  v11 = *(_DWORD *)(a2 + 76) & 0x3F;
  v13 = a1;
  v37 = v11;
  *a7 = 0;
  if ( *(int *)(v9 + 4) < 0 )
    return;
  while ( 1 )
  {
    v14 = *(_DWORD *)(a2 + 68);
    v15 = 0;
    if ( v14 )
      break;
LABEL_26:
    v30 = v10++;
    if ( v30 >= *(_DWORD *)(v9 + 4) )
      return;
  }
  v16 = *(_DWORD *)(a2 + 72) == 0 ? 6 : 0;
  while ( v16 > 5 )
  {
    v19 = v15;
    v18 = v15++;
    if ( _bittest(&v14, v19) )
      goto LABEL_8;
LABEL_25:
    if ( !v14 )
      goto LABEL_26;
  }
  v17 = 6 * v16++;
  if ( ((*(_DWORD *)(a2 + 72) >> v17) & 0x1F) == 0 )
    goto LABEL_25;
  v18 = ((*(_DWORD *)(a2 + 72) >> v17) & 0x1F) - 1;
LABEL_8:
  v20 = *v13;
  v14 &= ~(1 << v18);
  v21 = (unsigned int)(*(_DWORD *)(1560LL * v11 + *(_QWORD *)(v20 + 40184) + 20) + v18);
  v34 = v21;
  if ( (**(_DWORD **)(a2 + 504) & 0x20000) != 0 )
  {
    v10 = *(_DWORD *)(v9 + 4);
    v22 = *(_QWORD *)(*(_QWORD *)(v20 + 3712) + 8 * v21);
    v31[1] = (struct _LIST_ENTRY *)v31;
    v31[0] = (struct _LIST_ENTRY *)v31;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v32,
      (struct _KTHREAD **)(v20 + 41240));
    if ( (unsigned __int8)VIDMM_SEGMENT::FreeSpaceForSecureResource(v22, v31, a2, a6) )
    {
      if ( *(_DWORD *)(v22 + 412) )
      {
        v24 = v31[0];
        if ( (struct _LIST_ENTRY **)v31[0] != v31 )
        {
          *a7 = 1;
          do
          {
            v25 = v24;
            v26 = (VIDMM_GLOBAL **)&v24[-11];
            v24 = v24->Flink;
            VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v23, v25);
            VIDMM_DEVICE::PartiallySuspend(v26);
            VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v26);
          }
          while ( v24 != (struct _LIST_ENTRY *)v31 );
        }
LABEL_14:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
        return;
      }
    }
    else
    {
      while ( (struct _LIST_ENTRY **)v31[0] != v31 )
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v23, v31[0]);
      if ( *(_DWORD *)(v22 + 412) )
        goto LABEL_14;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
    LODWORD(v21) = v34;
    v20 = *a1;
  }
  DeviceToSuspend = VIDMM_SEGMENT::GetDeviceToSuspend(
                      *(_QWORD *)(*(_QWORD *)(v20 + 3712) + 8LL * (unsigned int)v21),
                      a3,
                      v10,
                      a5,
                      a8);
  v28 = DeviceToSuspend;
  if ( !DeviceToSuspend )
  {
LABEL_24:
    v11 = v37;
    v9 = a4;
    v13 = a1;
    goto LABEL_25;
  }
  if ( (*((_DWORD *)DeviceToSuspend + 13) & 7) != 1 && v10 != 2 )
  {
    v29 = (VIDMM_PROCESS_ADAPTER_INFO *)*((_QWORD *)DeviceToSuspend + 2);
    if ( v29 && VIDMM_PROCESS_ADAPTER_INFO::SuspendAllDevices(v29, 0) )
      goto LABEL_29;
    goto LABEL_24;
  }
  VIDMM_DEVICE::FullySuspend((__int64 **)DeviceToSuspend);
  VIDMM_DEVICE::FaultAllAllocations(v28);
LABEL_29:
  *a7 = 1;
}
