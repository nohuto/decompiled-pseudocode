/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeCancel @ 0x140169B64
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeCancelTimer2 @ 0x140113700 (KeCancelTimer2.c)
 */

LONG PopCheckPowerSourceAfterRtcWakeCancel()
{
  LONG result; // eax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = 0LL;
  result = KeWaitForSingleObject(&PopCheckPowerSourceAfterRtcWakeCompleted, Executive, 0, 0, &Timeout);
  if ( result )
  {
    if ( KeCancelTimer2((__int64)&PopCheckPowerSourceAfterRtcWakeTimer) )
      return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
    else
      return KeWaitForSingleObject(&PopCheckPowerSourceAfterRtcWakeCompleted, Executive, 0, 0, 0LL);
  }
  return result;
}
