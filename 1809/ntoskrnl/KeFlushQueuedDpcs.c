/*
 * XREFs of KeFlushQueuedDpcs @ 0x1400DBE30
 * Callers:
 *     KeCleanupThreadState @ 0x14008D8C0 (KeCleanupThreadState.c)
 *     CcDeletePartition @ 0x14026B0A0 (CcDeletePartition.c)
 *     ExpTimeZoneCleanupSiloState @ 0x140583938 (ExpTimeZoneCleanupSiloState.c)
 *     MmPageEntireDriver @ 0x140653990 (MmPageEntireDriver.c)
 *     IopDeleteDriver @ 0x14070EDF0 (IopDeleteDriver.c)
 *     ExpPartitionDestroy @ 0x1408D6354 (ExpPartitionDestroy.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140063A40 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140063BE0 (KeEnumerateNextProcessor.c)
 *     KeGenericProcessorCallback @ 0x1400D8670 (KeGenericProcessorCallback.c)
 *     KiGetDeepIdleProcessors @ 0x1400DBEFC (KiGetDeepIdleProcessors.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
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
