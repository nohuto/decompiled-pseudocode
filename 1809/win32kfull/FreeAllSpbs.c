/*
 * XREFs of FreeAllSpbs @ 0x1C00EAB30
 * Callers:
 *     xxxRealizePalette @ 0x1C0098390 (xxxRealizePalette.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00EADEC (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     FreeSpb @ 0x1C01F2C24 (FreeSpb.c)
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
