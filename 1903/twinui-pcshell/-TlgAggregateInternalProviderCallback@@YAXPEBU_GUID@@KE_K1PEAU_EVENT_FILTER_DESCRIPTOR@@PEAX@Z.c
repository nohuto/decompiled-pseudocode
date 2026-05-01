/*
 * XREFs of ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1801066E0
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x180080A6C (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(
        LPCGUID SourceId,
        ULONG IsEnabled,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 i; // rbx

  if ( IsEnabled == 2 && MatchAnyKeyword == 32 && TryAcquireSRWLockExclusive(&stru_180599AC8) )
  {
    for ( i = qword_180599AD0; i; i = *(_QWORD *)(i + 336) )
      LookUpTableFlushComplete(i);
    ReleaseSRWLockExclusive(&stru_180599AC8);
  }
}
