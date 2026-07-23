/*
 * XREFs of BgkSetCursor @ 0x1409543B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x14027DF18 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x14027DF60 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkSetCursor(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v7; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(qword_14043D7D0 + 56))(a1, a2, a3);
  BgkpReleaseConsole();
  return v7;
}
