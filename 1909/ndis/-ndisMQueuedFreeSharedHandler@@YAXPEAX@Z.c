/*
 * XREFs of ?ndisMQueuedFreeSharedHandler@@YAXPEAX@Z @ 0x1C009CFF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisFreeSharedMemoryInternal @ 0x1C009F8B4 (ndisFreeSharedMemoryInternal.c)
 */

void __fastcall ndisMQueuedFreeSharedHandler(_QWORD *a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1[4];
  ndisFreeSharedMemoryInternal(v1, a1[8]);
  ndisDereferenceMiniport(v1, 0x42u);
}
