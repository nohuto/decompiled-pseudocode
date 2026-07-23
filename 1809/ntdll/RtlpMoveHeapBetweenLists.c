/*
 * XREFs of RtlpMoveHeapBetweenLists @ 0x180060868
 * Callers:
 *     RtlDestroyHeap @ 0x18005F2F0 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18005F7E0 (RtlCreateHeap.c)
 *     RtlProtectHeap @ 0x1800606A0 (RtlProtectHeap.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlpAddHeapToUnprotectedList @ 0x1800612C0 (RtlpAddHeapToUnprotectedList.c)
 *     RtlpRemoveHeapFromUnprotectedList @ 0x1800613D0 (RtlpRemoveHeapFromUnprotectedList.c)
 *     RtlpAddHeapToProtectedList @ 0x180061534 (RtlpAddHeapToProtectedList.c)
 *     RtlpRemoveHeapFromProtectedList @ 0x1800615A8 (RtlpRemoveHeapFromProtectedList.c)
 */

NTSTATUS __fastcall RtlpMoveHeapBetweenLists(__int64 a1, int a2, int a3, int a4)
{
  int v8; // edi
  int v9; // ebx
  NTSTATUS result; // eax

  if ( !a4 )
    result = RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  if ( a2 )
  {
    v8 = a2 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
        result = RtlpRemoveHeapFromProtectedList(a1);
    }
    else
    {
      result = RtlpRemoveHeapFromUnprotectedList(a1);
    }
  }
  if ( a3 )
  {
    v9 = a3 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
        result = RtlpAddHeapToProtectedList(a1);
    }
    else
    {
      result = RtlpAddHeapToUnprotectedList(a1);
    }
  }
  if ( !a4 )
    return RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  return result;
}
