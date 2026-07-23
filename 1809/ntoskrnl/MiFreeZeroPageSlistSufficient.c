/*
 * XREFs of MiFreeZeroPageSlistSufficient @ 0x1402BFCA4
 * Callers:
 *     MiZeroPage @ 0x140036A00 (MiZeroPage.c)
 * Callees:
 *     MiNodeFreeZeroPages @ 0x1400EE374 (MiNodeFreeZeroPages.c)
 */

_BOOL8 __fastcall MiFreeZeroPageSlistSufficient(__int64 a1, unsigned int a2, int a3)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * a3 + 4136) + 16LL * a2) >= *(int *)(a1 + 6556)
      || (unsigned __int64)MiNodeFreeZeroPages(
                             *(_QWORD *)(a1 + 16) + 1984 * ((unsigned __int64)a2 >> byte_14043B109),
                             (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a2 >> byte_14043B10A)),
                             a3 != 0 ? 4096 : 4098) <= 0x40;
}
