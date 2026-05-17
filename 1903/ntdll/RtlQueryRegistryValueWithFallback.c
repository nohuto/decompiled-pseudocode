/*
 * XREFs of RtlQueryRegistryValueWithFallback @ 0x1800EB340
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall RtlQueryRegistryValueWithFallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        void *a6,
        _DWORD *a7)
{
  _DWORD *Heap; // rdi
  int ValueKey; // ebx

  if ( !a1 && !a2 )
    return 3221225485LL;
  if ( a4 >= 0xFFFFFFF0 )
    return (unsigned int)-1073741675;
  Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a4 + 16);
  if ( Heap )
  {
    ValueKey = -1073741772;
    if ( !a1 || (ValueKey = ZwQueryValueKey(), ValueKey == -1073741772) )
    {
      if ( !a2 )
      {
LABEL_17:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
        return (unsigned int)ValueKey;
      }
      ValueKey = ZwQueryValueKey();
    }
    if ( (int)(ValueKey + 0x80000000) < 0 || ValueKey == -2147483643 )
    {
      *a7 = Heap[2];
      if ( a5 )
        *a5 = Heap[1];
      if ( ValueKey >= 0 )
        memmove(a6, Heap + 3, (unsigned int)Heap[2]);
    }
    goto LABEL_17;
  }
  return (unsigned int)-1073741801;
}
