/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x140176BB0
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x14017D784 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetHypervisorInterface @ 0x14017DC10 (HviGetHypervisorInterface.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x1401863D0 (HviIsHypervisorVendorMicrosoft.c)
 *     HvlPhase1Initialize @ 0x1401939F4 (HvlPhase1Initialize.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x1401B4374 (KiDetectAmdNonArchSsbdSupport.c)
 *     KiIsBranchConfusionPresent @ 0x1401B44E0 (KiIsBranchConfusionPresent.c)
 *     KiIsTsaMitigationSupported @ 0x1401B475C (KiIsTsaMitigationSupported.c)
 *     KiIsTsaPresent @ 0x1401B47D8 (KiIsTsaPresent.c)
 *     KiApplyProcessorErrata @ 0x1401B48E8 (KiApplyProcessorErrata.c)
 *     PopIsRunningInVm @ 0x1402D6DC0 (PopIsRunningInVm.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1403223C0 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HvlPhase0Initialize @ 0x1407259C8 (HvlPhase0Initialize.c)
 *     ExGetVMType @ 0x1408CEACC (ExGetVMType.c)
 *     ViFilterIsDeviceExcluded @ 0x140943588 (ViFilterIsDeviceExcluded.c)
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 *     KeInitSystem @ 0x1409C4988 (KeInitSystem.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x1409C5B68 (KiIntSteerDetermineSteeringEnabled.c)
 *     InitializeDynamicPartitioningPolicy @ 0x1409DEB48 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 */

bool HviIsAnyHypervisorPresent()
{
  char v1; // r8

  _RAX = 1LL;
  v1 = 0;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX != 1986945624;
  }
  return v1;
}
