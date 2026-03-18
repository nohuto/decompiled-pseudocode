/*
 * XREFs of VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C003133C
 * Callers:
 *     VidSchiResumeFlipQueues @ 0x1C00CA258 (VidSchiResumeFlipQueues.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0008470 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000A480 (VidSchUnwaitFlipQueue.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011290 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011414 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 */

void __fastcall VidSchiUnwaitFlipQueueUnderSchedulerSpinLock(__int64 a1)
{
  _QWORD v2[2]; // [rsp+20h] [rbp-40h] BYREF
  char v3; // [rsp+30h] [rbp-30h]
  _QWORD v4[4]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v5; // [rsp+58h] [rbp-8h]

  v5 = 0;
  v4[0] = a1 + 1648;
  AcquireSpinLock::Acquire((Acquire *)v4);
  v3 = 0;
  v2[1] = v2;
  v2[0] = v2;
  VidSchUnwaitFlipQueue((__int64)v2, a1);
  if ( !v3 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v2);
  AcquireSpinLock::Release((AcquireSpinLock *)v4);
}
