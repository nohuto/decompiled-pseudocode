/*
 * XREFs of ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0249060
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x1C0249938 (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 i; // rbx

  if ( ControlCode == 2
    && MatchAnyKeyword == 32
    && (unsigned __int8)ExTryAcquirePushLockExclusiveEx(&unk_1C0218578, 0LL, Level) )
  {
    for ( i = qword_1C0218850; i; i = *(_QWORD *)(i + 352) )
      LookUpTableFlushComplete(i, v4, v5, v6);
    ExReleasePushLockExclusiveEx(&unk_1C0218578, 0LL);
  }
}
