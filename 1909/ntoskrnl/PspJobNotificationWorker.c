/*
 * XREFs of PspJobNotificationWorker @ 0x1406B3190
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     PspUnlockJob @ 0x140613420 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140613460 (PspLockJobExclusive.c)
 *     PspSendReliableJobNotification @ 0x1406B3298 (PspSendReliableJobNotification.c)
 */

signed __int64 PspJobNotificationWorker()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  signed __int32 v2; // esi
  signed __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi

  do
  {
    v0 = _InterlockedExchange64(&PspJobNotificationList, -1LL);
    do
    {
      v1 = *(_QWORD *)(v0 + 968);
      _m_prefetchw((const void *)(v0 + 1304));
      v2 = _InterlockedAnd((volatile signed __int32 *)(v0 + 1304), 0xFFFDDFFF);
      if ( (v2 & 0x2000) != 0 )
        ZwUpdateWnfStateData(v0 + 880, 0LL, 0LL);
      if ( (v2 & 0x20000) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        PspLockJobExclusive(v0, (__int64)CurrentThread);
        if ( *(_QWORD *)(v0 + 456) && (*(_DWORD *)(v0 + 876) & 0x1000) != 0 )
          PspSendReliableJobNotification((PVOID)v0);
        PspUnlockJob(v0, (__int64)CurrentThread);
      }
      ObfDereferenceObjectWithTag((PVOID)v0, 0x6F4E7350u);
      v0 = v1;
    }
    while ( v1 && v1 != -1 );
    result = _InterlockedCompareExchange64(&PspJobNotificationList, 0LL, -1LL);
  }
  while ( result != -1 );
  return result;
}
