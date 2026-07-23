/*
 * XREFs of PopNetSetConnectivityConstraint @ 0x14072AA94
 * Callers:
 *     PopEvaluateAggressiveStandbyActions @ 0x140869E28 (PopEvaluateAggressiveStandbyActions.c)
 *     PopNetCompliantNicUpdate @ 0x140877EC4 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x1408780B8 (PopNetNonCompliantDeviceUpdate.c)
 *     PopNetInitialize @ 0x1409B3AB4 (PopNetInitialize.c)
 * Callees:
 *     PopQueueWorkItem @ 0x140138DC8 (PopQueueWorkItem.c)
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
    LOBYTE(v2) = PopQueueWorkItem((__int64)&unk_140411328, DelayedWorkQueue);
  return v2;
}
