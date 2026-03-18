/*
 * XREFs of PopSetupSprActiveSessionChangeNotification @ 0x14078CB60
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x140652D70 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupSprActiveSessionChangeNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (int)&v1,
           (int)&WNF_SRUM_SCREENONSTUDY_SESSION,
           1,
           0,
           (__int64)PopWnfSprActiveSessionChangeCallback,
           0LL);
}
