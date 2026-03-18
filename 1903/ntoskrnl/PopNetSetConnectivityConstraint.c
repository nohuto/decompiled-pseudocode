/*
 * XREFs of PopNetSetConnectivityConstraint @ 0x14075AEE4
 * Callers:
 *     PopEvaluateAggressiveStandbyActions @ 0x1408A50F8 (PopEvaluateAggressiveStandbyActions.c)
 *     PopPowerAggregatorEvaluateAggressiveStandbyActions @ 0x1408B2948 (PopPowerAggregatorEvaluateAggressiveStandbyActions.c)
 *     PopNetCompliantNicUpdate @ 0x1408B3F34 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x1408B4158 (PopNetNonCompliantDeviceUpdate.c)
 *     PopNetInitialize @ 0x140A061C0 (PopNetInitialize.c)
 * Callees:
 *     PopQueueWorkItem @ 0x140177880 (PopQueueWorkItem.c)
 */

char __fastcall PopNetSetConnectivityConstraint(int a1)
{
  bool v1; // r8
  signed __int32 v2; // eax
  char v3; // cl

  v1 = 0;
  PopNetStandbyStateMask |= 1 << a1;
  if ( ((a1 - 2) & 0xFFFFFFFA) == 0 )
    v1 = a1 != 7;
  v2 = _InterlockedExchangeAdd(&PopNetGracePeriodState, 0);
  v3 = v1;
  if ( v2 == 2 )
    v3 = 1;
  if ( v3 )
    LOBYTE(v2) = PopQueueWorkItem((__int64)&unk_140438B88, DelayedWorkQueue);
  return v2;
}
