/*
 * XREFs of BgkDisplayCharacter @ 0x140953230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x14027DC28 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x14027DC70 (BgkpReleaseConsole.c)
 *     BgDisplayFade @ 0x14094E608 (BgDisplayFade.c)
 */

__int64 __fastcall BgkDisplayCharacter(unsigned __int16 a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v10; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  if ( byte_14043C5F1 || byte_14043C5F0 )
  {
    byte_14043C5F1 = 0;
    byte_14043C5F0 = 0;
    BgDisplayFade();
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(qword_14043C710 + 32))(a1, a2, a3, a4, a5);
  BgkpReleaseConsole();
  return v10;
}
