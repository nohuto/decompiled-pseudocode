/*
 * XREFs of VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002E490
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0008470 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C000D4C0 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C000D5F4 (-NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     VidSchiCompleteFlipEntry @ 0x1C000D7B0 (VidSchiCompleteFlipEntry.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C000E260 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0010404 (VidSchiPropagatePresentHistoryToken.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011290 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011414 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C00159C8 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C002ABC4 (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_.c)
 *     VidSchiComputeFlipEntryStatusAfterFlip @ 0x1C002E2A4 (VidSchiComputeFlipEntryStatusAfterFlip.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C002F47C (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C00308F0 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 */

void __fastcall VidSchiExecuteMmIoFlipAtPassiveLevel(__int64 a1)
{
  __int64 v1; // r13
  _DWORD *v3; // r14
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v15; // rdx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  int v23; // [rsp+38h] [rbp-D0h]
  int v24; // [rsp+58h] [rbp-B0h] BYREF
  int v25; // [rsp+5Ch] [rbp-ACh] BYREF
  int v26; // [rsp+60h] [rbp-A8h] BYREF
  int v27; // [rsp+64h] [rbp-A4h] BYREF
  _QWORD v28[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h]
  _QWORD v30[3]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v31[2]; // [rsp+98h] [rbp-70h] BYREF
  int v32; // [rsp+A8h] [rbp-60h]
  int v33; // [rsp+ACh] [rbp-5Ch]
  _DWORD *v34; // [rsp+B0h] [rbp-58h]
  int v35; // [rsp+B8h] [rbp-50h]
  int v36; // [rsp+BCh] [rbp-4Ch]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  __int64 v38; // [rsp+C8h] [rbp-40h]
  __int64 v39; // [rsp+D0h] [rbp-38h]
  char v40; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v41[4]; // [rsp+E0h] [rbp-28h] BYREF
  __int16 v42; // [rsp+100h] [rbp-8h]
  _QWORD v43[268]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v44[48]; // [rsp+968h] [rbp+860h] BYREF
  _BYTE v45[80]; // [rsp+998h] [rbp+890h] BYREF

  v1 = *(unsigned int *)(a1 + 8);
  v3 = *(_DWORD **)(a1 + 16);
  v4 = *(_QWORD *)a1;
  v5 = *(unsigned int *)(a1 + 12);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5 + 2576);
  v7 = (__int64)&v3[328 * v1 + 20];
  memset(v43, 0, 0x858uLL);
  memset(v45, 0, sizeof(v45));
  v30[0] = 0LL;
  v30[1] = 0LL;
  memset(v44, 0, 0x28uLL);
  VidSchiSetupMmIoFlipMultiPlaneOverlay3(
    v4,
    1312 * v1 + (_DWORD)v3 + 80,
    v5,
    (unsigned int)v43,
    *(_BYTE *)(a1 + 24),
    (__int64)v45,
    (__int64)v30,
    (__int64)v44);
  HIDWORD(v43[1]) |= 8u;
  v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[61])(
         *(_QWORD *)(*(_QWORD *)(v43[0] + 16LL) + 2552LL),
         &v43[1]);
  v11 = v8;
  if ( v8 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9);
    v12[6] = v43;
    v12[3] = 281LL;
    v12[4] = 11LL;
    v12[5] = v11;
    v12[7] = *(_QWORD *)(v4 + 16);
    WdLogEvent5_WdCriticalError(v12);
    __debugbreak();
  }
  v41[0] = v4 + 1648;
  v42 = 0;
  AcquireSpinLock::Acquire((Acquire *)v41);
  LOBYTE(v29) = 0;
  v28[1] = v28;
  v28[0] = v28;
  if ( (*(_DWORD *)(v7 + 1136) & 0x10) != 0 )
    v13 = ((unsigned __int16)**(_DWORD **)(v7 + 1184) | (unsigned __int16)(**(_DWORD **)(v7 + 1184) >> 10)) & 0x3FF;
  else
    v13 = (1 << *(_DWORD *)(v4 + 140)) - 1;
  *(_DWORD *)(v6 + 2348) &= ~v13;
  v14 = *(unsigned int *)(v7 + 1136);
  if ( (v14 & 0x20) != 0 )
  {
    v15 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v7 + 1152);
    if ( v15 )
      VidSchiPropagatePresentHistoryToken(
        *(PKSPIN_LOCK *)(v7 + 1144),
        v15,
        1,
        (*(_DWORD *)(v7 + 1136) & 0x40) != 0,
        0,
        0,
        *(_QWORD *)(v7 + 1168),
        *(_QWORD *)(v7 + 1160),
        0LL);
  }
  VidSchiComputeFlipEntryStatusAfterFlip(v14, (__int64)v43, &v25);
  v16 = v25;
  VidSchiLogMmIoFlipMultiPlaneOverlay3(v4, &v3[328 * v1 + 20], (__int64)v43, v25);
  *(_DWORD *)(v7 + 1052) = v16;
  if ( v16 == 11 )
  {
    v18 = 328LL * (unsigned int)v3[11];
    v26 = 0;
    v19 = v3[v18 + 283];
    if ( v19 == 5 || v19 == 15 )
    {
      v27 = 0;
      LOBYTE(v24) = 0;
      v35 = ((_BYTE)v1 - 1) & 0x3F;
      v37 = *(_QWORD *)(v6 + 33184);
      v38 = *(_QWORD *)(v6 + 33192);
      v31[1] = 0LL;
      v33 = 0;
      v36 = 0;
      v39 = 0LL;
      v31[0] = v4;
      v32 = v5;
      v34 = v3;
      VidSchiProcessVsyncCompletedFlipEntry(
        (unsigned int)v28,
        (unsigned int)v31,
        (unsigned int)&v40,
        (unsigned int)&v27,
        (__int64)&v26,
        (__int64)&v24,
        v23);
    }
    *(_QWORD *)(v7 + 1112) = *(_QWORD *)(v6 + 33192);
    *(_QWORD *)(v7 + 1128) = *(_QWORD *)(v6 + 33184);
    VidSchiUnreferenceDisplayingAllocationsForThisEntry(
      (struct HwQueueStagingList *)v28,
      v17,
      v6,
      (__int64)&v3[328 * v1 + 20]);
    VidSchiReferenceDisplayingAllocationsForThisEntry(
      (struct HwQueueStagingList *)v28,
      v4,
      (_WORD *)v6,
      (__int64)&v3[328 * v1 + 20]);
    VidSchiCompleteFlipEntry((struct HwQueueStagingList *)v28, v4, v5, (__int64)v3, v1, v1, 0, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(v7 + 1136) & 0x10) != 0 )
      v20 = ((unsigned __int16)**(_DWORD **)(v7 + 1184) | (unsigned __int16)(**(_DWORD **)(v7 + 1184) >> 10)) & 0x3FF;
    else
      v20 = (1 << *(_DWORD *)(v4 + 140)) - 1;
    *(_DWORD *)(v6 + 2344) |= v20;
    *(_QWORD *)(v7 + 1104) = MEMORY[0xFFFFF78000000320];
  }
  v21 = 328LL * (unsigned int)v3[11];
  v3[12] = v1;
  v22 = v3[v21 + 283];
  if ( v22 != 5 && v22 != 15 )
    v3[11] = v1;
  v3[10] = ((_BYTE)v1 + 1) & 0x3F;
  VIDMM_GLOBAL::NotifyOnFlip(*(VIDMM_GLOBAL **)(*(_QWORD *)(v4 + 8) + 552LL));
  --*(_DWORD *)(*(_QWORD *)(v4 + 232) + 800LL);
  VidSchiUpdateFlipQueueHistory(1u, v4, v5, (__int64)v3, v1);
  if ( !(_BYTE)v29 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v28);
  AcquireSpinLock::Release((AcquireSpinLock *)v41);
}
