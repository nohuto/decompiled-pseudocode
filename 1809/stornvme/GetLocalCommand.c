/*
 * XREFs of GetLocalCommand @ 0x1C00014F8
 * Callers:
 *     NVMeAsyncEventRequestCompletion @ 0x1C00012C0 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C0001560 (NVMeGetLogPageCompletion.c)
 *     NVMeCompletionDpcRoutine @ 0x1C00018F0 (NVMeCompletionDpcRoutine.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x1C0007990 (NVMeReenumerateReissueGetLogNamespaceChangeListCompletion.c)
 *     NVMeRequestComplete @ 0x1C000F7AC (NVMeRequestComplete.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocalCommand(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v4; // edx

  v2 = 0LL;
  if ( a2 == a1 + 808 )
    return a1 + 800;
  v4 = 0;
  while ( a2 != 104LL * v4 + a1 + 912 )
  {
    if ( ++v4 >= 6 )
      return v2;
  }
  return 104LL * v4 + a1 + 904;
}
