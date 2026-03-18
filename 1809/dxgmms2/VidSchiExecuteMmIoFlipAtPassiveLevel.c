/*
 * XREFs of VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002DC20
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C00073A0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiCompleteFlipEntry @ 0x1C000BB50 (VidSchiCompleteFlipEntry.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C000CCE0 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_PRESENT_INFO@@KK@Z @ 0x1C000F06C (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_PRESENT_INFO@.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C000F368 (VidSchiPropagatePresentHistoryToken.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C0016678 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0025FC8 (-NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C002A1D0 (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_.c)
 *     VidSchiComputeFlipEntryStatusAfterFlip @ 0x1C002DA2C (VidSchiComputeFlipEntryStatusAfterFlip.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C0030110 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 */

void __fastcall VidSchiExecuteMmIoFlipAtPassiveLevel(__int64 a1)
{
  __int64 v2; // r15
  __int64 v3; // rsi
  __int64 v4; // r12
  __int64 v5; // r14
  _DWORD *v6; // r13
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  _QWORD *v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v16; // rdx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // [rsp+58h] [rbp-B0h]
  int v24; // [rsp+5Ch] [rbp-ACh] BYREF
  _QWORD v25[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+70h] [rbp-98h]
  _QWORD v27[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v28[48]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v29[268]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v30[48]; // [rsp+918h] [rbp+810h] BYREF
  _BYTE v31[80]; // [rsp+948h] [rbp+840h] BYREF

  v2 = *(unsigned int *)(a1 + 8);
  v3 = *(_QWORD *)a1;
  v4 = *(unsigned int *)(a1 + 16);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 12) + 2576);
  v23 = *(_DWORD *)(a1 + 12);
  v6 = *(_DWORD **)(v5 + 8 * v4 + 24);
  v7 = (__int64)&v6[324 * v2 + 14];
  memset(v29, 0, 0x858uLL);
  memset(v31, 0, sizeof(v31));
  v27[0] = 0LL;
  v27[1] = 0LL;
  memset(v30, 0, 0x28uLL);
  VidSchiSetupMmIoFlipMultiPlaneOverlay3(
    v3,
    v7,
    v23,
    (unsigned int)v29,
    *(_BYTE *)(a1 + 20),
    (__int64)v31,
    (__int64)v27,
    (__int64)v30);
  HIDWORD(v29[1]) |= 8u;
  v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[61])(
         *(_QWORD *)(*(_QWORD *)(v29[0] + 16LL) + 2520LL),
         &v29[1]);
  v12 = v8;
  if ( v8 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9);
    v13[6] = v29;
    v13[3] = 281LL;
    v13[4] = 11LL;
    v13[5] = v12;
    v13[7] = *(_QWORD *)(v3 + 16);
    WdLogEvent5_WdCriticalError(v13);
    __debugbreak();
  }
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v28, (unsigned __int64 *)(v3 + 1648), v11, 0);
  v25[1] = v25;
  v25[0] = v25;
  LOBYTE(v26) = 0;
  if ( (*(_DWORD *)(v7 + 1120) & 0x10) != 0 )
    v14 = ((unsigned __int16)**(_DWORD **)(v7 + 1168) | (unsigned __int16)(**(_DWORD **)(v7 + 1168) >> 10)) & 0x3FF;
  else
    v14 = (1 << *(_DWORD *)(v3 + 140)) - 1;
  *(_DWORD *)(v5 + 2340) &= ~v14;
  v15 = *(unsigned int *)(v7 + 1120);
  if ( (v15 & 0x20) != 0 )
  {
    v16 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v7 + 1136);
    if ( v16 )
      VidSchiPropagatePresentHistoryToken(
        *(PKSPIN_LOCK *)(v7 + 1128),
        v16,
        1,
        (*(_DWORD *)(v7 + 1120) & 0x40) != 0,
        0,
        0,
        *(_QWORD *)(v7 + 1152),
        *(_QWORD *)(v7 + 1144),
        0LL);
  }
  VidSchiComputeFlipEntryStatusAfterFlip(v15, (__int64)v29, &v24);
  v17 = v24;
  VidSchiLogMmIoFlipMultiPlaneOverlay3(v3, (_DWORD *)v7, (__int64)v29, v24);
  *(_DWORD *)(v7 + 1052) = v17;
  if ( v17 == 11 )
  {
    *(_QWORD *)(v7 + 1096) = *(_QWORD *)(v5 + 33184);
    *(_QWORD *)(v7 + 1112) = *(_QWORD *)(v5 + 33176);
    VidSchiUnreferenceDisplayingAllocationsForThisEntry((struct HwQueueStagingList *)v25, v18, v5, v7);
    VidSchiReferenceDisplayingAllocationsForThisEntry((struct HwQueueStagingList *)v25, v3, (_WORD *)v5, v7);
    VidSchiCompleteFlipEntry((struct HwQueueStagingList *)v25, v3, v23, v4, v2, v2, 0, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(v7 + 1120) & 0x10) != 0 )
      v20 = ((unsigned __int16)**(_DWORD **)(v7 + 1168) | (unsigned __int16)(**(_DWORD **)(v7 + 1168) >> 10)) & 0x3FF;
    else
      v20 = (1 << *(_DWORD *)(v3 + 140)) - 1;
    *(_DWORD *)(v5 + 2336) |= v20;
    *(_QWORD *)(v7 + 1088) = MEMORY[0xFFFFF78000000320];
  }
  v21 = 324LL * (unsigned int)v6[11];
  v6[12] = v2;
  v22 = v6[v21 + 277];
  if ( v22 != 5 && v22 != 15 )
    v6[11] = v2;
  v6[10] = ((_BYTE)v2 + 1) & 0x3F;
  VIDMM_GLOBAL::NotifyOnFlip(*(VIDMM_GLOBAL **)(*(_QWORD *)(v3 + 8) + 552LL), v18, v19);
  --*(_DWORD *)(*(_QWORD *)(v3 + 232) + 800LL);
  VidSchiUpdateFlipQueueHistory(1u, v5, v4, v2);
  if ( !(_BYTE)v26 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v25);
  AcquireSpinLock::Release((AcquireSpinLock *)v28);
}
