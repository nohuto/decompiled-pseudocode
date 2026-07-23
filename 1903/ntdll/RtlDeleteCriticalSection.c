/*
 * XREFs of RtlDeleteCriticalSection @ 0x180032B30
 * Callers:
 *     RtlDeleteResource @ 0x180032AA0 (RtlDeleteResource.c)
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x18004A960 (RtlDestroyHeap.c)
 *     sub_1800874F8 @ 0x1800874F8 (sub_1800874F8.c)
 *     RtlTraceDatabaseDestroy @ 0x1800FC0B0 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     sub_180035DD0 @ 0x180035DD0 (sub_180035DD0.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwAlertThreadByThreadId @ 0x18009D4B0 (ZwAlertThreadByThreadId.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800FAE20 @ 0x1800FAE20 (sub_1800FAE20.c)
 */

NTSTATUS __cdecl RtlDeleteCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  char *LockSemaphore; // rcx
  NTSTATUS v3; // r14d
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdi
  __int64 v6; // r15
  LIST_ENTRY *p_ProcessLocksList; // rcx
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
    v3 = ZwClose(LockSemaphore);
  else
    v3 = 0;
  DebugInfo = CriticalSection->DebugInfo;
  if ( (unsigned __int64)&CriticalSection->DebugInfo[-1].Identifier + 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v6 = CriticalSection->SpinCount & 0x4000000;
    RtlAcquireSRWLockExclusive(&stru_1801662F8);
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
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_1801662F8, 0LL, 1LL);
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
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_1801662F8, v14, v10);
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
              _InterlockedAnd64((volatile signed __int64 *)&stru_1801662F8, 0xFFFFFFFFFFFFFFFBuLL);
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
          v20 = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_1801662F8, 0LL, v14);
          v19 = v14 == v20;
          v14 = v20;
          if ( v19 )
            goto LABEL_25;
        }
        while ( 1 )
        {
          v22 = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_1801662F8, v14 - 4, v14);
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
    if ( qword_180163B78
      && (_DWORD)v11
      && (unsigned int)v11 <= HIDWORD(qword_180163B78[22].Ptr)
      && *((_QWORD *)qword_180163B78[23].Ptr - v11)
      && qword_180163B78 )
    {
      sub_1800FAE20();
    }
    memset(DebugInfo, 0, sizeof(_RTL_CRITICAL_SECTION_DEBUG));
    if ( !v6 )
      sub_180035DD0((PSLIST_ENTRY)DebugInfo);
  }
  memset(CriticalSection, 0, sizeof(_RTL_CRITICAL_SECTION));
  return v3;
}
