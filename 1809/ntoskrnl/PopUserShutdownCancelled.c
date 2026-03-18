/*
 * XREFs of PopUserShutdownCancelled @ 0x1406E2290
 * Callers:
 *     PoUserShutdownCancelled @ 0x1406E2260 (PoUserShutdownCancelled.c)
 *     PopUserShutdownDelayWorkerCallback @ 0x14086C280 (PopUserShutdownDelayWorkerCallback.c)
 * Callees:
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     PpmEndHighPerfRequest @ 0x140177AE8 (PpmEndHighPerfRequest.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 */

__int64 (__fastcall *__fastcall PopUserShutdownCancelled(char a1))(_QWORD)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 (__fastcall *result)(_QWORD); // rax

  v2 = 0;
  PopAcquirePolicyLock();
  if ( PopUserShutdownInProgress )
  {
    KeCancelTimer(&PopUserShutdownDelayTimer);
    PopBsdShutdownInProgress = 0;
    PopUserShutdownInProgress = 0;
    v2 = 1;
  }
  PopReleasePolicyLock();
  result = qword_14043FF70;
  if ( qword_14043FF70 )
  {
    LOBYTE(v3) = a1;
    result = (__int64 (__fastcall *)(_QWORD))qword_14043FF70(v3);
    v2 = (char)result;
  }
  if ( v2 )
    return (__int64 (__fastcall *)(_QWORD))PpmEndHighPerfRequest(3);
  return result;
}
