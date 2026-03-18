/*
 * XREFs of PopBatteryAdd @ 0x1408A9820
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x140176E10 (PopBatteryQueueWork.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopResetCurrentPolicies @ 0x140749ADC (PopResetCurrentPolicies.c)
 *     PopBatteryWaitTag @ 0x1408AA400 (PopBatteryWaitTag.c)
 *     PopCadTriggerDriverLoad @ 0x1408B6794 (PopCadTriggerDriverLoad.c)
 */

void __fastcall PopBatteryAdd(__int64 a1)
{
  KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
  if ( ++dword_140443210 == 1 )
  {
    PopAcquirePolicyLock();
    if ( byte_140443C1E != 1 )
    {
      byte_140443C1E = 1;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock();
    PopCadTriggerDriverLoad(1LL);
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  byte_140443218 = 1;
  PopBatteryWaitTag(a1);
  PopBatteryQueueWork(8u);
  PopReleaseRwLock((ULONG_PTR)&PopCB);
}
