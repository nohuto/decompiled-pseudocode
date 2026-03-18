/*
 * XREFs of ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0032FDC
 * Callers:
 *     VidSchSubmitWaitFromCpu @ 0x1C00021B0 (VidSchSubmitWaitFromCpu.c)
 *     VidSchiUpdatePresentParameters @ 0x1C0002640 (VidSchiUpdatePresentParameters.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0007350 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C00073A0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiScheduleCommandToRun @ 0x1C00073F0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000E4E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x1C0013764 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C0014210 (VidSchiSubmitSignalCommand.c)
 * Callees:
 *     ?VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00350F4 (-VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00351A0 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z @ 0x1C003560C (-VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z.c)
 */

void __fastcall HwQueueStagingList::ProcessHwQueue(HwQueueStagingList *this, struct VIDSCH_HW_QUEUE *a2)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // r10
  unsigned int v6; // ebx
  __int64 v7; // rbp
  __int64 v8; // r10
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx

  v2 = (_QWORD *)((char *)a2 + 136);
  v3 = (_QWORD *)*((_QWORD *)a2 + 23);
  v6 = 0;
  v7 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 16LL);
  while ( 1 )
  {
    if ( v3 == v2 )
    {
      LOBYTE(v6) = *v2 != (_QWORD)v2;
      v9 = v6;
LABEL_8:
      VidSchiSetHwQueueState(a2, v9);
      return;
    }
    if ( VidSchiPacketBlockedOnWaitCondition((struct _VIDSCH_QUEUE_PACKET *)(v3 - 4)) )
    {
      LOBYTE(v6) = *v2 == v8;
      v9 = v6 + 1;
      goto LABEL_8;
    }
    if ( !*(_BYTE *)(v7 + 11196) && (*(_DWORD *)(v8 + 16) & 0xFFFFFFF7) == 0 )
      break;
    VidSchiReleasePacketToGpu(this, (struct _VIDSCH_QUEUE_PACKET *)(v8 - 32));
    v3 = (_QWORD *)*((_QWORD *)a2 + 23);
  }
  v10 = (_QWORD *)((char *)a2 + 168);
  if ( !*((_QWORD *)a2 + 21) )
  {
    v11 = *(_QWORD **)(v7 + 2608);
    if ( *v11 != v7 + 2600 )
      __fastfail(3u);
    *v10 = v7 + 2600;
    *((_QWORD *)a2 + 22) = v11;
    *v11 = v10;
    *(_QWORD *)(v7 + 2608) = v10;
  }
}
