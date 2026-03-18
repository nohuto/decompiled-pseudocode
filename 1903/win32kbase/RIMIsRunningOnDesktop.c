/*
 * XREFs of RIMIsRunningOnDesktop @ 0x1C0032954
 * Callers:
 *     UseVelocityToEnableIV @ 0x1C0032928 (UseVelocityToEnableIV.c)
 *     ShouldEnableInputVirtualization @ 0x1C0060D40 (ShouldEnableInputVirtualization.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C013DBB8 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0141E50 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0148F58 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C014A94C (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 * Callees:
 *     RIMGetOneCoreEdition @ 0x1C0032974 (RIMGetOneCoreEdition.c)
 */

_BOOL8 RIMIsRunningOnDesktop()
{
  return (unsigned int)RIMGetOneCoreEdition() == 3;
}
