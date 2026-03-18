/*
 * XREFs of MiInSwapStoreContextDereference @ 0x1406D0F78
 * Callers:
 *     MiInSwapStore @ 0x1406D0DEC (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x1406D0EE0 (MiInSwapStoreWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
