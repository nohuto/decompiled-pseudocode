/*
 * XREFs of RIMIsRunningOnDesktop @ 0x1C012FA7C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0119644 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C011DB0C (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C011F0A4 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 * Callees:
 *     RIMGetOneCoreEdition @ 0x1C012FA04 (RIMGetOneCoreEdition.c)
 */

_BOOL8 RIMIsRunningOnDesktop()
{
  return (unsigned int)RIMGetOneCoreEdition() == 3;
}
