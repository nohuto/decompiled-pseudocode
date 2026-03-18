/*
 * XREFs of PopFxEnablePlatformStates @ 0x1402F2F00
 * Callers:
 *     PpmEnableCoordinatedIdleStates @ 0x1408A2450 (PpmEnableCoordinatedIdleStates.c)
 * Callees:
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1402EE360 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x1402F4B00 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepPlatformStateRegistered @ 0x1402F9D4C (PopPepPlatformStateRegistered.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408A5370 (PopFxInitializeSocSubsystemStaticInfo.c)
 */

void __fastcall PopFxEnablePlatformStates(int a1)
{
  unsigned int DeepSleepPlatformStateIndex; // eax
  unsigned int v2; // ebx

  if ( a1 )
  {
    PopPepPlatformStateRegistered();
    DeepSleepPlatformStateIndex = PpmGetDeepSleepPlatformStateIndex();
    v2 = DeepSleepPlatformStateIndex;
    if ( DeepSleepPlatformStateIndex != -1 )
    {
      PopFxSetDeviceAccountingCsPlatformState(DeepSleepPlatformStateIndex);
      PopFxInitializeSocSubsystemStaticInfo(v2);
    }
  }
}
