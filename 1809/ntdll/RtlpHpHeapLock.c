/*
 * XREFs of RtlpHpHeapLock @ 0x18006D704
 * Callers:
 *     RtlLockHeap @ 0x18006D5A0 (RtlLockHeap.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F21A0 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x18009F744 (RtlpHpAcquireQueuedLockExclusive.c)
 */

struct _TEB *__fastcall RtlpHpHeapLock(__int64 a1, _BYTE *a2)
{
  int v4; // ecx
  struct _TEB *result; // rax
  __int64 v6; // rdx
  int v7; // eax
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
  {
    v4 = *(_DWORD *)(a1 + 220);
    if ( v4 && (result = NtCurrentTeb(), v4 == LODWORD(result->ClientId.UniqueThread)) )
    {
      ++*(_WORD *)(a1 + 216);
    }
    else
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 904));
      v7 = *(_DWORD *)(a1 + 20);
      *a2 = -1;
      if ( (v7 & 1) == 0 )
      {
        RtlpHpAcquireQueuedLockExclusive(a1 + 640, v6, v8);
        if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 320));
          if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
          {
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 512));
            if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
              RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
          }
        }
      }
      result = NtCurrentTeb();
      *(_DWORD *)(a1 + 220) = result->ClientId.UniqueThread;
      *(_WORD *)(a1 + 216) = 1;
    }
  }
  return result;
}
