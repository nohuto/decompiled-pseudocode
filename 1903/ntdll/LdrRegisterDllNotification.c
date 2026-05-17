/*
 * XREFs of LdrRegisterDllNotification @ 0x180083490
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x180088D60 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 */

__int64 __fastcall LdrRegisterDllNotification(int a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 Heap; // rax
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 result; // rax

  if ( a1 || !a4 || !a2 )
    return 3221225485LL;
  Heap = RtlAllocateHeap(qword_180165420, dword_18016542C + 0x40000, 32LL);
  v8 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_QWORD *)(Heap + 16) = a2;
  *(_QWORD *)(Heap + 24) = a3;
  RtlEnterCriticalSection((__int64)&off_18015F3F0);
  v9 = (__int64 *)off_18015F568[0];
  if ( *(_UNKNOWN ***)off_18015F568[0] != &off_18015F560 )
    __fastfail(3u);
  *(_QWORD *)v8 = &off_18015F560;
  *(_QWORD *)(v8 + 8) = v9;
  *v9 = v8;
  off_18015F568[0] = (_UNKNOWN **)v8;
  RtlLeaveCriticalSection((__int64)&off_18015F3F0);
  result = 0LL;
  *a4 = v8;
  return result;
}
