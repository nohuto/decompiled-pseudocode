/*
 * XREFs of BgkDestroy @ 0x140991A80
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140178280 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140A4158C (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x1402927D8 (BgkpDisableConsole.c)
 *     BgConsoleDestroyInterface @ 0x140990EFC (BgConsoleDestroyInterface.c)
 *     BgDisplayProgressIndicator @ 0x1409912C0 (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x1409916D8 (BgDisplayBackgroundUpdate.c)
 *     BgLibraryDestroy @ 0x14099355C (BgLibraryDestroy.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_140468264 )
    return 0LL;
  BgkpDisableConsole();
  byte_140468265 = 0;
  byte_140468264 = 0;
  BgDisplayProgressIndicator(0);
  byte_140468109 = 0;
  BgDisplayBackgroundUpdate(0);
  byte_140468108 = 0;
  byte_140468250 = 0;
  if ( qword_140468240 )
  {
    BgConsoleDestroyInterface((__int64 (__fastcall **)())qword_140468240);
    qword_140468240 = 0LL;
  }
  return BgLibraryDestroy();
}
