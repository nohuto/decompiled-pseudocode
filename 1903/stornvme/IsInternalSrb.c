/*
 * XREFs of IsInternalSrb @ 0x1C0008028
 * Callers:
 *     RequestPendingCompletion @ 0x1C0004640 (RequestPendingCompletion.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000A730 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeRequestComplete @ 0x1C000D9D8 (NVMeRequestComplete.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00190A8 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

char __fastcall IsInternalSrb(__int64 a1, __int64 a2)
{
  char v2; // r8
  unsigned int v4; // edx

  v2 = 0;
  if ( a2 != a1 + 816 )
  {
    v4 = 0;
    while ( a2 != 104LL * v4 + a1 + 920 )
    {
      if ( ++v4 >= 6 )
        return v2;
    }
  }
  return 1;
}
