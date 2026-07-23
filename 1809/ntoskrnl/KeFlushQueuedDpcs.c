/*
 * XREFs of KeFlushQueuedDpcs @ 0x1400DBED0
 * Callers:
 *     KeCleanupThreadState @ 0x14008D800 (KeCleanupThreadState.c)
 *     CcDeletePartition @ 0x14026B390 (CcDeletePartition.c)
 *     ExpTimeZoneCleanupSiloState @ 0x140584938 (ExpTimeZoneCleanupSiloState.c)
 *     MmPageEntireDriver @ 0x140654B30 (MmPageEntireDriver.c)
 *     IopDeleteDriver @ 0x140710070 (IopDeleteDriver.c)
 *     ExpPartitionDestroy @ 0x1408D75F4 (ExpPartitionDestroy.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeGenericProcessorCallback @ 0x1400D8710 (KeGenericProcessorCallback.c)
 *     KiGetDeepIdleProcessors @ 0x1400DBF9C (KiGetDeepIdleProcessors.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void KeFlushQueuedDpcs(void)
{
  int v0; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 *v1[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v2; // [rsp+38h] [rbp-C8h]
  _BYTE v3[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v4; // [rsp+48h] [rbp-B8h]
  unsigned __int16 v5[88]; // [rsp+F0h] [rbp-10h] BYREF

  KiGetDeepIdleProcessors(v3, v5);
  v1[1] = v4;
  v1[0] = (unsigned __int16 *)v3;
  v2 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v0, v1) )
  {
    if ( *(_DWORD *)(KiProcessorBlock[v0] + 11884) )
      KeAddProcessorAffinityEx(v5, v0);
  }
  KeGenericProcessorCallback(
    v5,
    (void (__fastcall *)(struct _KPRCB *, _SINGLE_LIST_ENTRY *))KiFlushQueuedDpcsWorker,
    0LL,
    2uLL);
}
