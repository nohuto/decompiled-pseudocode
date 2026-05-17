/*
 * XREFs of RtlLockHeapManagerForCloning @ 0x1800F21A0
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D8540 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D8AC0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpCSparseBitmapLock @ 0x18005D5B4 (RtlpCSparseBitmapLock.c)
 *     RtlTryEnterCriticalSection @ 0x180068C50 (RtlTryEnterCriticalSection.c)
 *     RtlpHpHeapLock @ 0x18006D704 (RtlpHpHeapLock.c)
 *     ZwDelayExecution @ 0x1800A0960 (ZwDelayExecution.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800F3E80 (RtlpUnlockHeapManagerForCloning.c)
 *     RtlpHpLfhContextLockUnlock @ 0x18010CCDC (RtlpHpLfhContextLockUnlock.c)
 */

__int64 RtlLockHeapManagerForCloning()
{
  struct _PEB *v0; // r14
  __int64 v1; // r9
  unsigned __int64 *v2; // r8
  __int64 v3; // r9
  unsigned int v4; // edi
  unsigned int i; // esi
  void **ProcessHeaps; // rax
  char *v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned __int64 *v15; // r8
  __int64 v16; // r9
  int v17; // ebp
  unsigned __int64 v18; // rdx
  unsigned __int64 v20; // rcx
  char v21[40]; // [rsp+20h] [rbp-28h] BYREF
  char v22; // [rsp+50h] [rbp+8h] BYREF
  __int64 v23; // [rsp+58h] [rbp+10h]

  v0 = NtCurrentPeb();
  RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
  RtlpCSparseBitmapLock((__int64)&unk_180166908, (char *)1, (__int64)v21, v1);
  v4 = 0;
  for ( i = 0; i < v0->NumberOfHeaps; ++i )
  {
    ProcessHeaps = v0->ProcessHeaps;
    v7 = (char *)ProcessHeaps[i];
    if ( *((_DWORD *)v7 + 4) == -571548178 )
    {
      if ( (v7[20] & 1) == 0 )
      {
        RtlpHpHeapLock((__int64)ProcessHeaps[i], &v22, v2, v3);
        RtlAcquireSRWLockExclusive((unsigned __int64)(v7 + 368), v8, v9, v10);
        RtlAcquireSRWLockExclusive((unsigned __int64)(v7 + 560), v11, v12, v13);
        RtlAcquireSRWLockExclusive((unsigned __int64)(v7 + 224), v14, v15, v16);
        RtlpHpLfhContextLockUnlock(v7 + 832, 0LL);
      }
    }
    else if ( (v7[112] & 1) == 0 )
    {
      v17 = 0;
      v23 = -250000LL;
      while ( !(unsigned int)RtlTryEnterCriticalSection(*((_QWORD *)v7 + 44)) )
      {
        ZwDelayExecution();
        if ( (unsigned int)++v17 >= 0x64 )
        {
          v4 = -1073741420;
          RtlpUnlockHeapManagerForCloning(0LL, i);
          return v4;
        }
      }
      if ( v7[418] == 2 )
        v20 = *((_QWORD *)v7 + 51);
      else
        v20 = 0LL;
      if ( v20 )
        RtlAcquireSRWLockExclusive(v20, v18, v2, v3);
    }
  }
  return v4;
}
