/*
 * XREFs of ?VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00350F4
 * Callers:
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0032FDC (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034EB8 (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     ?VidSchiHwQueueFull@@YA_NPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0034E40 (-VidSchiHwQueueFull@@YA_NPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

bool __fastcall VidSchiPacketBlockedOnWaitCondition(struct _VIDSCH_QUEUE_PACKET *a1)
{
  int v1; // eax

  v1 = *((_DWORD *)a1 + 12);
  switch ( v1 )
  {
    case 0:
      goto LABEL_10;
    case 4:
      return (*((_BYTE *)a1 + 272) & 1) == 0;
    case 8:
LABEL_10:
      if ( VidSchiHwQueueFull(*((struct VIDSCH_HW_QUEUE **)a1 + 12)) )
        return 1;
      break;
  }
  return 0;
}
