/*
 * XREFs of RtlUnlockProcessHeapOnProcessTerminate @ 0x18006D1EC
 * Callers:
 *     RtlExitUserProcess @ 0x18006CF90 (RtlExitUserProcess.c)
 * Callees:
 *     RtlUnlockHeap @ 0x18006D640 (RtlUnlockHeap.c)
 */

struct _PEB *RtlUnlockProcessHeapOnProcessTerminate()
{
  struct _PEB *result; // rax
  _DWORD *ProcessHeap; // r8
  __int64 v2; // rdx
  void *UniqueThread; // rcx

  result = NtCurrentPeb();
  ProcessHeap = result->ProcessHeap;
  if ( ProcessHeap[4] == -571548178 )
    return (struct _PEB *)RtlpHpHeapUnlock(result->ProcessHeap, 1LL);
  if ( (ProcessHeap[29] & 0x1000000) == 0 )
  {
    v2 = *((_QWORD *)ProcessHeap + 44);
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_QWORD *)(v2 + 16) = UniqueThread;
    *(_DWORD *)(v2 + 8) = -2;
    *(_DWORD *)(v2 + 12) = 1;
    return (struct _PEB *)RtlUnlockHeap(ProcessHeap);
  }
  return result;
}
