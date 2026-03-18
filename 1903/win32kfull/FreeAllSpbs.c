/*
 * XREFs of FreeAllSpbs @ 0x1C00833C0
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00DA35C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRealizePalette @ 0x1C0121E60 (xxxRealizePalette.c)
 * Callees:
 *     FreeSpb @ 0x1C0208ED4 (FreeSpb.c)
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
