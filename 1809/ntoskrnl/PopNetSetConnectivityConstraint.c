/*
 * XREFs of PopNetSetConnectivityConstraint @ 0x1407298A4
 * Callers:
 *     PopEvaluateAggressiveStandbyActions @ 0x140868BC8 (PopEvaluateAggressiveStandbyActions.c)
 *     PopNetCompliantNicUpdate @ 0x140876C64 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x140876E58 (PopNetNonCompliantDeviceUpdate.c)
 *     PopNetInitialize @ 0x1409B2AB4 (PopNetInitialize.c)
 * Callees:
 *     PopQueueWorkItem @ 0x140138CC8 (PopQueueWorkItem.c)
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
    LOBYTE(v2) = PopQueueWorkItem((__int64)&unk_140410268, DelayedWorkQueue);
  return v2;
}
