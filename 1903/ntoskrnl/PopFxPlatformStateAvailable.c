/*
 * XREFs of PopFxPlatformStateAvailable @ 0x1402F41DC
 * Callers:
 *     PopPepUpdateIdleStateRefCount @ 0x14017B8B8 (PopPepUpdateIdleStateRefCount.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x1400ED808 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1400ED890 (PopDeepSleepClearDisengageReason.c)
 *     PpmIdleCsVetoAccountingDeviceUpdate @ 0x1402EF110 (PpmIdleCsVetoAccountingDeviceUpdate.c)
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x1402F5358 (PopFxSetDripsBlockedByDeviceActivity.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x1402FB378 (PopUpdateNonAttributedCpuTimeReference.c)
 */

__int64 __fastcall PopFxPlatformStateAvailable(unsigned int a1, char a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx

  PpmIdleCsVetoAccountingDeviceUpdate(a1, a2);
  result = PpmPlatformStates;
  if ( a1 == *(_DWORD *)PpmPlatformStates - 1 )
  {
    if ( a2 )
    {
      PopFxSetDripsBlockedByDeviceActivity(0LL);
      PopUpdateNonAttributedCpuTimeReference(0LL);
      return PopDeepSleepClearDisengageReason(6u);
    }
    else
    {
      LOBYTE(v4) = 1;
      PopFxSetDripsBlockedByDeviceActivity(v4);
      LOBYTE(v6) = 1;
      PopUpdateNonAttributedCpuTimeReference(v6);
      return PopDeepSleepSetDisengageReason(6u);
    }
  }
  return result;
}
