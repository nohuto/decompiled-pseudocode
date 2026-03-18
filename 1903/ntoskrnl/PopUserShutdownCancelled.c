/*
 * XREFs of PopUserShutdownCancelled @ 0x140729950
 * Callers:
 *     PoUserShutdownCancelled @ 0x140729920 (PoUserShutdownCancelled.c)
 *     PopUserShutdownDelayWorkerCallback @ 0x1408A8BC0 (PopUserShutdownDelayWorkerCallback.c)
 * Callees:
 *     KeCancelTimer @ 0x1400B2CA0 (KeCancelTimer.c)
 *     PpmEndHighPerfRequest @ 0x14018156C (PpmEndHighPerfRequest.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
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
  result = qword_14046BD80;
  if ( qword_14046BD80 )
  {
    LOBYTE(v3) = a1;
    result = (__int64 (__fastcall *)(_QWORD))qword_14046BD80(v3);
    v2 = (char)result;
  }
  if ( v2 )
    return (__int64 (__fastcall *)(_QWORD))PpmEndHighPerfRequest(3);
  return result;
}
