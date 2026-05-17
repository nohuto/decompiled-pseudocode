/*
 * XREFs of LdrpAppxGetBinaryNameKeyInformation @ 0x1800CDB60
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800CD7D0 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     NtQueryValueKey @ 0x1800A05C0 (NtQueryValueKey.c)
 */

__int64 __fastcall LdrpAppxGetBinaryNameKeyInformation(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 Heap; // rdi
  int ValueKey; // ebx
  unsigned int v9; // [rsp+88h] [rbp+20h]

  v5 = 0LL;
  Heap = 0LL;
  ValueKey = NtQueryValueKey();
  if ( ValueKey >= 0 )
    ValueKey = -1073739509;
  if ( ValueKey != -1073741789 )
  {
LABEL_13:
    if ( ValueKey >= 0 )
    {
      *a2 = v5;
      *a3 = Heap;
      return (unsigned int)ValueKey;
    }
    goto LABEL_15;
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v9);
  if ( !Heap )
    return (unsigned int)-1073741801;
  ValueKey = NtQueryValueKey();
  if ( ValueKey >= 0 )
  {
    if ( *(_DWORD *)(Heap + 4) != 1 || *(_DWORD *)(Heap + 8) < 4u )
      ValueKey = -1073739509;
    if ( ValueKey >= 0 )
    {
      v5 = Heap + 12;
      if ( *(_WORD *)(Heap + 12 + 2 * ((unsigned __int64)*(unsigned int *)(Heap + 8) >> 1) - 2) )
        ValueKey = -1073739509;
      goto LABEL_13;
    }
  }
LABEL_15:
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)ValueKey;
}
