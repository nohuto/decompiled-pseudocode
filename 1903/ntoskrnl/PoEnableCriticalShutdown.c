/*
 * XREFs of PoEnableCriticalShutdown @ 0x140769D00
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x140769A5C (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopExecutePowerAction @ 0x140725658 (PopExecutePowerAction.c)
 *     PopQueueBatteryStatusTimeout @ 0x140747E88 (PopQueueBatteryStatusTimeout.c)
 */

__int64 PoEnableCriticalShutdown()
{
  __int64 v1; // [rsp+30h] [rbp-38h] BYREF
  int v2; // [rsp+38h] [rbp-30h]
  _DWORD v3[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v4; // [rsp+48h] [rbp-20h]

  PopAcquirePolicyLock();
  PopThermalCriticalShutdownEnabled = 1;
  if ( PopThermalCriticalShutdownInitiated )
  {
    v2 = 0;
    v1 = 0xC000000400000006uLL;
    v4 = 0LL;
    v3[0] = 1;
    v3[1] = 128;
    PopCriticalShutdownInProgress = 1;
    PopExecutePowerAction((__int64)v3, 0, &v1, 5, 1u);
  }
  PopReleasePolicyLock();
  return PopQueueBatteryStatusTimeout();
}
