/*
 * XREFs of PopNetClearConnectivityConstraint @ 0x140876C2C
 * Callers:
 *     PopEvaluateAggressiveStandbyActions @ 0x140868BE8 (PopEvaluateAggressiveStandbyActions.c)
 *     PopNetCompliantNicUpdate @ 0x140876C84 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x140876E78 (PopNetNonCompliantDeviceUpdate.c)
 * Callees:
 *     PopQueueWorkItem @ 0x140138CA8 (PopQueueWorkItem.c)
 */

char __fastcall PopNetClearConnectivityConstraint(int a1)
{
  char v1; // dl
  signed __int32 v2; // eax
  char v3; // cl

  v1 = 0;
  PopNetStandbyStateMask &= ~(1 << a1);
  if ( a1 == 3 || a1 == 6 )
    v1 = 1;
  v2 = _InterlockedExchangeAdd(&PopNetGracePeriodState, 0);
  v3 = v1;
  if ( v2 == 2 )
    v3 = 1;
  if ( v3 )
    LOBYTE(v2) = PopQueueWorkItem((__int64)&unk_140410288, DelayedWorkQueue);
  return v2;
}
