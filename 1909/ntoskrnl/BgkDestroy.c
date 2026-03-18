/*
 * XREFs of BgkDestroy @ 0x140991A80
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140178970 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140A4135C (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x140292538 (BgkpDisableConsole.c)
 *     BgConsoleDestroyInterface @ 0x140990EFC (BgConsoleDestroyInterface.c)
 *     BgDisplayProgressIndicator @ 0x1409912C0 (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x1409916D8 (BgDisplayBackgroundUpdate.c)
 *     BgLibraryDestroy @ 0x14099355C (BgLibraryDestroy.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_140467FA4 )
    return 0LL;
  BgkpDisableConsole();
  byte_140467FA5 = 0;
  byte_140467FA4 = 0;
  BgDisplayProgressIndicator(0);
  byte_140467E3D = 0;
  BgDisplayBackgroundUpdate(0);
  byte_140467E3C = 0;
  byte_140467F90 = 0;
  if ( qword_140467F80 )
  {
    BgConsoleDestroyInterface((__int64 (__fastcall **)())qword_140467F80);
    qword_140467F80 = 0LL;
  }
  return BgLibraryDestroy();
}
