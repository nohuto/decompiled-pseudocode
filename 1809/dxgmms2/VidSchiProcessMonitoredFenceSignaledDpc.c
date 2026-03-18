/*
 * XREFs of VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C0038778
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C00033B0 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002D5AC (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0007350 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C0008E90 (VidSchiUnwaitMonitoredFences.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x1C00365B0 (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C003678C (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiProcessMonitoredFenceSignaledDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rdi
  unsigned __int64 v2; // rbx
  __int64 v3; // r8
  struct HwQueueStagingList **v4[2]; // [rsp+20h] [rbp-48h] BYREF
  char v5; // [rsp+30h] [rbp-38h]
  _BYTE v6[48]; // [rsp+38h] [rbp-30h] BYREF

  Next = ListEntry[2].Next;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[180], ListEntry);
  v2 = *((_QWORD *)&Next[1].Next + 1);
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v6, (unsigned __int64 *)(v2 + 1648), v3, 1);
  v5 = 0;
  v4[1] = (struct HwQueueStagingList **)v4;
  v4[0] = (struct HwQueueStagingList **)v4;
  VidSchiUnwaitNodeHwQueueProgress(v4, (struct _VIDSCH_NODE *)Next);
  VidSchiUnwaitMonitoredFences((__int64)v4, v2);
  VidSchiUpdateHwSchRunningTime((struct _VIDSCH_NODE *)Next);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v4);
  AcquireSpinLock::Release((AcquireSpinLock *)v6);
}
