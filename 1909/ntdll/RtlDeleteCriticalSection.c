/*
 * XREFs of RtlDeleteCriticalSection @ 0x180032B30
 * Callers:
 *     RtlDeleteResource @ 0x180032AA0 (RtlDeleteResource.c)
 *     RtlCreateHeap @ 0x1800491A0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x18004AA00 (RtlDestroyHeap.c)
 *     EtwpFreeLoggerContext @ 0x180087B98 (EtwpFreeLoggerContext.c)
 *     RtlTraceDatabaseDestroy @ 0x1800FC190 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     RtlpFreeDebugInfo @ 0x180035DD0 (RtlpFreeDebugInfo.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     ZwAlertThreadByThreadId @ 0x18009DC60 (ZwAlertThreadByThreadId.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlStdReleaseStackTrace @ 0x1800FAF00 (RtlStdReleaseStackTrace.c)
 */

NTSTATUS __cdecl RtlDeleteCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  char *LockSemaphore; // rcx
  NTSTATUS v3; // r14d
  _RTL_CRITICAL_SECTION_DEBUG *DebugInfo; // rdi
  __int64 v6; // r15
  _LIST_ENTRY *p_ProcessLocksList; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rdx
  signed __int64 v10; // rax
  __int64 v11; // rdx
  signed __int64 v12; // rcx
  __int64 v13; // rdx
  signed __int64 v14; // rdx
  signed __int64 v15; // rtt
  _QWORD *v16; // r9
  __int64 i; // rcx
  __int64 v18; // rax
  bool v19; // zf
  signed __int64 v20; // rax
  __int64 v21; // rsi
  signed __int64 v22; // rax
  _QWORD *v23; // rax

  LockSemaphore = (char *)CriticalSection->LockSemaphore;
  if ( (unsigned __int64)(LockSemaphore - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    v3 = NtClose(LockSemaphore);
  else
    v3 = 0;
  DebugInfo = CriticalSection->DebugInfo;
  if ( (unsigned __int64)&CriticalSection->DebugInfo[-1].SpareUSHORT + 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v6 = CriticalSection->SpinCount & 0x4000000;
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    p_ProcessLocksList = &DebugInfo->ProcessLocksList;
    Flink = DebugInfo->ProcessLocksList.Flink;
    if ( Flink )
    {
      Blink = DebugInfo->ProcessLocksList.Blink;
      if ( Flink->Blink != p_ProcessLocksList || Blink->Flink != p_ProcessLocksList )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
    }
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, 0LL, 1LL);
    if ( v10 != 1 )
    {
      do
      {
        v12 = v10 & 6;
        v13 = 3LL;
        if ( v12 != 2 )
          v13 = -1LL;
        v14 = v10 + v13;
        v15 = v10;
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, v14, v10);
      }
      while ( v15 != v10 );
      if ( v12 == 2 )
      {
        while ( (v14 & 1) == 0 )
        {
LABEL_19:
          v16 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0uLL);
          for ( i = *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v16[1] )
          {
            v23 = v16;
            v16 = (_QWORD *)*v16;
            v16[2] = v23;
          }
          if ( v16 != (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0uLL) )
            *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = i;
          if ( (*(_DWORD *)(i + 36) & 1) != 0 )
          {
            v18 = *(_QWORD *)(i + 16);
            if ( v18 )
            {
              *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v18;
              *(_QWORD *)(i + 16) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)&RtlCriticalSectionLock, 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_25:
                v21 = *(_QWORD *)(i + 16);
                _interlockedbittestandset((volatile signed __int32 *)(i + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(i + 36), 1u) )
                  ZwAlertThreadByThreadId(*(HANDLE *)(i + 24));
                i = v21;
              }
              while ( v21 );
              goto LABEL_11;
            }
          }
          v20 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, 0LL, v14);
          v19 = v14 == v20;
          v14 = v20;
          if ( v19 )
            goto LABEL_25;
        }
        while ( 1 )
        {
          v22 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, v14 - 4, v14);
          v19 = v14 == v22;
          v14 = v22;
          if ( v19 )
            break;
          if ( (v22 & 1) == 0 )
            goto LABEL_19;
        }
      }
    }
LABEL_11:
    v11 = DebugInfo->CreatorBackTraceIndex + (DebugInfo->CreatorBackTraceIndexHigh << 16);
    if ( RtlpStackTraceDatabase
      && (_DWORD)v11
      && (unsigned int)v11 <= HIDWORD(RtlpStackTraceDatabase[22].Ptr)
      && *(_QWORD *)(RtlpStackTraceDatabase[23].Value - 8 * v11)
      && RtlpStackTraceDatabase )
    {
      RtlStdReleaseStackTrace();
    }
    memset(DebugInfo, 0, sizeof(_RTL_CRITICAL_SECTION_DEBUG));
    if ( !v6 )
      RtlpFreeDebugInfo(DebugInfo);
  }
  memset(CriticalSection, 0, sizeof(_RTL_CRITICAL_SECTION));
  return v3;
}
