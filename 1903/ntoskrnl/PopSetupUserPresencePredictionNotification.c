/*
 * XREFs of PopSetupUserPresencePredictionNotification @ 0x14078A738
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x14063F220 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupUserPresencePredictionNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (int)&v1,
           (int)&WNF_PO_USER_AWAY_PREDICTION,
           1,
           0,
           (__int64)PopWnfUserAwayPredictionCallback,
           0LL);
}
