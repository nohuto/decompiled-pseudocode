/*
 * XREFs of ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x14072FD60
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
 *     LookUpTableFlushComplete @ 0x14078CEBC (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  _KLOCK_ENTRY *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 i; // rbx

  if ( ControlCode == 2 && MatchAnyKeyword == 32 )
  {
    v4 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)&qword_1404F2B98, 0LL, 1);
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1404F2B98, 0LL) )
    {
      if ( v4 )
        KeAbPostReleaseEx((ULONG_PTR)&qword_1404F2B98, v4);
    }
    else
    {
      if ( v4 )
        v4->AcquiredByte |= 1u;
      for ( i = qword_140509820; i; i = *(_QWORD *)(i + 352) )
        LookUpTableFlushComplete(i, v5, v6);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404F2B98, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404F2B98);
      KeAbPostRelease((ULONG_PTR)&qword_1404F2B98);
    }
  }
}
