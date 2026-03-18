/*
 * XREFs of PTPEnableHotkeyCallback @ 0x1C019ADC0
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C006E9A8 (PostShellHookMessagesEx.c)
 */

void PTPEnableHotkeyCallback()
{
  if ( (unsigned int)EnablePTPDevices(gPTPEnabled == 0) )
    PostShellHookMessagesEx(0x39u, gPTPEnabled == 0, 0LL);
}
