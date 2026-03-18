/*
 * XREFs of RIMResetPointerDevicePrimaryContact @ 0x1C015512C
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C013BB8C (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01552A0 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMResetPointerDevicePrimaryContact(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 960);
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 32) & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v3, a3);
      v3 = *(_QWORD *)(a1 + 960);
    }
    result = *(unsigned int *)(v3 + 32);
    if ( (result & 8) == 0 )
    {
      result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v3, a3);
      v3 = *(_QWORD *)(a1 + 960);
    }
    *(_DWORD *)(v3 + 32) &= ~8u;
    *(_QWORD *)(a1 + 960) = 0LL;
  }
  return result;
}
