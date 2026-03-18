/*
 * XREFs of MiUpdatePageTableUseCount @ 0x140138868
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x1400760E0 (MiExpandSharedZeroCluster.c)
 *     MiZeroFault @ 0x1400A9860 (MiZeroFault.c)
 *     MiActOnPte @ 0x1400BE5C0 (MiActOnPte.c)
 *     MiFillPteWithProto @ 0x1402D2458 (MiFillPteWithProto.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x14001F890 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x14002DEA0 (MiGetUsedPtesHandle.c)
 */

__int64 __fastcall MiUpdatePageTableUseCount(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned int i; // r9d
  unsigned __int64 UsedPtesHandle; // rax
  unsigned int v4; // r10d

  v1 = a1;
  for ( i = 0; i < 3; ++i )
  {
    if ( v1 <= 0x7FFFFFFEFFFFLL )
    {
      UsedPtesHandle = MiGetUsedPtesHandle(a1);
      MiIncreaseUsedPtesCount(UsedPtesHandle, v4);
      return 1LL;
    }
    v1 = (__int64)(v1 << 25) >> 16;
  }
  return 0LL;
}
