/*
 * XREFs of VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C00307C0
 * Callers:
 *     ?VidSchiCompleteAllWaitsContext@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0001288 (-VidSchiCompleteAllWaitsContext@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C001161C (VidSchiCleanupDeferredWaiterContext.c)
 *     VidSchiSubmitWaitCommand @ 0x1C0013764 (VidSchiSubmitWaitCommand.c)
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C001A390 (VidSchiRundownUnorderedWaiterContext.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x1C00308B4 (VidSchiUnblockUnorderedWaiter.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035430 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C0011F58 (VidSchiUnwaitWaitQueuePacket.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 */

int __fastcall VidSchiUnblockUnorderedWaitQueuePacket(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // r9
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // r10
  __int64 v9; // rbx
  _QWORD *v10; // r11
  _QWORD *v11; // r11
  __int64 v12; // rax
  __int64 v13; // rcx
  const GUID *v14; // r8

  v3 = *(_QWORD *)(a2 + 88);
  if ( v3 )
    v5 = *(_QWORD *)(v3 + 104);
  else
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 40LL) + 8LL);
  v6 = *(_QWORD *)(v5 + 32);
  v7 = (_QWORD *)(a2 + 288);
  v8 = *(_QWORD *)(a2 + 288);
  v9 = *(_QWORD *)(a2 + 280);
  if ( *(_QWORD *)(v8 + 8) != a2 + 288
    || (v10 = *(_QWORD **)(a2 + 296), (_QWORD *)*v10 != v7)
    || (*v10 = v8, *(_QWORD *)(v8 + 8) = v10, v11 = *(_QWORD **)(v9 + 104), *v11 != v9 + 96) )
  {
    __fastfail(3u);
  }
  *v7 = v9 + 96;
  *(_QWORD *)(a2 + 296) = v11;
  *v11 = v7;
  *(_QWORD *)(v9 + 104) = v7;
  *(_DWORD *)(a2 + 272) &= ~4u;
  --*(_DWORD *)(v9 + 36);
  v12 = *(_QWORD *)(a2 + 88);
  if ( v12 )
    --*(_DWORD *)(v12 + 788);
  --*(_DWORD *)(v5 + 1284);
  --*(_DWORD *)(v6 + 736);
  if ( (_BYTE)a3 )
  {
    LODWORD(v12) = VidSchiUnwaitWaitQueuePacket(a1, a2, a3);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      LODWORD(v12) = McTemplateK0q(v13, &EventPerformanceWarning, v14, 15);
    _InterlockedIncrement(&gulSyncObjTimeouted);
  }
  return v12;
}
