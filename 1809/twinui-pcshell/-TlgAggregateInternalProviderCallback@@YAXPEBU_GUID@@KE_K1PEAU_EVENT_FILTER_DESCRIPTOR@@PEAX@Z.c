/*
 * XREFs of ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1800E42C0
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x1800E4018 (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(
        LPCGUID SourceId,
        ULONG IsEnabled,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 i; // rbx

  if ( IsEnabled == 2 && MatchAnyKeyword == 32 && TryAcquireSRWLockExclusive(&SRWLock) )
  {
    for ( i = qword_180510430; i; i = *(_QWORD *)(i + 336) )
      LookUpTableFlushComplete(i);
    ReleaseSRWLockExclusive(&SRWLock);
  }
}
