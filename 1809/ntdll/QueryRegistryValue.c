/*
 * XREFs of QueryRegistryValue @ 0x180032F5C
 * Callers:
 *     IsLanguageOverlayBlockedByPolicy @ 0x180032D78 (IsLanguageOverlayBlockedByPolicy.c)
 *     GetOverlayRootFolder @ 0x180042138 (GetOverlayRootFolder.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     NtQueryValueKey @ 0x1800A05C0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall QueryRegistryValue(__int64 a1, __int64 a2, _DWORD *a3, void *a4, _DWORD *a5)
{
  unsigned int v9; // ebx
  _DWORD *Heap; // rdi
  int ValueKey; // ebx
  size_t v13; // rax
  _DWORD v14[10]; // [rsp+30h] [rbp-28h] BYREF

  v14[0] = 0;
  if ( !a5 )
    return 3221225485LL;
  v9 = *a5 + 12;
  Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v9);
  if ( Heap )
  {
    ValueKey = NtQueryValueKey(a1, a2, 2LL, Heap, v9, v14);
    if ( ValueKey >= 0 )
    {
      v13 = (unsigned int)Heap[2];
      if ( !(_DWORD)v13 )
      {
        ValueKey = -1073741811;
        goto LABEL_6;
      }
      if ( (unsigned int)v13 > *a5 )
      {
LABEL_7:
        ValueKey = -1073741789;
        *a5 = Heap[2];
LABEL_6:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
        return (unsigned int)ValueKey;
      }
      *a5 = v13;
      if ( a4 )
        memmove(a4, Heap + 3, v13);
      if ( a3 )
        *a3 = Heap[1];
    }
    if ( ValueKey != -2147483643 && ValueKey != -1073741789 )
      goto LABEL_6;
    goto LABEL_7;
  }
  return 3221225626LL;
}
