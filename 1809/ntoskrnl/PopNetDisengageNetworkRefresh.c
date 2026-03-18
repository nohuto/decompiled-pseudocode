/*
 * XREFs of PopNetDisengageNetworkRefresh @ 0x140876CD0
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x140876ED0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140877010 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401BBA50 (ZwUpdateWnfStateData.c)
 *     PopNetSetResiliencyPhaseBias @ 0x140876F58 (PopNetSetResiliencyPhaseBias.c)
 */

__int64 PopNetDisengageNetworkRefresh()
{
  __int64 result; // rax
  char v1; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  ZwUpdateWnfStateData((__int64)&WNF_PO_OPPORTUNISTIC_CS, (__int64)&v1, 1LL);
  result = PopNetSetResiliencyPhaseBias(0LL);
  PopNetRefreshIntervalActive = 0;
  return result;
}
