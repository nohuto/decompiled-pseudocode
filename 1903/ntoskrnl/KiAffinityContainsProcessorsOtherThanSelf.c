/*
 * XREFs of KiAffinityContainsProcessorsOtherThanSelf @ 0x1401251F8
 * Callers:
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     KiIpiSendRequestEx @ 0x1400B8BE8 (KiIpiSendRequestEx.c)
 *     KiPreprocessFlushTb @ 0x1400B94A0 (KiPreprocessFlushTb.c)
 *     MiAgeWorkingSetTail @ 0x1400B94E0 (MiAgeWorkingSetTail.c)
 *     KeFlushTb @ 0x1400B9940 (KeFlushTb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAffinityContainsProcessorsOtherThanSelf(__int64 a1, _WORD *a2)
{
  unsigned __int16 v3; // r8
  __int64 v4; // rcx

  v3 = 0;
  if ( !*a2 )
    return 0LL;
  while ( 1 )
  {
    v4 = *(_QWORD *)&a2[4 * v3 + 4];
    if ( v4 )
    {
      if ( v3 != *(unsigned __int8 *)(a1 + 208) || v4 != *(_QWORD *)(a1 + 200) )
        break;
    }
    if ( ++v3 >= *a2 )
      return 0LL;
  }
  return 1LL;
}
