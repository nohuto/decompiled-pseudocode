/*
 * XREFs of BgkSetCursor @ 0x140993470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1402927B8 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x140292800 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkSetCursor(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v7; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(qword_140468240 + 56))(a1, a2, a3);
  BgkpReleaseConsole();
  return v7;
}
