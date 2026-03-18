/*
 * XREFs of RIMIsRunningOnDesktop @ 0x1C0031C04
 * Callers:
 *     UseVelocityToEnableIV @ 0x1C0031BD8 (UseVelocityToEnableIV.c)
 *     ShouldEnableInputVirtualization @ 0x1C00A9ED0 (ShouldEnableInputVirtualization.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C013B548 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C013F7E0 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01468E8 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C01482DC (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 * Callees:
 *     RIMGetOneCoreEdition @ 0x1C0031C24 (RIMGetOneCoreEdition.c)
 */

_BOOL8 RIMIsRunningOnDesktop()
{
  return (unsigned int)RIMGetOneCoreEdition() == 3;
}
