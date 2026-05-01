/*
 * XREFs of _HampConnectionObjectCreate@12 @ 0x10007DC8
 * Callers:
 *     _HamCreateExtendedExecution@20 @ 0x10007D20 (_HamCreateExtendedExecution@20.c)
 *     _HamCreateActivityForProcess@20 @ 0x1000B880 (_HamCreateActivityForProcess@20.c)
 * Callees:
 *     <none>
 */

int __fastcall HampConnectionObjectCreate(int a1, int a2, _DWORD *a3)
{
  int v3; // esi
  _DWORD *Heap; // eax

  v3 = 0;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28u);
  if ( !Heap )
    return -1073741801;
  Heap[9] = 0;
  memset(Heap, 0, 0x18u);
  Heap[5] = a2 + 12;
  Heap[6] = -1;
  Heap[7] = -1;
  Heap[8] = a1;
  *a3 = Heap;
  return v3;
}
