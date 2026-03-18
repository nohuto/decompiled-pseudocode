/*
 * XREFs of SmKmStoreDeleteWhenEmptyWorker @ 0x1401374A0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400E1208 (SmKmStoreRefFromStoreIndex.c)
 *     SmKmStoreDelete @ 0x1406C94B0 (SmKmStoreDelete.c)
 */

__int64 __fastcall SmKmStoreDeleteWhenEmptyWorker(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  v2 = *(_DWORD *)(a1 + 64);
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  v3 = SmKmStoreRefFromStoreIndex(v1, v2);
  return SmKmStoreDelete(v4, *(unsigned int *)(*(_QWORD *)v3 + 6016LL), 0LL);
}
