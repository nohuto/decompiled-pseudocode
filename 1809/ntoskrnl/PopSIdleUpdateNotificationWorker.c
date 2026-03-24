/*
 * XREFs of PopSIdleUpdateNotificationWorker @ 0x14013A880
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140138CC8 (PopQueueWorkItem.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopDiagTraceSIdleUpdateNotificationWorker @ 0x140874018 (PopDiagTraceSIdleUpdateNotificationWorker.c)
 */

char PopSIdleUpdateNotificationWorker()
{
  char v0; // bl
  char result; // al
  __int64 v2; // rcx
  int v3; // edi
  __int64 v4; // rcx
  char v5; // bl

  ((void (*)(void))PopAcquirePolicyLock)();
  v0 = byte_140417690;
  result = PopReleasePolicyLock();
  v3 = 0;
  if ( v0 != PopSIdleLastUpdateNotificationState )
  {
    if ( qword_14043FFA8 )
    {
      LOBYTE(v2) = v0;
      v3 = qword_14043FFA8(v2);
    }
    LOBYTE(v2) = v0;
    result = PopDiagTraceSIdleUpdateNotificationWorker(v2);
    if ( !v3 )
      PopSIdleLastUpdateNotificationState = v0;
  }
  v4 = (unsigned int)_InterlockedExchange(&dword_140410040, 0);
  if ( !v3 )
  {
    PopAcquirePolicyLock(v4);
    v5 = byte_140417690;
    result = PopReleasePolicyLock();
    if ( v5 != PopSIdleLastUpdateNotificationState )
      return PopQueueWorkItem((__int64)&PopSIdleUpdateNotificationWorkItem, DelayedWorkQueue);
  }
  return result;
}
