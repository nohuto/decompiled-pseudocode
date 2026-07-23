/*
 * XREFs of KiIsThreadRankBiased @ 0x14029B8A0
 * Callers:
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1402985A0 (KiConvertDynamicHeteroPolicy.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIsThreadRankBiased(__int64 a1, struct _KPRCB *CurrentPrcb)
{
  char v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( *(char *)(a1 + 195) >= 16 )
    return 0;
  v2 = 0;
  if ( !*(_QWORD *)(a1 + 104) )
    return 0;
  if ( !CurrentPrcb )
    CurrentPrcb = KeGetCurrentPrcb();
  v3 = *(_QWORD *)(a1 + 104);
  if ( !v3 )
    return 0;
  v4 = CurrentPrcb->ScbOffset + v3;
  if ( !v4 )
    return 0;
  while ( (*(_BYTE *)(v4 + 112) & 8) == 0 )
  {
    v4 = *(_QWORD *)(v4 + 408);
    if ( !v4 )
      return v2;
  }
  return 1;
}
