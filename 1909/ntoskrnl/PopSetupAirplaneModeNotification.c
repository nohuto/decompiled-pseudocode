/*
 * XREFs of PopSetupAirplaneModeNotification @ 0x14078CB24
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x140652D70 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupAirplaneModeNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (int)&v1,
           (int)&WNF_SRC_SYSTEM_RADIO_CHANGED,
           1,
           0,
           (__int64)PopWnfAirplaneModeCallback,
           0LL);
}
