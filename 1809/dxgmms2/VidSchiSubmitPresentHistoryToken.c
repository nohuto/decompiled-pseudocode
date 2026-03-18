/*
 * XREFs of VidSchiSubmitPresentHistoryToken @ 0x1C000F5F0
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0006430 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C0008E90 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiFlushQueuePacket @ 0x1C002E2F4 (VidSchiFlushQueuePacket.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C002EE60 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0033964 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N5@Z @ 0x1C000F820 (-VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C0016B30 (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C0017578 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002A610 (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBM.c)
 */

void __fastcall VidSchiSubmitPresentHistoryToken(
        struct HwQueueStagingList *a1,
        _QWORD *a2,
        _QWORD *a3,
        union _ULARGE_INTEGER a4,
        __int64 a5)
{
  unsigned int v7; // r8d
  struct _VIDSCH_CONTEXT *v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r12
  bool v13; // r15
  bool v14; // r14
  unsigned int v15; // r9d
  __int64 v16; // rax
  bool v17; // zf
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // [rsp+40h] [rbp-48h]
  unsigned int v25; // [rsp+98h] [rbp+10h]

  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( a2 )
  {
    v10 = a2[11];
    a3 = a2 + 34;
    a4 = (union _ULARGE_INTEGER)a2[14];
    if ( v10 )
    {
      v9 = *(_QWORD *)(v10 + 104);
      v8 = (struct _VIDSCH_CONTEXT *)a2[11];
    }
    else
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a2[12] + 40LL) + 8LL);
    }
    v11 = *(_QWORD *)(v9 + 32);
  }
  else
  {
    v11 = a5;
  }
  v12 = *((unsigned int *)a3 + 31);
  v13 = 0;
  v14 = 0;
  if ( (*(_DWORD *)a3 & 0x1000000) == 0 )
  {
    if ( !a3[20] )
      goto LABEL_7;
    if ( (_DWORD)v12 == -1 )
      goto LABEL_7;
    if ( !*(_QWORD *)(v11 + 8 * v12 + 2576) )
      goto LABEL_7;
    v15 = *(_DWORD *)(v11 + 140);
    if ( !v15 )
      goto LABEL_7;
    while ( 1 )
    {
      v16 = *(int *)(216LL * v7 + *(_QWORD *)(v11 + 8 * v12 + 2576) + 164);
      if ( (int)v16 > -1 )
      {
        v22 = *(_QWORD *)(v11 + 2704) + 136 * v16;
        if ( v22 )
        {
          if ( *((_DWORD *)a3 + 40) == *(_DWORD *)v22
            && *((_DWORD *)a3 + 41) == *(_DWORD *)(v22 + 4)
            && a3[21] == *(_QWORD *)(v22 + 8)
            && *(_DWORD *)(v22 + 112) == 3 )
          {
            goto LABEL_30;
          }
        }
      }
      if ( ++v7 >= v15 )
        goto LABEL_7;
    }
  }
  v17 = !_BitScanForward((unsigned int *)&v18, a3[70] & 0x3FF);
  if ( v17 || (_BYTE)v18 == 0xFF )
    LOBYTE(v18) = 0;
  v25 = (char)v18;
  v19 = *(int *)(*(_QWORD *)(v11 + 8 * v12 + 2576) + 216LL * (unsigned int)(char)v18 + 164);
  if ( (int)v19 <= -1 )
    goto LABEL_7;
  v20 = *(_QWORD *)(v11 + 2704) + 136 * v19;
  v23 = v20;
  if ( !v20 )
    goto LABEL_7;
  if ( *(_QWORD *)(v20 + 120) == v20 + 120 )
  {
    v21 = *(_DWORD *)(v20 + 112);
    if ( v21 == 3 )
    {
      if ( *((_DWORD *)a3 + 40) != *(_DWORD *)v20
        || *((_DWORD *)a3 + 41) != *(_DWORD *)(v20 + 4)
        || a3[21] != *(_QWORD *)(v20 + 8) )
      {
        goto LABEL_7;
      }
LABEL_30:
      v14 = 1;
      goto LABEL_7;
    }
    if ( v21 != 1
      || !VidSchiCheckTokenIndependentFlipCondition(
            (struct _VIDSCH_GLOBAL *)v11,
            (const struct VIDSCH_SUBMIT_DATA2 *)a3) )
    {
      goto LABEL_7;
    }
    if ( !*(_BYTE *)(v23 + 97) )
    {
      *(_BYTE *)(v23 + 97) = 1;
      v13 = 1;
      goto LABEL_7;
    }
    if ( VidSchiCheckPlaneIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v11, v12, v25) )
    {
LABEL_7:
      VidSchiProcessPresentHistoryToken(
        a1,
        v8,
        (struct _VIDSCH_DEVICE *)v9,
        (struct VIDSCH_SUBMIT_DATA2 *)a3,
        a4,
        v13,
        v14);
      return;
    }
  }
  VidSchiPostponePresentHistoryToken(
    v8,
    (struct _VIDSCH_DEVICE *)v9,
    (struct VIDSCH_SUBMIT_DATA2 *)a3,
    a4,
    (struct _VIDSCH_GLOBAL *)v11);
}
