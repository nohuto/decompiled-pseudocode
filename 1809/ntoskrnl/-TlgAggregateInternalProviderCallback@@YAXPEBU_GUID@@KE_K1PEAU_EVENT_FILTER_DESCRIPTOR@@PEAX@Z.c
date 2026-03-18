/*
 * XREFs of ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1406D0CD0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400043BC (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     LookUpTableFlushComplete @ 0x1406AEFB8 (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  _KLOCK_ENTRY *v4; // rax
  __int64 i; // rbx

  if ( ControlCode == 2 && MatchAnyKeyword == 32 )
  {
    v4 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)&qword_1404C6928, 0LL, 1);
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1404C6928, 0LL) )
    {
      if ( v4 )
        KeAbPostReleaseEx((ULONG_PTR)&qword_1404C6928, v4);
    }
    else
    {
      if ( v4 )
        v4->AcquiredByte |= 1u;
      for ( i = qword_1404DC368; i; i = *(_QWORD *)(i + 352) )
        LookUpTableFlushComplete(i);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404C6928, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404C6928);
      KeAbPostRelease((ULONG_PTR)&qword_1404C6928);
    }
  }
}
