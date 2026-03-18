/*
 * XREFs of BgkGetConsoleState @ 0x140953300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x14027DC28 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x14027DC70 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkGetConsoleState(__int64 a1)
{
  unsigned int v3; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(qword_14043C710 + 40))(a1);
  BgkpReleaseConsole();
  return v3;
}
