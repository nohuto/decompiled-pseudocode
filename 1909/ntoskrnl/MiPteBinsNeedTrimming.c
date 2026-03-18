/*
 * XREFs of MiPteBinsNeedTrimming @ 0x1400DB504
 * Callers:
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     MiAdjustPteBins @ 0x1400DAC14 (MiAdjustPteBins.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1400DB558 (MiGetNumberOfCachedPtes.c)
 */

_BOOL8 __fastcall MiPteBinsNeedTrimming(__int64 a1)
{
  _QWORD *v1; // r9
  unsigned __int64 NumberOfCachedPtes; // r10

  NumberOfCachedPtes = (unsigned int)MiGetNumberOfCachedPtes(a1);
  return NumberOfCachedPtes >= 0x400 && v1[11] + NumberOfCachedPtes > (*v1 - v1[9]) / 0xAuLL;
}
