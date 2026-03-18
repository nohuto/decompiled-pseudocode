/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1C035572C
 * Callers:
 *     DisableUserkTraceLogging @ 0x1C0133770 (DisableUserkTraceLogging.c)
 * Callees:
 *     DestroyAggregateSession @ 0x1C0355820 (DestroyAggregateSession.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C0355860 (CancelTimerCallbacksAndDeleteTimer.c)
 *     LookUpTableFlushComplete @ 0x1C0355884 (LookUpTableFlushComplete.c)
 */

NTSTATUS TlgUnregisterAggregateProvider()
{
  void *v0; // rdi
  __int64 v1; // rcx
  __int64 *v2; // rdx
  __int64 *v3; // rax
  NTSTATUS result; // eax

  if ( (ETWENABLECALLBACK *)qword_1C030C268 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C03197F8, 0LL);
    v1 = qword_1C0319800;
    v2 = &qword_1C0319800;
    while ( v1 )
    {
      v3 = (__int64 *)(v1 + 352);
      if ( *(int **)(v1 + 344) == &dword_1C030C240 )
      {
        v0 = (void *)v1;
        *v2 = *v3;
        LookUpTableFlushComplete();
        if ( !qword_1C0319800 )
        {
          EtwUnregister(qword_1C030C458);
          qword_1C030C458 = 0LL;
          dword_1C030C438 = 0;
        }
        break;
      }
      v1 = *v3;
      v2 = v3;
    }
    ExReleasePushLockExclusiveEx(&unk_1C03197F8, 0LL);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer(v0);
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    dword_1C030C240 = 0;
    return DestroyAggregateSession(v0);
  }
  else
  {
    result = EtwUnregister(RegHandle);
    RegHandle = 0LL;
    dword_1C030C240 = 0;
  }
  return result;
}
