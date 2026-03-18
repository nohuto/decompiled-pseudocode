/*
 * XREFs of MiFreeWorkingSetSwapContext @ 0x1406B8E04
 * Callers:
 *     MiBeginProcessClean @ 0x140011D68 (MiBeginProcessClean.c)
 *     MmInSwapWorkingSet @ 0x1400E4E64 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1400E5108 (MmOutSwapWorkingSet.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x14085EA90 (MiInSwapSharedWorkingSetWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     MiFreeReservationRun @ 0x1406B8EB4 (MiFreeReservationRun.c)
 */

void __fastcall MiFreeWorkingSetSwapContext(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  void *v5; // rcx

  if ( *(_QWORD *)a2 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
  v4 = *(void **)(a2 + 8);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = *(void **)(a2 + 56);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  MiFreeReservationRun(a1, a2 + 64);
  ExFreePoolWithTag((PVOID)a2, 0);
}
