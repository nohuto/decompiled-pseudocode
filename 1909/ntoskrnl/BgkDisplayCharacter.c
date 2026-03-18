/*
 * XREFs of BgkDisplayCharacter @ 0x1409932C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x140292518 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x140292560 (BgkpReleaseConsole.c)
 *     BgDisplayFade @ 0x14098E608 (BgDisplayFade.c)
 */

__int64 __fastcall BgkDisplayCharacter(unsigned __int16 a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v10; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  if ( byte_140467E3D || byte_140467E3C )
  {
    byte_140467E3D = 0;
    byte_140467E3C = 0;
    BgDisplayFade();
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(qword_140467F80 + 32))(a1, a2, a3, a4, a5);
  BgkpReleaseConsole();
  return v10;
}
