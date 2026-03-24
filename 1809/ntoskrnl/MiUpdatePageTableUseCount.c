/*
 * XREFs of MiUpdatePageTableUseCount @ 0x14010FBF8
 * Callers:
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiActOnPte @ 0x14009410C (MiActOnPte.c)
 *     MiExpandSharedZeroCluster @ 0x14010F710 (MiExpandSharedZeroCluster.c)
 *     MiFillPteWithProto @ 0x1402BBEBC (MiFillPteWithProto.c)
 * Callees:
 *     MiGetUsedPtesHandle @ 0x140098700 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x140110064 (MiIncreaseUsedPtesCount.c)
 */

__int64 __fastcall MiUpdatePageTableUseCount(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned int i; // r9d
  __int64 UsedPtesHandle; // rax
  unsigned int v4; // r11d

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
