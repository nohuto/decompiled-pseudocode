/*
 * XREFs of _RmpClientConnectToResourceManager@8 @ 0x10011719
 * Callers:
 *     _RmConnectToResourceManager@4 @ 0x100112F0 (_RmConnectToResourceManager@4.c)
 * Callees:
 *     _RmpClientConnectionAllocateState@8 @ 0x1001177D (_RmpClientConnectionAllocateState@8.c)
 *     _RmpClientConnectionCleanup@4 @ 0x10011807 (_RmpClientConnectionCleanup@4.c)
 *     _RmpClientConnectionInitialize@4 @ 0x1001184F (_RmpClientConnectionInitialize@4.c)
 */

int __fastcall RmpClientConnectToResourceManager(int a1, _DWORD *a2)
{
  PVOID Heap; // eax
  void *v5; // esi
  int State; // edi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x38u);
  v5 = Heap;
  if ( !Heap )
    return -1073741801;
  RmpClientConnectionInitialize(Heap);
  State = RmpClientConnectionAllocateState(a1, v5);
  if ( State >= 0 )
  {
    *a2 = v5;
    v5 = 0;
  }
  if ( v5 )
  {
    RmpClientConnectionCleanup(v5);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  return State;
}
