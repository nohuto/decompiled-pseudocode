/*
 * XREFs of SpbCheck @ 0x1C020931C
 * Callers:
 *     zzzLockWindowUpdate2 @ 0x1C00139B8 (zzzLockWindowUpdate2.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00CD04C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     CreateSpb @ 0x1C015D8BC (CreateSpb.c)
 * Callees:
 *     SpbCheckDce @ 0x1C00EEE80 (SpbCheckDce.c)
 */

__int64 __fastcall SpbCheck(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 i; // rbx

  result = gpDispInfo;
  if ( *(_QWORD *)(gpDispInfo + 32LL) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), a2, a3, a4);
    for ( i = *(_QWORD *)(gpDispInfo + 24LL); i; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 64) & 0x400800) == 0 )
        SpbCheckDce(i);
    }
    return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
  return result;
}
