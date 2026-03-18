/*
 * XREFs of BgkDisplayCharacter @ 0x1409932C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1402927B8 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x140292800 (BgkpReleaseConsole.c)
 *     BgDisplayFade @ 0x14098E608 (BgDisplayFade.c)
 */

__int64 __fastcall BgkDisplayCharacter(unsigned __int16 a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v10; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  if ( byte_140468109 || byte_140468108 )
  {
    byte_140468109 = 0;
    byte_140468108 = 0;
    BgDisplayFade();
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(qword_140468240 + 32))(a1, a2, a3, a4, a5);
  BgkpReleaseConsole();
  return v10;
}
