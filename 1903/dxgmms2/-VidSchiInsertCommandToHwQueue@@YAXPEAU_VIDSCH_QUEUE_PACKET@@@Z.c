/*
 * XREFs of ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00358BC
 * Callers:
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C0039AC0 (VidSchiSubmitCommandPacketToHwQueue.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0008420 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035B08 (-VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z @ 0x1C00360AC (-VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z.c)
 */

void __fastcall VidSchiInsertCommandToHwQueue(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rdi
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rbp
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  _QWORD *v13; // rax
  bool v14; // bl
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 *v18; // rdi
  __int64 *v19; // rax
  __int64 v20; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v21; // [rsp+28h] [rbp-20h]
  char v22; // [rsp+30h] [rbp-18h]

  v1 = *((_QWORD *)a1 + 12);
  v3 = *(_QWORD *)(v1 + 40);
  v4 = *(_QWORD *)(v3 + 16);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_QWORD *)(v4 + 24);
  v22 = 0;
  v21 = &v20;
  v20 = (__int64)&v20;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 708));
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 2852));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 1280));
  if ( (unsigned int)(*((_DWORD *)a1 + 12) - 4) > 1 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 1284));
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 240));
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 128));
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 6;
  v7 = WdLogNewEntry5_WdEvent(v5, v4);
  *(_QWORD *)(v7 + 24) = a1;
  *(_QWORD *)(v7 + 32) = v1;
  WdLogEvent5_WdEvent(v7);
  v10 = (_QWORD *)(v1 + 136);
  v11 = *(_QWORD **)(v1 + 144);
  v12 = (_QWORD *)((char *)a1 + 32);
  if ( *v11 != v1 + 136 )
    goto LABEL_13;
  *v12 = v10;
  *((_QWORD *)a1 + 5) = v11;
  *v11 = v12;
  *(_QWORD *)(v1 + 144) = v12;
  if ( *(_QWORD **)(v1 + 184) != v10 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v9, v8);
    v13[3] = v1;
    v13[4] = *(_QWORD *)(v1 + 184);
    v13[5] = a1;
    v13[6] = *((int *)a1 + 12);
    WdLogEvent5_WdEvent(v13);
    goto LABEL_12;
  }
  v14 = !VidSchiPacketBlockedOnWaitCondition(a1);
  v17 = (_QWORD *)WdLogNewEntry5_WdEvent(v16, v15);
  v17[5] = v14;
  v17[3] = v1;
  v17[4] = v12;
  WdLogEvent5_WdEvent(v17);
  *(_QWORD *)(v1 + 184) = v12;
  if ( v14 )
  {
    VidSchiSetHwQueueState(v1, 1LL);
    v18 = (__int64 *)(v1 + 152);
    if ( *v18 )
      goto LABEL_12;
    v19 = v21;
    if ( (__int64 *)*v21 == &v20 )
    {
      v18[1] = (__int64)v21;
      *v18 = (__int64)&v20;
      *v19 = (__int64)v18;
      v21 = v18;
      v22 = 0;
      goto LABEL_12;
    }
LABEL_13:
    __fastfail(3u);
  }
  if ( (_QWORD *)*v10 == v12 )
    VidSchiSetHwQueueState(v1, 2LL);
LABEL_12:
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v20);
}
