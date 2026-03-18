/*
 * XREFs of ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEA_NPEAPEAV3@@Z @ 0x1C00B1B18
 * Callers:
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C00B12C8 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00023E8 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0012BB8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0076C38 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B0010 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B03D8 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEAV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAPEAV2@@Z @ 0x1C00B1174 (-GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEAV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1C00B1A34 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 *     ?FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C00BCC40 (-FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VID.c)
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
  int v9; // r14d
  unsigned int v11; // r10d
  __int64 *v12; // r8
  int v13; // r12d
  unsigned int v14; // r13d
  unsigned int v15; // edi
  char v16; // cl
  int v17; // edx
  unsigned int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rbx
  VIDMM_GLOBAL *v22; // rcx
  struct _LIST_ENTRY *v23; // rdi
  struct _LIST_ENTRY *v24; // rdx
  VIDMM_GLOBAL **v25; // rbx
  VIDMM_DEVICE *DeviceToSuspend; // rax
  VIDMM_DEVICE *v27; // rbx
  VIDMM_PROCESS_ADAPTER_INFO *v28; // rcx
  struct _LIST_ENTRY *v29[2]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v30[40]; // [rsp+40h] [rbp-28h] BYREF
  int v32; // [rsp+B8h] [rbp+50h]
  __int64 v34; // [rsp+C8h] [rbp+60h]
  unsigned int v35; // [rsp+E0h] [rbp+78h]

  v34 = a4;
  v9 = 0;
  v11 = *(_DWORD *)(a2 + 76) & 0x3F;
  v12 = a1;
  v35 = v11;
  *a7 = 0;
  if ( *(int *)(a4 + 4) < 0 )
    return;
  while ( 1 )
  {
    v13 = *(_DWORD *)(a2 + 68);
    v14 = 0;
    if ( v13 )
      break;
LABEL_26:
    if ( ++v9 > *(_DWORD *)(a4 + 4) )
      return;
  }
  v15 = *(_DWORD *)(a2 + 72) == 0 ? 6 : 0;
  while ( v15 > 5 )
  {
    v18 = v14;
    v17 = v14++;
    if ( _bittest(&v13, v18) )
      goto LABEL_8;
LABEL_25:
    if ( !v13 )
      goto LABEL_26;
  }
  v16 = 6 * v15++;
  if ( ((*(_DWORD *)(a2 + 72) >> v16) & 0x1F) == 0 )
    goto LABEL_25;
  v17 = ((*(_DWORD *)(a2 + 72) >> v16) & 0x1F) - 1;
LABEL_8:
  v19 = *v12;
  v13 &= ~(1 << v17);
  v20 = (unsigned int)(*(_DWORD *)(1560LL * v11 + *(_QWORD *)(v19 + 40184) + 20) + v17);
  v32 = v20;
  if ( (**(_DWORD **)(a2 + 504) & 0x20000) != 0 )
  {
    v9 = *(_DWORD *)(a4 + 4);
    v21 = *(_QWORD *)(*(_QWORD *)(v19 + 3712) + 8 * v20);
    v29[1] = (struct _LIST_ENTRY *)v29;
    v29[0] = (struct _LIST_ENTRY *)v29;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v30,
      (struct _KTHREAD **)(v19 + 41240));
    if ( (unsigned __int8)VIDMM_SEGMENT::FreeSpaceForSecureResource(v21, v29, a2, a6) )
    {
      if ( *(_DWORD *)(v21 + 412) )
      {
        v23 = v29[0];
        if ( (struct _LIST_ENTRY **)v29[0] != v29 )
        {
          *a7 = 1;
          do
          {
            v24 = v23;
            v25 = (VIDMM_GLOBAL **)&v23[-11];
            v23 = v23->Flink;
            VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v22, v24);
            VIDMM_DEVICE::PartiallySuspend(v25);
            VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v25);
          }
          while ( v23 != (struct _LIST_ENTRY *)v29 );
        }
LABEL_14:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
        return;
      }
    }
    else
    {
      while ( (struct _LIST_ENTRY **)v29[0] != v29 )
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v22, v29[0]);
      if ( *(_DWORD *)(v21 + 412) )
        goto LABEL_14;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
    LODWORD(v20) = v32;
    v19 = *a1;
  }
  DeviceToSuspend = VIDMM_SEGMENT::GetDeviceToSuspend(
                      *(_QWORD *)(*(_QWORD *)(v19 + 3712) + 8LL * (unsigned int)v20),
                      a3,
                      v9,
                      a5,
                      a8);
  v27 = DeviceToSuspend;
  if ( !DeviceToSuspend )
  {
LABEL_24:
    a4 = v34;
    v11 = v35;
    v12 = a1;
    goto LABEL_25;
  }
  if ( (*((_DWORD *)DeviceToSuspend + 13) & 7) != 1 && v9 != 2 )
  {
    v28 = (VIDMM_PROCESS_ADAPTER_INFO *)*((_QWORD *)DeviceToSuspend + 2);
    if ( v28 && VIDMM_PROCESS_ADAPTER_INFO::SuspendAllDevices(v28, 0) )
      goto LABEL_29;
    goto LABEL_24;
  }
  VIDMM_DEVICE::FullySuspend((__int64 **)DeviceToSuspend);
  VIDMM_DEVICE::FaultAllAllocations(v27);
LABEL_29:
  *a7 = 1;
}
