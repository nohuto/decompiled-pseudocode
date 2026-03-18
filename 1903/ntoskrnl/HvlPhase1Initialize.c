/*
 * XREFs of HvlPhase1Initialize @ 0x14019DFE8
 * Callers:
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140118AB0 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14017A400 (KeRegisterBugCheckReasonCallback.c)
 *     HviIsAnyHypervisorPresent @ 0x1401806F0 (HviIsAnyHypervisorPresent.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1402848A8 (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlpMapStatisticsPage @ 0x140286284 (HvlpMapStatisticsPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x140286D60 (HvlpSetupCachedHypercallPages.c)
 *     HvlpInitializePowerStatistics @ 0x14028B398 (HvlpInitializePowerStatistics.c)
 *     HvlpInitializeHvCrashdump @ 0x14028C12C (HvlpInitializeHvCrashdump.c)
 *     VslpIumPhase0Initialize @ 0x140A39B20 (VslpIumPhase0Initialize.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140A3C7E0 (MmMarkHypercallPageRetpolineBit.c)
 */

__int64 __fastcall HvlPhase1Initialize(__int64 a1)
{
  __int64 v3; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
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
    LOBYTE(v3) = 1;
    HvlConfigureMemoryZeroingOnReset(v3);
    HvlpFlags |= 8u;
    VslpIumPhase0Initialize(a1);
    if ( (HvlpRootFlags & 4) != 0 || VslVsmEnabled )
      HvlpInitializeHvCrashdump(*(_QWORD *)(a1 + 240) + 2488LL);
  }
  return 0LL;
}
