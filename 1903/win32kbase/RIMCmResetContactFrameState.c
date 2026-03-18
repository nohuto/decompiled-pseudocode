/*
 * XREFs of RIMCmResetContactFrameState @ 0x1C015BD14
 * Callers:
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01552A0 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimProcessPointerDeviceContact @ 0x1C0158C0C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     memset @ 0x1C00C1440 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall RIMCmResetContactFrameState(_DWORD *a1, __int64 a2, __int64 a3)
{
  if ( (a1[8] & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  a1[585] &= 0xFFFFFFF8;
  return memset(a1 + 586, 0, 0xF0uLL);
}
