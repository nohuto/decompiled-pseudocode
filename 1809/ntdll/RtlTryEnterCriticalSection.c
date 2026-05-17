/*
 * XREFs of RtlTryEnterCriticalSection @ 0x180068C50
 * Callers:
 *     RtlpReAllocateHeap @ 0x18000C610 (RtlpReAllocateHeap.c)
 *     RtlpFlushHeap @ 0x18006896C (RtlpFlushHeap.c)
 *     RtlTryAcquirePebLock @ 0x180068C30 (RtlTryAcquirePebLock.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800CFBF0 (LdrpTryAcquireLoaderLock.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F21A0 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlTryEnterCriticalSection(__int64 a1)
{
  struct _TEB *v1; // rax
  signed __int8 v2; // cf
  void *UniqueThread; // rax
  __int64 result; // rax

  v1 = NtCurrentTeb();
  v2 = _interlockedbittestandreset((volatile signed __int32 *)(a1 + 8), 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = UniqueThread;
    result = 1LL;
    *(_DWORD *)(a1 + 12) = 1;
  }
  else if ( *(void **)(a1 + 16) == UniqueThread )
  {
    ++*(_DWORD *)(a1 + 12);
    return 1LL;
  }
  else
  {
    return 0LL;
  }
  return result;
}
