/*
 * XREFs of FreeAllSpbs @ 0x1C00BCDA0
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00B9ECC (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 *     xxxRealizePalette @ 0x1C00FD560 (xxxRealizePalette.c)
 * Callees:
 *     FreeSpb @ 0x1C01CE640 (FreeSpb.c)
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
