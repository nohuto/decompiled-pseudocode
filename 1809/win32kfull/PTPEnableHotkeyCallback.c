/*
 * XREFs of PTPEnableHotkeyCallback @ 0x1C01BBE20
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00B3938 (PostShellHookMessagesEx.c)
 */

void PTPEnableHotkeyCallback()
{
  if ( (unsigned int)EnablePTPDevices(gPTPEnabled == 0) )
    PostShellHookMessagesEx(0x39u, gPTPEnabled == 0, 0LL);
}
