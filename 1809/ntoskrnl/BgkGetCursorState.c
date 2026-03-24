/*
 * XREFs of BgkGetCursorState @ 0x140953350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x14027DD28 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x14027DD70 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkGetCursorState(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v7; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(qword_14043C710 + 48))(a1, a2, a3);
  BgkpReleaseConsole();
  return v7;
}
