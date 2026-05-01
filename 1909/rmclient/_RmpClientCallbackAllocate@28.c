/*
 * XREFs of _RmpClientCallbackAllocate@28 @ 0x10011C12
 * Callers:
 *     _RmpClientAcquireResourceSet@36 @ 0x100114D8 (_RmpClientAcquireResourceSet@36.c)
 *     _RmpClientRegisterActivityHostCallbacks@24 @ 0x1001191D (_RmpClientRegisterActivityHostCallbacks@24.c)
 * Callees:
 *     <none>
 */

int __fastcall RmpClientCallbackAllocate(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7)
{
  int v7; // ebx
  _DWORD *Heap; // eax

  v7 = 0;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x38u);
  if ( !Heap )
    return -1073741801;
  Heap[9] = 0;
  memset(Heap, 0, 0x18u);
  Heap[5] = a2;
  Heap[6] = -1;
  Heap[7] = -1;
  Heap[10] = a5;
  Heap[8] = a1;
  Heap[11] = a6;
  Heap[12] = a3;
  Heap[13] = a4;
  *a7 = Heap;
  return v7;
}
