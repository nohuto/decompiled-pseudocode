/*
 * XREFs of MiFreeZeroPageSlistSufficient @ 0x1402D9114
 * Callers:
 *     MiZeroPage @ 0x140029400 (MiZeroPage.c)
 * Callees:
 *     MiNodeFreeZeroPages @ 0x1400DBD74 (MiNodeFreeZeroPages.c)
 */

_BOOL8 __fastcall MiFreeZeroPageSlistSufficient(__int64 a1, unsigned int a2, int a3)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * a3 + 4136) + 16LL * a2) >= *(int *)(a1 + 7324)
      || (unsigned __int64)MiNodeFreeZeroPages(
                             (_QWORD *)(*(_QWORD *)(a1 + 16) + 1984 * ((unsigned __int64)a2 >> byte_14046574D)),
                             (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a2 >> byte_14046574E)),
                             a3 != 0 ? 4096 : 4098) <= 0x40;
}
