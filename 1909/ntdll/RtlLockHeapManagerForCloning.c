/*
 * XREFs of RtlLockHeapManagerForCloning @ 0x1800EF164
 * Callers:
 *     RtlPrepareForProcessCloning @ 0x18009C0C0 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6830 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlpHpHeapLock @ 0x1800170E8 (RtlpHpHeapLock.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryEnterCriticalSection @ 0x180046C20 (RtlTryEnterCriticalSection.c)
 *     RtlpCSparseBitmapLock @ 0x18004E87C (RtlpCSparseBitmapLock.c)
 *     ZwDelayExecution @ 0x18009D510 (ZwDelayExecution.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800F1230 (RtlpUnlockHeapManagerForCloning.c)
 *     RtlpHpLfhContextLockUnlock @ 0x18010AAC0 (RtlpHpLfhContextLockUnlock.c)
 */

__int64 RtlLockHeapManagerForCloning()
{
  struct _PEB *v0; // r14
  unsigned int v1; // edi
  unsigned int i; // esi
  void **ProcessHeaps; // rax
  char *v4; // rbx
  int v5; // ebp
  _RTL_SRWLOCK *v7; // rcx
  char v8[40]; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+50h] [rbp+8h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+58h] [rbp+10h] BYREF

  v0 = NtCurrentPeb();
  RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  RtlpCSparseBitmapLock((_RTL_SRWLOCK *)BaseAddress, 1, (__int64)v8);
  v1 = 0;
  for ( i = 0; i < v0->NumberOfHeaps; ++i )
  {
    ProcessHeaps = v0->ProcessHeaps;
    v4 = (char *)ProcessHeaps[i];
    if ( *((_DWORD *)v4 + 4) == -571548178 )
    {
      if ( (v4[20] & 1) == 0 )
      {
        RtlpHpHeapLock((__int64)ProcessHeaps[i], &v9);
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v4 + 46);
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v4 + 70);
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v4 + 28);
        RtlpHpLfhContextLockUnlock(v4 + 832, 0LL);
      }
    }
    else if ( (v4[112] & 1) == 0 )
    {
      v5 = 0;
      DelayInterval.QuadPart = -250000LL;
      while ( !RtlTryEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)v4 + 44)) )
      {
        ZwDelayExecution(0, &DelayInterval);
        if ( (unsigned int)++v5 >= 0x64 )
        {
          v1 = -1073741420;
          RtlpUnlockHeapManagerForCloning(0LL, i);
          return v1;
        }
      }
      if ( v4[418] == 2 )
        v7 = (_RTL_SRWLOCK *)*((_QWORD *)v4 + 51);
      else
        v7 = 0LL;
      if ( v7 )
        RtlAcquireSRWLockExclusive(v7);
    }
  }
  return v1;
}
