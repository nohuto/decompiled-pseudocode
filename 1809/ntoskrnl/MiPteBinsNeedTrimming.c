/*
 * XREFs of MiPteBinsNeedTrimming @ 0x1400F0480
 * Callers:
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiAdjustPteBins @ 0x1400EFB88 (MiAdjustPteBins.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1400F04D4 (MiGetNumberOfCachedPtes.c)
 */

_BOOL8 __fastcall MiPteBinsNeedTrimming(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r9
  unsigned __int64 NumberOfCachedPtes; // r10

  NumberOfCachedPtes = (unsigned int)MiGetNumberOfCachedPtes(a1, a2, a3, a1);
  return NumberOfCachedPtes >= 0x400 && v3[11] + NumberOfCachedPtes > (*v3 - v3[9]) / 0xAuLL;
}
