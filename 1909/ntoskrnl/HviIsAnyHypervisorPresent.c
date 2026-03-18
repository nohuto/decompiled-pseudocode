/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x140180DE0
 * Callers:
 *     KiRestoreFeatureBits @ 0x14015FBB8 (KiRestoreFeatureBits.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x14018BF94 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetHypervisorInterface @ 0x14018C1D0 (HviGetHypervisorInterface.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x140190440 (HviIsHypervisorVendorMicrosoft.c)
 *     HvlPhase1Initialize @ 0x14019E708 (HvlPhase1Initialize.c)
 *     HvlIsAnyHypervisorPresent @ 0x140284940 (HvlIsAnyHypervisorPresent.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x1402ABCC0 (KiDetectAmdNonArchSsbdSupport.c)
 *     PopIsRunningInVm @ 0x1402F1688 (PopIsRunningInVm.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140343860 (HviGetHypervisorVendorAndMaxFunction.c)
 *     KiSetFeatureBits @ 0x1405A09A4 (KiSetFeatureBits.c)
 *     HvlPhase0Initialize @ 0x14078A70C (HvlPhase0Initialize.c)
 *     ExGetVMType @ 0x14090BB1C (ExGetVMType.c)
 *     VfFilterAttach @ 0x140982824 (VfFilterAttach.c)
 *     KeInitSystem @ 0x1409FD758 (KeInitSystem.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x1409FE918 (KiIntSteerDetermineSteeringEnabled.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140A222C4 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
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
