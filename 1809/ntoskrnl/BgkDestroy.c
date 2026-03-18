/*
 * XREFs of BgkDestroy @ 0x140951A04
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14016EAC0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x1409FB8D0 (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x14027DC48 (BgkpDisableConsole.c)
 *     BgConsoleDestroyInterface @ 0x140950E9C (BgConsoleDestroyInterface.c)
 *     BgDisplayProgressIndicator @ 0x140951260 (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x140951670 (BgDisplayBackgroundUpdate.c)
 *     BgLibraryDestroy @ 0x14095349C (BgLibraryDestroy.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_14043C734 )
    return 0LL;
  BgkpDisableConsole();
  byte_14043C735 = 0;
  byte_14043C734 = 0;
  BgDisplayProgressIndicator(0);
  byte_14043C5F1 = 0;
  BgDisplayBackgroundUpdate(0);
  byte_14043C5F0 = 0;
  byte_14043C720 = 0;
  if ( qword_14043C710 )
  {
    BgConsoleDestroyInterface((__int64 (__fastcall **)())qword_14043C710);
    qword_14043C710 = 0LL;
  }
  return BgLibraryDestroy();
}
