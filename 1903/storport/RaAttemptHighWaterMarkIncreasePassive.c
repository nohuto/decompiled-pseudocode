/*
 * XREFs of RaAttemptHighWaterMarkIncreasePassive @ 0x1C0023330
 * Callers:
 *     <none>
 * Callees:
 *     RaAttemptHighWaterMarkIncrease @ 0x1C0049590 (RaAttemptHighWaterMarkIncrease.c)
 */

void __fastcall RaAttemptHighWaterMarkIncreasePassive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 1430, 0);
  RaAttemptHighWaterMarkIncrease(Context + 192);
}
