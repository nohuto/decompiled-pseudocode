/*
 * XREFs of PopSIdleUpdateNotificationWorker @ 0x14013A980
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140138DC8 (PopQueueWorkItem.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopDiagTraceSIdleUpdateNotificationWorker @ 0x140875278 (PopDiagTraceSIdleUpdateNotificationWorker.c)
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
  v0 = byte_140418710;
  result = PopReleasePolicyLock();
  v3 = 0;
  if ( v0 != PopSIdleLastUpdateNotificationState )
  {
    if ( qword_140441068 )
    {
      LOBYTE(v2) = v0;
      v3 = qword_140441068(v2);
    }
    LOBYTE(v2) = v0;
    result = PopDiagTraceSIdleUpdateNotificationWorker(v2);
    if ( !v3 )
      PopSIdleLastUpdateNotificationState = v0;
  }
  v4 = (unsigned int)_InterlockedExchange(&dword_1404110C0, 0);
  if ( !v3 )
  {
    PopAcquirePolicyLock(v4);
    v5 = byte_140418710;
    result = PopReleasePolicyLock();
    if ( v5 != PopSIdleLastUpdateNotificationState )
      return PopQueueWorkItem((__int64)&PopSIdleUpdateNotificationWorkItem, DelayedWorkQueue);
  }
  return result;
}
