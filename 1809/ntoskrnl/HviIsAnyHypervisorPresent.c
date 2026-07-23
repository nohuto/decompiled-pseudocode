/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x140176CB0
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x14017D8C4 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetHypervisorInterface @ 0x14017DD50 (HviGetHypervisorInterface.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x140186510 (HviIsHypervisorVendorMicrosoft.c)
 *     HvlPhase1Initialize @ 0x140193B34 (HvlPhase1Initialize.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x1401B44B4 (KiDetectAmdNonArchSsbdSupport.c)
 *     KiIsBranchConfusionPresent @ 0x1401B4620 (KiIsBranchConfusionPresent.c)
 *     KiIsTsaMitigationSupported @ 0x1401B489C (KiIsTsaMitigationSupported.c)
 *     KiIsTsaPresent @ 0x1401B4918 (KiIsTsaPresent.c)
 *     KiApplyProcessorErrata @ 0x1401B4A28 (KiApplyProcessorErrata.c)
 *     PopIsRunningInVm @ 0x1402D6FB0 (PopIsRunningInVm.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1403225B0 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HvlPhase0Initialize @ 0x140726C68 (HvlPhase0Initialize.c)
 *     ExGetVMType @ 0x1408CFD8C (ExGetVMType.c)
 *     ViFilterIsDeviceExcluded @ 0x140944588 (ViFilterIsDeviceExcluded.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 *     KeInitSystem @ 0x1409C5988 (KeInitSystem.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x1409C6B68 (KiIntSteerDetermineSteeringEnabled.c)
 *     InitializeDynamicPartitioningPolicy @ 0x1409DFB48 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
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
