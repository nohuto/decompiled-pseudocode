/*
 * XREFs of MiInSwapStoreContextDereference @ 0x1406A4DD8
 * Callers:
 *     MiInSwapStore @ 0x1406A4C38 (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x1406A4D30 (MiInSwapStoreWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
