/*
 * XREFs of MiReleasePageFileSectionInfo @ 0x140157C7C
 * Callers:
 *     MiReservePageFileSpace @ 0x140081320 (MiReservePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x14015009C (MiBuildReservationCluster.c)
 *     MiGetPageFileSectionForReservation @ 0x1401576BC (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14001E3A8 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x140022DA0 (MiDecrementModifiedWriteCount.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 */

__int64 *__fastcall MiReleasePageFileSectionInfo(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    MiUnlockProtoPoolPage(v2, *(_BYTE *)(a1 + 32));
  result = MiDecrementModifiedWriteCount(*(_QWORD *)a1, 0);
  if ( result )
    return (__int64 *)MiReleaseControlAreaWaiters(result);
  return result;
}
