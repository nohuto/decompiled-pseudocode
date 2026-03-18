/*
 * XREFs of PTPEnableHotkeyCallback @ 0x1C020F920
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0017CD4 (PostShellHookMessagesEx.c)
 */

void PTPEnableHotkeyCallback()
{
  if ( (unsigned int)EnablePTPDevices(gPTPEnabled == 0) )
    PostShellHookMessagesEx(0x39u, gPTPEnabled == 0, 0LL);
}
