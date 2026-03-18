/*
 * XREFs of ObpTraceObjectReferenceIfActive @ 0x1400ACED8
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402D2F68 (ObpPushStackInfo.c)
 */

__int64 __fastcall ObpTraceObjectReferenceIfActive(int a1)
{
  __int64 result; // rax

  if ( ObpTraceFlags )
    return ObpPushStackInfo(a1);
  return result;
}
