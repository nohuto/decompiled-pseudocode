/*
 * XREFs of FreeAllSpbs @ 0x1C01397D0
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C007A04C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRealizePalette @ 0x1C00FCE60 (xxxRealizePalette.c)
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 * Callees:
 *     FreeSpb @ 0x1C0208C24 (FreeSpb.c)
 */

__int64 FreeAllSpbs()
{
  __int64 result; // rax
  __int64 v1; // rcx

  while ( 1 )
  {
    result = gpDispInfo;
    v1 = *(_QWORD *)(gpDispInfo + 32LL);
    if ( !v1 )
      break;
    FreeSpb(v1);
  }
  *(_QWORD *)(gpDispInfo + 32LL) = 0LL;
  return result;
}
