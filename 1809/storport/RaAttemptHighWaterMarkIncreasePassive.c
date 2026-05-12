/*
 * XREFs of RaAttemptHighWaterMarkIncreasePassive @ 0x1C0028400
 * Callers:
 *     <none>
 * Callees:
 *     RaAttemptHighWaterMarkIncrease @ 0x1C004BD20 (RaAttemptHighWaterMarkIncrease.c)
 */

void __fastcall RaAttemptHighWaterMarkIncreasePassive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 1470, 0);
  RaAttemptHighWaterMarkIncrease(Context + 208);
}
