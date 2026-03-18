/*
 * XREFs of ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035430
 * Callers:
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0035378 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C0011F58 (VidSchiUnwaitWaitQueuePacket.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C00307C0 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0033964 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0034084 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034208 (-VidSchiCompleteHwQueueWaitPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035780 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiRundownHardwarePacket(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        struct VIDSCH_HW_QUEUE *a3)
{
  struct VIDSCH_HW_QUEUE *v4; // rbp
  int v5; // edx
  struct HwQueueStagingList *v6; // rsi
  int v7; // edx
  __int64 v8; // rdx
  int v9; // edx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  int v12; // eax
  __int64 v13; // rbx
  _DWORD *v14; // r14

  v4 = a3;
  v5 = *((_DWORD *)a2 + 12);
  v6 = a1;
  if ( !v5 )
    goto LABEL_15;
  v7 = v5 - 3;
  if ( !v7 )
  {
    VidSchiSubmitHwQueueMmIoFlipCommand(a1, a2);
    return;
  }
  v8 = (unsigned int)(v7 - 1);
  if ( (_DWORD)v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
LABEL_8:
      VidSchiCompleteHwQueueSignalPacket(a1, a2);
      return;
    }
    v10 = (unsigned int)(v9 - 2);
    if ( !(_DWORD)v10 )
      goto LABEL_19;
    if ( (_DWORD)v10 != 1 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v10);
      v11[3] = 281LL;
      v11[4] = 2048LL;
      v11[5] = v4;
      v11[6] = a2;
      v11[7] = *((int *)a2 + 12);
      WdLogEvent5_WdCriticalError(v11);
      __debugbreak();
      goto LABEL_8;
    }
LABEL_15:
    v13 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL);
    v14 = (_DWORD *)(*(_QWORD *)(v13 + 184) + 112LL * *(unsigned int *)(v13 + 196));
    memset(v14, 0, 0x70uLL);
    *(_DWORD *)(v13 + 196) = (*(_DWORD *)(v13 + 196) + 1) & (*(_DWORD *)(v13 + 192) - 1);
    *v14 = 9;
    if ( *((_DWORD *)a2 + 12) )
    {
      *((_QWORD *)v14 + 3) = *((_QWORD *)a2 + 36);
      *((_QWORD *)v4 + 8) = *((_QWORD *)a2 + 36);
    }
    else
    {
      *(_QWORD *)&v14[2 * *((int *)a2 + 192) + 6] = *((_QWORD *)a2 + 95);
      *((_QWORD *)v4 + 3 * *((int *)a2 + 192) + 8) = *((_QWORD *)a2 + 95);
    }
    *((_QWORD *)v14 + 2) = v4;
    a1 = v6;
    *((_BYTE *)v14 + 40) = 1;
LABEL_19:
    VidSchiCompleteHwQueuePacket((struct HwQueueStagingList ***)a1, a2, (const GUID *)a3);
    return;
  }
  v12 = *((_DWORD *)a2 + 68);
  if ( (v12 & 1) == 0 )
  {
    LOBYTE(a3) = 1;
    if ( (v12 & 4) != 0 )
      VidSchiUnblockUnorderedWaitQueuePacket((__int64)a1, (__int64)a2, (__int64)a3);
    else
      VidSchiUnwaitWaitQueuePacket((__int64)a1, (__int64)a2, (__int64)a3);
  }
  VidSchiCompleteHwQueueWaitPacket(a2, v8);
}
