/*
 * XREFs of MiInSwapStoreContextDereference @ 0x1406D21F8
 * Callers:
 *     MiInSwapStore @ 0x1406D206C (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x1406D2160 (MiInSwapStoreWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
