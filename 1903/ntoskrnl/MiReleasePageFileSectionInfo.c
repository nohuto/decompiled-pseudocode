/*
 * XREFs of MiReleasePageFileSectionInfo @ 0x140163980
 * Callers:
 *     MiReservePageFileSpace @ 0x14002F390 (MiReservePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x140162FB0 (MiBuildReservationCluster.c)
 *     MiGetPageFileSectionForReservation @ 0x1401639BC (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MiDecrementModifiedWriteCount @ 0x1400DFAD8 (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E05A0 (MiReleaseControlAreaWaiters.c)
 */

__int64 *__fastcall MiReleasePageFileSectionInfo(__int64 a1)
{
  ULONG_PTR v2; // rcx
  __int64 *result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    MiUnlockProtoPoolPage(v2, *(_BYTE *)(a1 + 32));
  result = MiDecrementModifiedWriteCount(*(_QWORD *)a1, 0);
  if ( result )
    return (__int64 *)MiReleaseControlAreaWaiters(result);
  return result;
}
