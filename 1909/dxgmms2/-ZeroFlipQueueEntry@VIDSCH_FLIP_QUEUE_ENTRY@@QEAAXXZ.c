/*
 * XREFs of ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C0015958
 * Callers:
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C001528C (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002BAFC (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0036220 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 */

void __fastcall VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry(VIDSCH_FLIP_QUEUE_ENTRY *this)
{
  _DWORD *v1; // rdi

  v1 = (_DWORD *)*((_QWORD *)this + 148);
  memset(this, 0, 0x520uLL);
  *((_QWORD *)this + 148) = v1;
  memset(v1 + 4, 0, v1[1] * ((v1[2] << 6) + ((8 * v1[2] + 191) & 0xFFFFFFF8)));
}
