/*
 * XREFs of RtlpUnlockHeapManagerForCloning @ 0x1800F3E80
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x1800F21A0 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800F2A30 (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlpCSparseBitmapUnlock @ 0x18005D4B4 (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpUnlockHeapForCloning @ 0x18010CB88 (RtlpHpUnlockHeapForCloning.c)
 */

NTSTATUS __fastcall RtlpUnlockHeapManagerForCloning(unsigned int a1, unsigned int a2)
{
  struct _PEB *v2; // r14
  __int64 v4; // rsi
  __int64 v5; // rbp
  void **ProcessHeaps; // rax
  void *v7; // rbx
  _RTL_SRWLOCK *v8; // rcx
  __int64 v9; // rdx
  void *UniqueThread; // rcx
  int v12; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+24h] [rbp-24h]
  void *v14; // [rsp+28h] [rbp-20h]

  v2 = NtCurrentPeb();
  if ( a2 )
  {
    v4 = 0LL;
    v5 = a2;
    do
    {
      ProcessHeaps = v2->ProcessHeaps;
      v7 = ProcessHeaps[v4];
      if ( *((_DWORD *)v7 + 4) == -571548178 )
      {
        if ( (*((_BYTE *)v7 + 20) & 1) == 0 )
          RtlpHpUnlockHeapForCloning(ProcessHeaps[v4], a1);
      }
      else if ( (*((_BYTE *)v7 + 112) & 1) == 0 )
      {
        if ( *((_BYTE *)v7 + 418) == 2 )
          v8 = (_RTL_SRWLOCK *)*((_QWORD *)v7 + 51);
        else
          v8 = 0LL;
        if ( v8 )
        {
          if ( a1 )
            v8->Value = 1LL;
          RtlReleaseSRWLockExclusive(v8);
        }
        if ( a1 )
        {
          v9 = *((_QWORD *)v7 + 44);
          *((_WORD *)v7 + 208) = 0;
          *(_QWORD *)(v9 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
          *(_DWORD *)(v9 + 8) = -2;
          *(_DWORD *)(v9 + 12) = 1;
          *(_QWORD *)(v9 + 24) = 0LL;
        }
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)v7 + 44));
      }
      ++v4;
      --v5;
    }
    while ( v5 );
  }
  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_180166930 = -1LL;
    RtlpProcessHeapsListLock.OwningThread = UniqueThread;
    RtlpProcessHeapsListLock.LockCount = -2;
    RtlpProcessHeapsListLock.RecursionCount = 1;
    RtlpProcessHeapsListLock.LockSemaphore = 0LL;
    qword_180166928 = 1LL;
  }
  v12 = 1;
  v14 = &unk_180166908;
  v13 = -1;
  RtlpCSparseBitmapUnlock((__int64)&v12);
  return RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
}
