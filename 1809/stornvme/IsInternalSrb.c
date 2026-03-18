/*
 * XREFs of IsInternalSrb @ 0x1C000ABFC
 * Callers:
 *     RequestPendingCompletion @ 0x1C00060D0 (RequestPendingCompletion.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000D150 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeRequestComplete @ 0x1C000F7AC (NVMeRequestComplete.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

char __fastcall IsInternalSrb(__int64 a1, __int64 a2)
{
  char v2; // r8
  unsigned int v4; // edx

  v2 = 0;
  if ( a2 != a1 + 808 )
  {
    v4 = 0;
    while ( a2 != 104LL * v4 + a1 + 912 )
    {
      if ( ++v4 >= 6 )
        return v2;
    }
  }
  return 1;
}
