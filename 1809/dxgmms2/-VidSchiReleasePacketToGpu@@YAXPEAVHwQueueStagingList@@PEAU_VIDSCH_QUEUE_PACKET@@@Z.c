/*
 * XREFs of ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00351A0
 * Callers:
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0032FDC (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 * Callees:
 *     ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00330C0 (-SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0033308 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0033964 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0034084 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034208 (-VidSchiCompleteHwQueueWaitPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035780 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiReleasePacketToGpu(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        const GUID *a3)
{
  __int64 v3; // rsi
  _QWORD *v4; // r14
  _QWORD *v7; // rax
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx

  v3 = *((_QWORD *)a2 + 12);
  v4 = (_QWORD *)((char *)a2 + 32);
  if ( *(struct _VIDSCH_QUEUE_PACKET **)(v3 + 184) == (struct _VIDSCH_QUEUE_PACKET *)((char *)a2 + 32) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
    v7[3] = v3;
    v7[4] = *(_QWORD *)(v3 + 184);
    v7[5] = *v4;
    WdLogEvent5_WdEvent(v7);
    *(_QWORD *)(v3 + 184) = *v4;
  }
  v8 = *((_DWORD *)a2 + 12);
  if ( !v8 )
  {
    ++*(_DWORD *)(*((_QWORD *)a2 + 12) + 132LL);
    SubmitRenderToHwQueue(a1, a2);
    return;
  }
  v9 = v8 - 3;
  if ( !v9 )
  {
    VidSchiSubmitHwQueueMmIoFlipCommand(a1, a2);
    return;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    VidSchiCompleteHwQueueWaitPacket(a2, (__int64)a2);
    return;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( *((_QWORD *)a2 + 5) == *((_QWORD *)a2 + 12) + 136LL )
    {
      VidSchiCompleteHwQueueSignalPacket(a1, a2);
      return;
    }
LABEL_13:
    *((_DWORD *)a2 + 20) |= 1u;
    return;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    if ( *((_QWORD *)a2 + 5) == *((_QWORD *)a2 + 12) + 136LL )
    {
      VidSchiCompleteHwQueuePacket((struct HwQueueStagingList ***)a1, a2, a3);
      return;
    }
    goto LABEL_13;
  }
  if ( v12 == 1 )
  {
    ++*(_DWORD *)(*((_QWORD *)a2 + 12) + 132LL);
    SubmitPagingToHwQueue(a1, a2);
  }
}
