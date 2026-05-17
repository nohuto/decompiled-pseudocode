/*
 * XREFs of RtlQueryRegistryValueWithFallback @ 0x1800EE2B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     NtQueryValueKey @ 0x1800A05C0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
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
  unsigned int v10; // esi
  unsigned int ValueKey; // ebx
  _DWORD *Heap; // rdi

  if ( !a1 && !a2 )
    return 3221225485LL;
  v10 = -1;
  if ( a4 < 0xFFFFFFF0 )
    v10 = a4 + 16;
  ValueKey = a4 >= 0xFFFFFFF0 ? 0xC0000095 : 0;
  if ( a4 + 16 >= 0x10 )
  {
    Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
    if ( !Heap )
      return (unsigned int)-1073741801;
    ValueKey = -1073741772;
    if ( !a1 || (ValueKey = NtQueryValueKey(), ValueKey == -1073741772) )
    {
      if ( !a2 )
      {
LABEL_19:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
        return ValueKey;
      }
      ValueKey = NtQueryValueKey();
    }
    if ( (int)(ValueKey + 0x80000000) < 0 || ValueKey == -2147483643 )
    {
      *a7 = Heap[2];
      if ( a5 )
        *a5 = Heap[1];
      if ( (ValueKey & 0x80000000) == 0 )
        memmove(a6, Heap + 3, (unsigned int)Heap[2]);
    }
    goto LABEL_19;
  }
  return ValueKey;
}
