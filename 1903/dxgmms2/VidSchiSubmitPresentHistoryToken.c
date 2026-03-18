/*
 * XREFs of VidSchiSubmitPresentHistoryToken @ 0x1C0012E90
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00074C0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000A000 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiFlushQueuePacket @ 0x1C002E988 (VidSchiFlushQueuePacket.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C002F844 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034380 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N6@Z @ 0x1C00130E0 (-VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_H.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C0015F08 (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C001696C (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002B058 (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DE.c)
 */

void __fastcall VidSchiSubmitPresentHistoryToken(
        struct HwQueueStagingList *a1,
        _QWORD *a2,
        _QWORD *a3,
        union _ULARGE_INTEGER a4,
        __int64 a5)
{
  unsigned int v7; // r8d
  struct _VIDSCH_CONTEXT *v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rcx
  bool v15; // r15
  bool v16; // r14
  unsigned int v17; // r10d
  __int64 v18; // r11
  __int64 v19; // rax
  bool v20; // zf
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  struct _VIDSCH_GLOBAL *v26; // r11
  unsigned int v27; // [rsp+40h] [rbp-48h]
  struct _VIDSCH_GLOBAL *v28; // [rsp+48h] [rbp-40h]
  __int64 v29; // [rsp+50h] [rbp-38h]
  unsigned int v30; // [rsp+98h] [rbp+10h]

  v7 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    v12 = a2[11];
    a3 = a2 + 34;
    a4 = (union _ULARGE_INTEGER)a2[14];
    if ( v12 )
    {
      v11 = *(_QWORD *)(v12 + 104);
      v9 = (struct _VIDSCH_CONTEXT *)a2[11];
    }
    else
    {
      v10 = a2[12];
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 40) + 8LL);
    }
    v13 = *(_QWORD *)(v11 + 32);
  }
  else
  {
    v13 = a5;
  }
  v14 = *((unsigned int *)a3 + 31);
  v15 = 0;
  v16 = 0;
  v28 = (struct _VIDSCH_GLOBAL *)v13;
  v27 = *((_DWORD *)a3 + 31);
  if ( (*(_DWORD *)a3 & 0x1000000) == 0 )
  {
    if ( !a3[20] )
      goto LABEL_7;
    if ( (_DWORD)v14 == -1 )
      goto LABEL_7;
    if ( !*(_QWORD *)(v13 + 8 * v14 + 2576) )
      goto LABEL_7;
    v17 = *(_DWORD *)(v13 + 140);
    if ( !v17 )
      goto LABEL_7;
    v18 = *(_QWORD *)(v13 + 8 * v14 + 2576);
    while ( 1 )
    {
      v19 = *(int *)(216LL * v7 + v18 + 172);
      if ( (int)v19 > -1 )
      {
        v25 = *(_QWORD *)(v13 + 2704) + 136 * v19;
        if ( v25 )
        {
          if ( *((_DWORD *)a3 + 40) == *(_DWORD *)v25
            && *((_DWORD *)a3 + 41) == *(_DWORD *)(v25 + 4)
            && a3[21] == *(_QWORD *)(v25 + 8)
            && *(_DWORD *)(v25 + 112) == 3 )
          {
            goto LABEL_31;
          }
        }
      }
      if ( ++v7 >= v17 )
        goto LABEL_7;
    }
  }
  v20 = !_BitScanForward((unsigned int *)&v21, a3[69] & 0x3FF);
  if ( v20 || (_BYTE)v21 == 0xFF )
    LOBYTE(v21) = 0;
  v30 = (char)v21;
  v22 = *(int *)(*(_QWORD *)(v13 + 8 * v14 + 2576) + 216LL * (unsigned int)(char)v21 + 172);
  if ( (int)v22 <= -1 )
    goto LABEL_7;
  v23 = *(_QWORD *)(v13 + 2704) + 136 * v22;
  v29 = v23;
  if ( !v23 )
    goto LABEL_7;
  if ( *(_QWORD *)(v23 + 120) == v23 + 120 )
  {
    v24 = *(_DWORD *)(v23 + 112);
    if ( v24 == 3 )
    {
      if ( *((_DWORD *)a3 + 40) != *(_DWORD *)v23
        || *((_DWORD *)a3 + 41) != *(_DWORD *)(v23 + 4)
        || a3[21] != *(_QWORD *)(v23 + 8) )
      {
        goto LABEL_7;
      }
LABEL_31:
      v16 = 1;
      goto LABEL_7;
    }
    if ( v24 != 1
      || !VidSchiCheckTokenIndependentFlipCondition(
            (struct _VIDSCH_GLOBAL *)v13,
            (const struct VIDSCH_SUBMIT_DATA2 *)a3) )
    {
      goto LABEL_7;
    }
    if ( !*(_BYTE *)(v29 + 97) )
    {
      *(_BYTE *)(v29 + 97) = 1;
      v15 = 1;
LABEL_7:
      VidSchiProcessPresentHistoryToken(
        a1,
        v9,
        (struct VIDSCH_HW_QUEUE *)v10,
        (struct _VIDSCH_DEVICE *)v11,
        (struct VIDSCH_SUBMIT_DATA2 *)a3,
        a4,
        v15,
        v16);
      return;
    }
    if ( VidSchiCheckPlaneIndependentFlipCondition(v28, v27, v30) )
      goto LABEL_7;
    VidSchiPostponePresentHistoryToken(
      v9,
      (struct VIDSCH_HW_QUEUE *)v10,
      (struct _VIDSCH_DEVICE *)v11,
      (struct VIDSCH_SUBMIT_DATA2 *)a3,
      a4,
      v26);
  }
  else
  {
    VidSchiPostponePresentHistoryToken(
      v9,
      (struct VIDSCH_HW_QUEUE *)v10,
      (struct _VIDSCH_DEVICE *)v11,
      (struct VIDSCH_SUBMIT_DATA2 *)a3,
      a4,
      (struct _VIDSCH_GLOBAL *)v13);
  }
}
