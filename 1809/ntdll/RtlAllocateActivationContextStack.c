/*
 * XREFs of RtlAllocateActivationContextStack @ 0x1800764F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlAllocateActivationContextStack(__int64 *a1)
{
  __int64 Heap; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax

  if ( *a1 )
    return 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
  v3 = Heap;
  if ( Heap )
  {
    *(_DWORD *)(Heap + 24) = 0;
    *(_QWORD *)Heap = 0LL;
    v4 = (_QWORD *)(Heap + 8);
    v4[1] = v4;
    *v4 = v4;
    *(_DWORD *)(v3 + 28) = 1;
    *(_DWORD *)(v3 + 32) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    *a1 = v3;
    return 0LL;
  }
  return 3221225495LL;
}
