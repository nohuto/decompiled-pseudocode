/*
 * XREFs of RtlpEnsureLiveDeadListsInitialized @ 0x1800DE930
 * Callers:
 *     RtlpMoveActCtxToFreeList @ 0x1800DE9C8 (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800DEAFC (RtlpPlaceActivationContextOnLiveList.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 */

__int64 RtlpEnsureLiveDeadListsInitialized()
{
  __int64 result; // rax

  if ( !g_SxsLiveActivationContexts )
  {
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    if ( !g_SxsLiveActivationContexts )
    {
      qword_180166630 = (__int64)&g_SxsLiveActivationContexts;
      g_SxsLiveActivationContexts = (__int64)&g_SxsLiveActivationContexts;
      qword_180166620 = (__int64)&g_SxsFreeActivationContexts;
      g_SxsFreeActivationContexts = (__int64)&g_SxsFreeActivationContexts;
    }
    return RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  }
  return result;
}
