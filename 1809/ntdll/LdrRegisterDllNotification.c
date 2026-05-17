/*
 * XREFs of LdrRegisterDllNotification @ 0x180087BC0
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x18008BC90 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 */

__int64 __fastcall LdrRegisterDllNotification(int a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 Heap; // rax
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 result; // rax

  if ( a1 || !a4 || !a2 )
    return 3221225485LL;
  Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 32LL);
  v8 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_QWORD *)(Heap + 16) = a2;
  *(_QWORD *)(Heap + 24) = a3;
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  v9 = (__int64 *)off_18015F638[0];
  if ( *(_UNKNOWN ***)off_18015F638[0] != &LdrpDllNotificationList )
    __fastfail(3u);
  *(_QWORD *)v8 = &LdrpDllNotificationList;
  *(_QWORD *)(v8 + 8) = v9;
  *v9 = v8;
  off_18015F638[0] = (_UNKNOWN **)v8;
  RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock);
  result = 0LL;
  *a4 = v8;
  return result;
}
