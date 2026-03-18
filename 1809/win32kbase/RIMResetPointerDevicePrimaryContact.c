/*
 * XREFs of RIMResetPointerDevicePrimaryContact @ 0x1C0128414
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0110BB0 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0128580 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMResetPointerDevicePrimaryContact(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 952);
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 32) & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v3, a3);
      v3 = *(_QWORD *)(a1 + 952);
    }
    result = *(unsigned int *)(v3 + 32);
    if ( (result & 8) == 0 )
    {
      result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v3, a3);
      v3 = *(_QWORD *)(a1 + 952);
    }
    *(_DWORD *)(v3 + 32) &= ~8u;
    *(_QWORD *)(a1 + 952) = 0LL;
  }
  return result;
}
