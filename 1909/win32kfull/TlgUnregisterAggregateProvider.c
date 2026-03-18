/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1C03686C8
 * Callers:
 *     DisableUserkTraceLogging @ 0x1C0118AF0 (DisableUserkTraceLogging.c)
 * Callees:
 *     DestroyAggregateSession @ 0x1C03687BC (DestroyAggregateSession.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C03687FC (CancelTimerCallbacksAndDeleteTimer.c)
 *     LookUpTableFlushComplete @ 0x1C0368820 (LookUpTableFlushComplete.c)
 */

NTSTATUS TlgUnregisterAggregateProvider()
{
  void *v0; // rdi
  __int64 v1; // rcx
  __int64 *v2; // rdx
  __int64 *v3; // rax
  NTSTATUS result; // eax

  if ( (ETWENABLECALLBACK *)qword_1C031F258 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C032BE90, 0LL);
    v1 = qword_1C032BE98;
    v2 = &qword_1C032BE98;
    while ( v1 )
    {
      v3 = (__int64 *)(v1 + 352);
      if ( *(int **)(v1 + 344) == &dword_1C031F230 )
      {
        v0 = (void *)v1;
        *v2 = *v3;
        LookUpTableFlushComplete();
        if ( !qword_1C032BE98 )
        {
          EtwUnregister(qword_1C031F360);
          qword_1C031F360 = 0LL;
          dword_1C031F340 = 0;
        }
        break;
      }
      v1 = *v3;
      v2 = v3;
    }
    ExReleasePushLockExclusiveEx(&unk_1C032BE90, 0LL);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer(v0);
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    dword_1C031F230 = 0;
    return DestroyAggregateSession(v0);
  }
  else
  {
    result = EtwUnregister(RegHandle);
    RegHandle = 0LL;
    dword_1C031F230 = 0;
  }
  return result;
}
