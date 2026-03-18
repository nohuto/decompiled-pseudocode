/*
 * XREFs of PopPowerRequestOverrideInitialize @ 0x140789E90
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1406A1068 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400EC3F4 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406A0544 (PopAcquirePowerRequestPushLock.c)
 */

void PopPowerRequestOverrideInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 *i; // rbx

  PopAcquirePowerRequestPushLock(0);
  for ( i = (__int64 *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (__int64 *)*i )
    PopUmpoSendPowerRequestOverrideQuery((__int64)i, v0, v1, v2);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
