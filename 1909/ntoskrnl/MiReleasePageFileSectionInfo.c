/*
 * XREFs of MiReleasePageFileSectionInfo @ 0x1401633D0
 * Callers:
 *     MiReservePageFileSpace @ 0x14002F780 (MiReservePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x140162A00 (MiBuildReservationCluster.c)
 *     MiGetPageFileSectionForReservation @ 0x14016340C (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     MiDecrementModifiedWriteCount @ 0x1400BF958 (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x1400C0420 (MiReleaseControlAreaWaiters.c)
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
