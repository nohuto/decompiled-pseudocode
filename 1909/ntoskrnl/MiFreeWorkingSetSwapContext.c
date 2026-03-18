/*
 * XREFs of MiFreeWorkingSetSwapContext @ 0x1406ED9BC
 * Callers:
 *     MiBeginProcessClean @ 0x14008CD24 (MiBeginProcessClean.c)
 *     MmInSwapWorkingSet @ 0x1400D8F10 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1400D91C0 (MmOutSwapWorkingSet.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x14089B150 (MiInSwapSharedWorkingSetWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiFreeReservationRun @ 0x140633CE8 (MiFreeReservationRun.c)
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
