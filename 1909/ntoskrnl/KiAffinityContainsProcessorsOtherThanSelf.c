/*
 * XREFs of KiAffinityContainsProcessorsOtherThanSelf @ 0x140125868
 * Callers:
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     KiIpiSendRequestEx @ 0x140098A58 (KiIpiSendRequestEx.c)
 *     KiPreprocessFlushTb @ 0x140099310 (KiPreprocessFlushTb.c)
 *     MiAgeWorkingSetTail @ 0x140099350 (MiAgeWorkingSetTail.c)
 *     KeFlushTb @ 0x1400997B0 (KeFlushTb.c)
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
