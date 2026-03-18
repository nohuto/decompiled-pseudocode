/*
 * XREFs of RIMResetPointerDevicePrimaryContact @ 0x1C00FFF94
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C00E72F4 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0100100 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMResetPointerDevicePrimaryContact(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 920);
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 32) & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v1);
      v1 = *(_QWORD *)(a1 + 920);
    }
    result = *(unsigned int *)(v1 + 32);
    if ( (result & 8) == 0 )
    {
      result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v1);
      v1 = *(_QWORD *)(a1 + 920);
    }
    *(_DWORD *)(v1 + 32) &= ~8u;
    *(_QWORD *)(a1 + 920) = 0LL;
  }
  return result;
}
