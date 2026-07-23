/*
 * XREFs of HvlPhase1Initialize @ 0x140193B34
 * Callers:
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x1400E5DE0 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140173360 (KeRegisterBugCheckReasonCallback.c)
 *     HviIsAnyHypervisorPresent @ 0x140176CB0 (HviIsAnyHypervisorPresent.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x140270D98 (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlpMapStatisticsPage @ 0x140272430 (HvlpMapStatisticsPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x14027303C (HvlpSetupCachedHypercallPages.c)
 *     HvlpInitializePowerStatistics @ 0x140277254 (HvlpInitializePowerStatistics.c)
 *     HvlpInitializeHvCrashdump @ 0x14027804C (HvlpInitializeHvCrashdump.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x1409ABFD0 (MmMarkHypercallPageRetpolineBit.c)
 *     VslpIumPhase0Initialize @ 0x1409F5600 (VslpIumPhase0Initialize.c)
 */

__int64 __fastcall HvlPhase1Initialize(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( HviIsAnyHypervisorPresent() && (HvlpRootFlags & 4) == 0 )
  {
    HvlpHvIdentityInfoCallbackRecord.State = 0;
    KeRegisterBugCheckReasonCallback(
      &HvlpHvIdentityInfoCallbackRecord,
      HvlpHvIdentityInfoCallback,
      KbCallbackSecondaryDumpData,
      &HvlpComponentName);
  }
  if ( HvlHypervisorConnected )
  {
    MmMarkHypercallPageRetpolineBit();
    HvlpSetupCachedHypercallPages(KeGetCurrentPrcb());
    HvlpInitializePowerStatistics();
    if ( (HvlpRootFlags & 0x10) != 0 )
    {
      v4[0] = 0LL;
      v4[1] = 0LL;
      if ( (int)HvlpMapStatisticsPage(1LL, v4, &v5) >= 0 )
        HvlpHypervisorStatsPage = MmMapIoSpaceEx(v5, 4096LL, 2u);
    }
    LOBYTE(v2) = 1;
    HvlConfigureMemoryZeroingOnReset(v2);
    HvlpFlags |= 8u;
    VslpIumPhase0Initialize(a1);
    if ( (HvlpRootFlags & 4) != 0 || VslVsmEnabled )
      HvlpInitializeHvCrashdump(*(_QWORD *)(a1 + 240) + 2464LL);
  }
  return 0LL;
}
