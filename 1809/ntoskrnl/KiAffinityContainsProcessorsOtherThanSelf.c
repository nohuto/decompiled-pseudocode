/*
 * XREFs of KiAffinityContainsProcessorsOtherThanSelf @ 0x1400EDBA4
 * Callers:
 *     MiFlushTbList @ 0x1400740C0 (MiFlushTbList.c)
 *     KeFlushTb @ 0x1400755B0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140075BB0 (KeFlushMultipleRangeTb.c)
 *     KiIpiSendRequestEx @ 0x1400ED140 (KiIpiSendRequestEx.c)
 *     KiPreprocessFlushTb @ 0x1400EDB10 (KiPreprocessFlushTb.c)
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
