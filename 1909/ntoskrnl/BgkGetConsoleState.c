/*
 * XREFs of BgkGetConsoleState @ 0x140993390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x140292518 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x140292560 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkGetConsoleState(__int64 a1)
{
  unsigned int v3; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(qword_140467F80 + 40))(a1);
  BgkpReleaseConsole();
  return v3;
}
