/*
 * XREFs of RtlpAddDebugInfoToCriticalSection @ 0x180061B00
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x18005EA34 (RtlpWaitOnCriticalSection.c)
 *     RtlInitializeResource @ 0x180061A10 (RtlInitializeResource.c)
 *     RtlInitializeCriticalSectionEx @ 0x180061C40 (RtlInitializeCriticalSectionEx.c)
 *     RtlInitializeCriticalSection @ 0x18006BE00 (RtlInitializeCriticalSection.c)
 *     RtlInitializeCriticalSectionAndSpinCount @ 0x18006CBD0 (RtlInitializeCriticalSectionAndSpinCount.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpFreeDebugInfo @ 0x18005C7C8 (RtlpFreeDebugInfo.c)
 *     RtlLogStackBackTraceEx @ 0x180061BC0 (RtlLogStackBackTraceEx.c)
 *     RtlpAllocateDebugInfo @ 0x180061BF8 (RtlpAllocateDebugInfo.c)
 */

void __fastcall RtlpAddDebugInfoToCriticalSection(__int64 a1)
{
  __int64 DebugInfo; // rax
  signed __int64 v3; // rbx
  int v4; // eax
  volatile signed __int64 v5; // rbx
  signed __int64 *v6; // rax
  signed __int64 v7; // rbx

  DebugInfo = RtlpAllocateDebugInfo();
  v3 = DebugInfo;
  if ( DebugInfo )
  {
    *(_WORD *)DebugInfo = 0;
    if ( (*(_DWORD *)(a1 + 32) & 0x8000000) != 0 )
      *(_WORD *)DebugInfo = 1;
    *(_QWORD *)(DebugInfo + 32) = 0LL;
    *(_DWORD *)(DebugInfo + 40) = 0;
    *(_QWORD *)(DebugInfo + 8) = a1;
    v4 = RtlLogStackBackTraceEx(2LL);
    *(_WORD *)(v3 + 2) = v4;
    *(_WORD *)(v3 + 44) = HIWORD(v4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1, v3, -1LL) == -1 )
    {
      v5 = *(_QWORD *)a1;
      RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
      v6 = (signed __int64 *)off_18015F648[0];
      v7 = v5 + 16;
      if ( *(_UNKNOWN ***)off_18015F648[0] != &RtlCriticalSectionList )
        __fastfail(3u);
      *(_QWORD *)v7 = &RtlCriticalSectionList;
      *(_QWORD *)(v7 + 8) = v6;
      *v6 = v7;
      off_18015F648[0] = (_UNKNOWN **)v7;
      RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    }
    else
    {
      RtlpFreeDebugInfo((char *)v3);
    }
  }
  else
  {
    _InterlockedAdd(&RtlFailedCriticalDebugAllocations, 1u);
  }
}
