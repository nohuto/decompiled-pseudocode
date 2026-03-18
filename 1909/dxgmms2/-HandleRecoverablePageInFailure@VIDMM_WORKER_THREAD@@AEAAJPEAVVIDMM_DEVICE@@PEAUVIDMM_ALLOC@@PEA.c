/*
 * XREFs of ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C00B4368
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0088B00 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001514 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001710 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     ?DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEA_N@Z @ 0x1C00B38F8 (-DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 *     ?ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z @ 0x1C00B4610 (-ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z.c)
 *     ?ProcessFrozenProcesses@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_DEVICE@@PEA_N@Z @ 0x1C00B4708 (-ProcessFrozenProcesses@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_DEVICE@@PEA_N@Z.c)
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z @ 0x1C00B47B0 (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z.c)
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEA_NPEAPEAV3@@Z @ 0x1C00B4BC0 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
 */

__int64 VIDMM_WORKER_THREAD::HandleRecoverablePageInFailure(
        VIDMM_WORKER_THREAD *a1,
        struct VIDMM_DEVICE *a2,
        __int64 **a3,
        ...)
{
  unsigned int v5; // edi
  __int64 v7; // rbx
  DXGPUSHLOCK *v8; // r13
  _QWORD **v9; // rsi
  _QWORD **v10; // rbx
  _QWORD *v11; // rax
  int v12; // esi
  __int64 v13; // r10
  int v14; // r9d
  char v15; // r8
  __int64 v16; // rbx
  __int64 v17; // r8
  int v18; // ecx
  int v19; // eax
  va_list v21; // [rsp+28h] [rbp-28h]
  bool v22; // [rsp+40h] [rbp-10h] BYREF
  __int64 v23; // [rsp+90h] [rbp+40h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+58h] BYREF
  va_list va; // [rsp+A8h] [rbp+58h]
  __int64 v26; // [rsp+B0h] [rbp+60h]
  __int64 v27; // [rsp+B8h] [rbp+68h]
  __int64 v28; // [rsp+C0h] [rbp+70h]
  int *v29; // [rsp+C8h] [rbp+78h]
  _QWORD *v30; // [rsp+D0h] [rbp+80h]
  va_list va1; // [rsp+D8h] [rbp+88h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v24 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, _QWORD);
  v28 = va_arg(va1, _QWORD);
  v29 = va_arg(va1, int *);
  v30 = va_arg(va1, _QWORD *);
  v5 = 0;
  LOBYTE(v24) = 0;
  VIDMM_WORKER_THREAD::ProcessPendingTerminations(a1, 1, (bool *)va, (bool *)&v23);
  KeWaitForSingleObject((PVOID)(*(_QWORD *)a1 + 41064LL), Executive, 0, 0, 0LL);
  v7 = *(_QWORD *)a1;
  v8 = (DXGPUSHLOCK *)(*(_QWORD *)a1 + 40024LL);
  DXGPUSHLOCK::AcquireExclusive(v8);
  v9 = (_QWORD **)(v7 + 40008);
  while ( 1 )
  {
    v10 = (_QWORD **)*v9;
    if ( (_QWORD **)(*v9)[1] != v9 || (v11 = *v10, (_QWORD **)(*v10)[1] != v10) )
      __fastfail(3u);
    *v9 = v11;
    v11[1] = v9;
    if ( v10 == v9 )
      break;
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD *, _QWORD *))(*v10[2] + 24LL))(v10[2], 0LL, v10[3], v10[4]);
    operator delete(v10);
  }
  *((_QWORD *)v8 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
  VIDMM_WORKER_THREAD::ProcessEvictQueues(a1, &v22);
  VIDMM_WORKER_THREAD::ProcessFrozenProcesses(a1, a2, (bool *)&v23);
  if ( !((unsigned __int8)v24 | (unsigned __int8)(v22 | v23)) )
  {
    v12 = v28;
    v13 = **a3;
    v14 = *(_DWORD *)(v13 + 76);
    v15 = *(_BYTE *)(1560LL * (v14 & 0x3F) + *(_QWORD *)(*(_QWORD *)a1 + 40184LL) + 437);
    if ( v15 >= 0
      || (*(_DWORD *)(*(_QWORD *)a1 + 7040LL) & 0x2000) != 0
      || ((unsigned __int8)~((unsigned __int8)v15 >> 2) & ((*(_DWORD *)a3[12] & 0x20000) != 0)) != 0
      || (v14 & 0x400) != 0
      || (va_copy(v21, va), VIDMM_WORKER_THREAD::DemoteAllocationsToFitGlobalAlloc((__int64 *)a1, v13, a2), !(_BYTE)v24) )
    {
      v16 = v27;
      v17 = 0LL;
      v23 = 0LL;
      if ( *(_BYTE *)(v27 + 8) )
      {
LABEL_19:
        if ( (*(_DWORD *)a3[12] & 0x20000) == 0
          || (*(_BYTE *)(1560LL * (*(_DWORD *)(**a3 + 76) & 0x3F) + *(_QWORD *)(*(_QWORD *)a1 + 40184LL) + 437) & 4) != 0
          || *(_BYTE *)(v16 + 8) )
        {
          v19 = *(_DWORD *)v16;
          if ( *(_DWORD *)v16 != 2 )
          {
LABEL_28:
            *v29 = v19;
            return v5;
          }
          if ( v17 )
          {
            *v30 = v17;
            return 3223191812LL;
          }
          v19 = 2;
        }
        else
        {
          v19 = *(_DWORD *)v16;
        }
        v5 = -1073741823;
        goto LABEL_28;
      }
      if ( v26 && *(_DWORD *)(v26 + 48) == 203 )
        v18 = *(_DWORD *)(v26 + 80);
      else
        v18 = 0;
      LODWORD(v21) = v18;
      VIDMM_WORKER_THREAD::SuspendDevices(a1, **a3, a2, v27, v12, v21, (__int64 *)va, &v23);
      if ( !(_BYTE)v24 )
      {
        v17 = v23;
        goto LABEL_19;
      }
    }
  }
  return 0LL;
}
