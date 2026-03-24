/*
 * XREFs of PopBatteryAdd @ 0x14086CCC0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     KeInitializeEvent @ 0x1400B8E70 (KeInitializeEvent.c)
 *     PopBatteryQueueWork @ 0x1401762CC (PopBatteryQueueWork.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopResetCurrentPolicies @ 0x1407475EC (PopResetCurrentPolicies.c)
 *     PopBatteryWaitTag @ 0x14086D8B0 (PopBatteryWaitTag.c)
 *     PopCadTriggerDriverLoad @ 0x14087A214 (PopCadTriggerDriverLoad.c)
 */

void __fastcall PopBatteryAdd(__int64 a1)
{
  KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
  if ( ++dword_140417910 == 1 )
  {
    PopAcquirePolicyLock();
    if ( byte_14041823E != 1 )
    {
      byte_14041823E = 1;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock();
    PopCadTriggerDriverLoad(1LL);
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  byte_140417918 = 1;
  PopBatteryWaitTag(a1);
  PopBatteryQueueWork(8u);
  PopReleaseRwLock((ULONG_PTR)&PopCB);
}
