/*
 * XREFs of KeFlushQueuedDpcs @ 0x1400FB5E0
 * Callers:
 *     KeCleanupThreadState @ 0x140082D0C (KeCleanupThreadState.c)
 *     CcDeletePartition @ 0x14027E980 (CcDeletePartition.c)
 *     MmPageEntireDriver @ 0x1406A56A0 (MmPageEntireDriver.c)
 *     IopDeleteDriver @ 0x140786390 (IopDeleteDriver.c)
 *     ExpPartitionDestroy @ 0x140913684 (ExpPartitionDestroy.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x14009E060 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 *     KeGenericProcessorCallback @ 0x1400FBCAC (KeGenericProcessorCallback.c)
 *     KiGetDeepIdleProcessors @ 0x1400FC9E0 (KiGetDeepIdleProcessors.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void KeFlushQueuedDpcs(void)
{
  int v0; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 *v1[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v2; // [rsp+38h] [rbp-C8h]
  int v3; // [rsp+3Ah] [rbp-C6h]
  __int16 v4; // [rsp+3Eh] [rbp-C2h]
  _QWORD v5[22]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v6[88]; // [rsp+F0h] [rbp-10h] BYREF

  memset(v5, 0, 0xA8uLL);
  v3 = 0;
  v4 = 0;
  memset(v6, 0, 0xA8uLL);
  KiGetDeepIdleProcessors(v5, v6);
  v1[1] = (unsigned __int16 *)v5[1];
  v1[0] = (unsigned __int16 *)v5;
  v2 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v0, v1) )
  {
    if ( *(_DWORD *)(KiProcessorBlock[v0] + 11884) )
      KeAddProcessorAffinityEx(v6, v0);
  }
  KeGenericProcessorCallback(v6, KiFlushQueuedDpcsWorker, 0LL, 2LL);
}
