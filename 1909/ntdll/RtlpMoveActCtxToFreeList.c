/*
 * XREFs of RtlpMoveActCtxToFreeList @ 0x1800DE9C8
 * Callers:
 *     RtlReleaseActivationContext @ 0x1800373A0 (RtlReleaseActivationContext.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlpFreeActivationContext @ 0x180083164 (RtlpFreeActivationContext.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800DE930 (RtlpEnsureLiveDeadListsInitialized.c)
 */

NTSTATUS __fastcall RtlpMoveActCtxToFreeList(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdx
  unsigned int i; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx

  RtlpEnsureLiveDeadListsInitialized();
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD **)(a1 + 16);
  if ( *(_QWORD *)(v2 + 8) != a1 + 8 || *v3 != a1 + 8 )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  for ( i = g_SxsCurrentDeadActivationContexts;
        i && i >= g_SxsMaxDeadActivationContexts;
        i = --g_SxsCurrentDeadActivationContexts )
  {
    v5 = g_SxsFreeActivationContexts;
    v6 = *(_QWORD *)g_SxsFreeActivationContexts;
    if ( *(__int64 **)(g_SxsFreeActivationContexts + 8) != &g_SxsFreeActivationContexts
      || *(_QWORD *)(v6 + 8) != g_SxsFreeActivationContexts )
    {
      __fastfail(3u);
    }
    g_SxsFreeActivationContexts = *(_QWORD *)g_SxsFreeActivationContexts;
    *(_QWORD *)(v6 + 8) = &g_SxsFreeActivationContexts;
    RtlpFreeActivationContext(v5 - 8);
  }
  if ( g_SxsMaxDeadActivationContexts )
  {
    v7 = (_QWORD *)(a1 + 8);
    v8 = (_QWORD *)qword_180166620;
    if ( *(__int64 **)qword_180166620 != &g_SxsFreeActivationContexts )
      __fastfail(3u);
    *v7 = &g_SxsFreeActivationContexts;
    *(_QWORD *)(a1 + 16) = v8;
    *v8 = v7;
    qword_180166620 = a1 + 8;
    g_SxsCurrentDeadActivationContexts = i + 1;
  }
  else
  {
    RtlpFreeActivationContext(a1);
  }
  return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
}
