/*
 * XREFs of BgkDestroy @ 0x140952A04
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14016EBE0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x1409FC8E0 (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x14027DF38 (BgkpDisableConsole.c)
 *     BgConsoleDestroyInterface @ 0x140951E9C (BgConsoleDestroyInterface.c)
 *     BgDisplayProgressIndicator @ 0x140952260 (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x140952670 (BgDisplayBackgroundUpdate.c)
 *     BgLibraryDestroy @ 0x14095449C (BgLibraryDestroy.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_14043D7F4 )
    return 0LL;
  BgkpDisableConsole();
  byte_14043D7F5 = 0;
  byte_14043D7F4 = 0;
  BgDisplayProgressIndicator(0);
  byte_14043D6B1 = 0;
  BgDisplayBackgroundUpdate(0);
  byte_14043D6B0 = 0;
  byte_14043D7E0 = 0;
  if ( qword_14043D7D0 )
  {
    BgConsoleDestroyInterface((__int64 (__fastcall **)())qword_14043D7D0);
    qword_14043D7D0 = 0LL;
  }
  return BgLibraryDestroy();
}
