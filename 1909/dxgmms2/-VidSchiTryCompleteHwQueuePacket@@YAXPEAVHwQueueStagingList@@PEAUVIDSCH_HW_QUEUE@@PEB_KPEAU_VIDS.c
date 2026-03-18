/*
 * XREFs of ?VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x1C0036E9C
 * Callers:
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x1C0036FEC (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034380 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0034A9C (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034C20 (-VidSchiCompleteHwQueueWaitPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiTryCompleteHwQueuePacket(
        struct HwQueueStagingList ***a1,
        struct VIDSCH_HW_QUEUE *a2,
        const GUID *a3,
        struct _VIDSCH_QUEUE_PACKET *a4,
        bool *a5)
{
  int v6; // r9d
  const GUID *v7; // r10
  struct HwQueueStagingList ***v9; // r11
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  _QWORD *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  bool v17; // al
  bool v18; // zf
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  bool v22; // cl

  v6 = *((_DWORD *)a4 + 12);
  v7 = a3;
  v9 = a1;
  *a5 = 0;
  if ( !v6 )
  {
    v19 = *((int *)a4 + 192);
    a3 = (const GUID *)*((_QWORD *)a4 + 95);
    v20 = *((_QWORD *)&v7->Data1 + v19);
    v21 = *((_QWORD *)a2 + 3 * v19 + 7);
    if ( !*(_BYTE *)(v21 + 28) )
    {
      if ( *(_BYTE *)(v21 + 29) )
        v22 = v20 >= (unsigned __int64)a3;
      else
        v22 = (int)v20 - (int)a3 >= 0;
      v18 = !v22;
LABEL_22:
      if ( v18 )
        return;
    }
LABEL_23:
    VidSchiCompleteHwQueuePacket(v9, a4, a3);
    goto LABEL_24;
  }
  v10 = v6 - 4;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 )
    {
      if ( *((struct VIDSCH_HW_QUEUE **)a4 + 5) != (struct VIDSCH_HW_QUEUE *)((char *)a2 + 136) )
        return;
      VidSchiCompleteHwQueueSignalPacket((struct HwQueueStagingList *)a1, a4);
      goto LABEL_24;
    }
    v12 = v11 - 2;
    if ( v12 )
    {
      if ( v12 != 1 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
        v13[3] = 281LL;
        v13[4] = 2048LL;
        v13[5] = a2;
        v13[6] = a4;
        v13[7] = *((int *)a4 + 12);
        WdLogEvent5_WdCriticalError(v13);
        __debugbreak();
      }
      v14 = *((_QWORD *)a2 + 7);
      v15 = *((_QWORD *)a4 + 36);
      v16 = *(_QWORD *)&a3->Data1;
      if ( !*(_BYTE *)(v14 + 28) )
      {
        if ( *(_BYTE *)(v14 + 29) )
          v17 = v16 >= v15;
        else
          v17 = (int)v16 - (int)v15 >= 0;
        v18 = !v17;
        goto LABEL_22;
      }
    }
    else if ( *((struct VIDSCH_HW_QUEUE **)a4 + 5) != (struct VIDSCH_HW_QUEUE *)((char *)a2 + 136) )
    {
      return;
    }
    goto LABEL_23;
  }
  VidSchiCompleteHwQueueWaitPacket(a4, (__int64)a2);
LABEL_24:
  *a5 = 1;
}
