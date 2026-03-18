/*
 * XREFs of VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C0030B0C
 * Callers:
 *     VidSchiResumeFlipQueues @ 0x1C00C71E0 (VidSchiResumeFlipQueues.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C00073A0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchUnwaitFlipQueue @ 0x1C0009980 (VidSchUnwaitFlipQueue.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 */

void __fastcall VidSchiUnwaitFlipQueueUnderSchedulerSpinLock(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[2]; // [rsp+20h] [rbp-48h] BYREF
  char v5; // [rsp+30h] [rbp-38h]
  _BYTE v6[48]; // [rsp+38h] [rbp-30h] BYREF

  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v6, (unsigned __int64 *)(a1 + 1648), a3, 0);
  v5 = 0;
  v4[1] = v4;
  v4[0] = v4;
  VidSchUnwaitFlipQueue((__int64)v4, a1);
  if ( !v5 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v4);
  AcquireSpinLock::Release((AcquireSpinLock *)v6);
}
