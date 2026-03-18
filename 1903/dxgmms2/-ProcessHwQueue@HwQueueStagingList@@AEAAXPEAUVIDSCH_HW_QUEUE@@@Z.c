/*
 * XREFs of ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00339FC
 * Callers:
 *     VidSchSubmitWaitFromCpu @ 0x1C00034F0 (VidSchSubmitWaitFromCpu.c)
 *     VidSchiUpdatePresentParameters @ 0x1C0003B40 (VidSchiUpdatePresentParameters.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0008420 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0008470 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiScheduleCommandToRun @ 0x1C00084C0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000F1E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x1C0012420 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C0012AB0 (VidSchiSubmitSignalCommand.c)
 * Callees:
 *     ?VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035B08 (-VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035BB0 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z @ 0x1C00360AC (-VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z.c)
 */

void __fastcall HwQueueStagingList::ProcessHwQueue(HwQueueStagingList *this, struct VIDSCH_HW_QUEUE *a2)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // r10
  unsigned int v6; // ebx
  __int64 v7; // r14
  struct _VIDSCH_QUEUE_PACKET *v8; // rbp
  bool v9; // al
  __int64 v10; // r10
  struct VIDSCH_HW_QUEUE *v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rdx

  v2 = (_QWORD *)((char *)a2 + 136);
  v3 = (_QWORD *)*((_QWORD *)a2 + 23);
  v6 = 0;
  v7 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 16LL);
  while ( 1 )
  {
    if ( v3 == v2 )
    {
      v11 = a2;
      LOBYTE(v6) = *v2 != (_QWORD)v2;
      v12 = v6;
LABEL_8:
      VidSchiSetHwQueueState(v11, v12);
      return;
    }
    v8 = (struct _VIDSCH_QUEUE_PACKET *)(v3 - 4);
    v9 = VidSchiPacketBlockedOnWaitCondition((struct _VIDSCH_QUEUE_PACKET *)(v3 - 4));
    v11 = a2;
    if ( v9 )
    {
      LOBYTE(v6) = *v2 == v10;
      v12 = v6 + 1;
      goto LABEL_8;
    }
    VidSchiSetHwQueueState(a2, 1LL);
    if ( !*(_BYTE *)(v7 + 11196) && (*((_DWORD *)v8 + 12) & 0xFFFFFFF7) == 0 )
      break;
    VidSchiReleasePacketToGpu(this, v8);
    v3 = (_QWORD *)*((_QWORD *)a2 + 23);
  }
  v13 = (_QWORD *)((char *)a2 + 168);
  if ( !*((_QWORD *)a2 + 21) )
  {
    v14 = *(_QWORD **)(v7 + 2608);
    if ( *v14 != v7 + 2600 )
      __fastfail(3u);
    *v13 = v7 + 2600;
    *((_QWORD *)a2 + 22) = v14;
    *v14 = v13;
    *(_QWORD *)(v7 + 2608) = v13;
  }
}
