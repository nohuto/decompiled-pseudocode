/*
 * XREFs of RtlTryEnterCriticalSection @ 0x180046C20
 * Callers:
 *     RtlpAllocateHeap @ 0x18003C350 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180041AB0 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeap @ 0x180043550 (RtlpReAllocateHeap.c)
 *     RtlTryAcquirePebLock @ 0x180047150 (RtlTryAcquirePebLock.c)
 *     RtlpFlushHeap @ 0x18004F10C (RtlpFlushHeap.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800CE4D0 (LdrpTryAcquireLoaderLock.c)
 *     RtlLockHeapManagerForCloning @ 0x1800EF164 (RtlLockHeapManagerForCloning.c)
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
