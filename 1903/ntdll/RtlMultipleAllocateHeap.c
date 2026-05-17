/*
 * XREFs of RtlMultipleAllocateHeap @ 0x1800EF1C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlMultipleAllocateHeap(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  unsigned int v5; // ebx
  __int64 Heap; // rax

  v5 = 0;
  if ( !a4 )
    return a4;
  while ( 1 )
  {
    Heap = RtlAllocateHeap(a1, a2, a3);
    *a5 = Heap;
    if ( !Heap )
      break;
    ++v5;
    ++a5;
    if ( v5 >= a4 )
      return a4;
  }
  return v5;
}
