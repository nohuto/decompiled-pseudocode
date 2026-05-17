/*
 * XREFs of RtlpEnsureLiveDeadListsInitialized @ 0x1800E0CB0
 * Callers:
 *     RtlpMoveActCtxToFreeList @ 0x1800E0D48 (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800E0E74 (RtlpPlaceActivationContextOnLiveList.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 */

__int64 RtlpEnsureLiveDeadListsInitialized()
{
  __int64 result; // rax

  if ( !g_SxsLiveActivationContexts )
  {
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    if ( !g_SxsLiveActivationContexts )
    {
      qword_1801665A0 = (__int64)&g_SxsLiveActivationContexts;
      g_SxsLiveActivationContexts = (__int64)&g_SxsLiveActivationContexts;
      qword_180166590 = (__int64)&g_SxsFreeActivationContexts;
      g_SxsFreeActivationContexts = (__int64)&g_SxsFreeActivationContexts;
    }
    return RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  }
  return result;
}
