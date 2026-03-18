/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x140176B90
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x14017D764 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetHypervisorInterface @ 0x14017DBF0 (HviGetHypervisorInterface.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x1401863B0 (HviIsHypervisorVendorMicrosoft.c)
 *     HvlPhase1Initialize @ 0x1401939D4 (HvlPhase1Initialize.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x1401B4354 (KiDetectAmdNonArchSsbdSupport.c)
 *     KiIsBranchConfusionPresent @ 0x1401B44C0 (KiIsBranchConfusionPresent.c)
 *     KiIsTsaMitigationSupported @ 0x1401B473C (KiIsTsaMitigationSupported.c)
 *     KiIsTsaPresent @ 0x1401B47B8 (KiIsTsaPresent.c)
 *     KiApplyProcessorErrata @ 0x1401B48C8 (KiApplyProcessorErrata.c)
 *     PopIsRunningInVm @ 0x1402D6CC0 (PopIsRunningInVm.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1403222C0 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HvlPhase0Initialize @ 0x1407259E8 (HvlPhase0Initialize.c)
 *     ExGetVMType @ 0x1408CEAEC (ExGetVMType.c)
 *     ViFilterIsDeviceExcluded @ 0x140943588 (ViFilterIsDeviceExcluded.c)
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 *     KeInitSystem @ 0x1409C4988 (KeInitSystem.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x1409C5B68 (KiIntSteerDetermineSteeringEnabled.c)
 *     InitializeDynamicPartitioningPolicy @ 0x1409DEB48 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
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
