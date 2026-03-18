/*
 * XREFs of MiUpdatePageTableUseCount @ 0x140138218
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x140075E70 (MiExpandSharedZeroCluster.c)
 *     MiZeroFault @ 0x1400C99E0 (MiZeroFault.c)
 *     MiActOnPte @ 0x1400DE740 (MiActOnPte.c)
 *     MiFillPteWithProto @ 0x1402D26F8 (MiFillPteWithProto.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x14001F4A0 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x14002DAB0 (MiGetUsedPtesHandle.c)
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
