/*
 * XREFs of RmpClientConnectToResourceManager @ 0x180008650
 * Callers:
 *     RmConnectToResourceManager @ 0x180008600 (RmConnectToResourceManager.c)
 * Callees:
 *     RmpClientConnectionAllocateState @ 0x1800086CC (RmpClientConnectionAllocateState.c)
 *     RmpClientConnectionInitialize @ 0x18000876C (RmpClientConnectionInitialize.c)
 *     RmpClientConnectionCleanup @ 0x18000E428 (RmpClientConnectionCleanup.c)
 */

__int64 __fastcall RmpClientConnectToResourceManager(__int64 a1, _QWORD *a2)
{
  PVOID Heap; // rax
  void *v5; // rbx
  int State; // edi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x68uLL);
  v5 = Heap;
  if ( Heap )
  {
    RmpClientConnectionInitialize(Heap);
    State = RmpClientConnectionAllocateState(a1, v5);
    if ( State >= 0 )
    {
      *a2 = v5;
      v5 = 0LL;
    }
    if ( v5 )
    {
      RmpClientConnectionCleanup(v5);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}
