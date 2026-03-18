/*
 * XREFs of SpbCheck @ 0x1C020906C
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E71C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C0134CFC (zzzLockWindowUpdate2.c)
 *     CreateSpb @ 0x1C015E86C (CreateSpb.c)
 * Callees:
 *     SpbCheckDce @ 0x1C00CFC80 (SpbCheckDce.c)
 */

__int64 SpbCheck()
{
  __int64 result; // rax
  __int64 i; // rbx

  result = gpDispInfo;
  if ( *(_QWORD *)(gpDispInfo + 32LL) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    for ( i = *(_QWORD *)(gpDispInfo + 24LL); i; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 64) & 0x400800) == 0 )
        SpbCheckDce(i);
    }
    return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
  return result;
}
