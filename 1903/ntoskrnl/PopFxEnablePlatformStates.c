/*
 * XREFs of PopFxEnablePlatformStates @ 0x1402F31A0
 * Callers:
 *     PpmEnableCoordinatedIdleStates @ 0x1408A2C10 (PpmEnableCoordinatedIdleStates.c)
 * Callees:
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1402EE600 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x1402F5050 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepPlatformStateRegistered @ 0x1402FA29C (PopPepPlatformStateRegistered.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408A5B10 (PopFxInitializeSocSubsystemStaticInfo.c)
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
