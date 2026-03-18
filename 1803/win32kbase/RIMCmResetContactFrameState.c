/*
 * XREFs of RIMCmResetContactFrameState @ 0x1C0106E60
 * Callers:
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0100100 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimProcessPointerDeviceContact @ 0x1C0102F30 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall RIMCmResetContactFrameState(_DWORD *a1, __int64 a2)
{
  if ( (a1[8] & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  a1[580] &= 0xFFFFFFF8;
  return memset(a1 + 582, 0, 0xD8uLL);
}
