/*
 * XREFs of VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C00391B8
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0004570 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002DCC0 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0008420 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000A000 (VidSchiUnwaitMonitoredFences.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011290 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011414 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x1C0036FEC (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00371C8 (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiProcessMonitoredFenceSignaledDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rdi
  unsigned __int64 v2; // rbx
  struct HwQueueStagingList **v3[2]; // [rsp+20h] [rbp-40h] BYREF
  char v4; // [rsp+30h] [rbp-30h]
  _QWORD v5[4]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v6; // [rsp+58h] [rbp-8h]

  Next = ListEntry[2].Next;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[180], ListEntry);
  v2 = *((_QWORD *)&Next[1].Next + 1);
  v6 = 256;
  v5[0] = v2 + 1648;
  AcquireSpinLock::Acquire((Acquire *)v5);
  v4 = 0;
  v3[1] = (struct HwQueueStagingList **)v3;
  v3[0] = (struct HwQueueStagingList **)v3;
  VidSchiUnwaitNodeHwQueueProgress(v3, (struct _VIDSCH_NODE *)Next);
  VidSchiUnwaitMonitoredFences((struct HwQueueStagingList *)v3, v2);
  VidSchiUpdateHwSchRunningTime((struct _VIDSCH_NODE *)Next);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v3);
  AcquireSpinLock::Release((AcquireSpinLock *)v5);
}
