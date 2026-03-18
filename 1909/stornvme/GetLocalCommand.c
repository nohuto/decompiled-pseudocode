/*
 * XREFs of GetLocalCommand @ 0x1C0008F48
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00041E0 (NVMeCompletionDpcRoutine.c)
 *     NVMeRequestComplete @ 0x1C000D8E8 (NVMeRequestComplete.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0013990 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C00150A0 (NVMeGetLogPageCompletion.c)
 *     NVMeReenumerateNameSpaceIdentifyCompletion @ 0x1C0017540 (NVMeReenumerateNameSpaceIdentifyCompletion.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0018FF8 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocalCommand(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v4; // edx

  v2 = 0LL;
  if ( a2 == a1 + 816 )
    return a1 + 808;
  v4 = 0;
  while ( a2 != 104LL * v4 + a1 + 920 )
  {
    if ( ++v4 >= 6 )
      return v2;
  }
  return 104LL * v4 + a1 + 912;
}
