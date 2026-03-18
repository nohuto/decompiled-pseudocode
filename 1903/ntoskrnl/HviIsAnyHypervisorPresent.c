/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1401806F0
 * Callers:
 *     KiRestoreFeatureBits @ 0x14015F518 (KiRestoreFeatureBits.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x14018B604 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetHypervisorInterface @ 0x14018B840 (HviGetHypervisorInterface.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x14018F540 (HviIsHypervisorVendorMicrosoft.c)
 *     HvlPhase1Initialize @ 0x14019DFE8 (HvlPhase1Initialize.c)
 *     HvlIsAnyHypervisorPresent @ 0x140284BE0 (HvlIsAnyHypervisorPresent.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x1402ABF60 (KiDetectAmdNonArchSsbdSupport.c)
 *     PopIsRunningInVm @ 0x1402F1928 (PopIsRunningInVm.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140343E00 (HviGetHypervisorVendorAndMaxFunction.c)
 *     KiSetFeatureBits @ 0x1405A09C4 (KiSetFeatureBits.c)
 *     HvlPhase0Initialize @ 0x1407882AC (HvlPhase0Initialize.c)
 *     ExGetVMType @ 0x14090C0BC (ExGetVMType.c)
 *     VfFilterAttach @ 0x140982824 (VfFilterAttach.c)
 *     KeInitSystem @ 0x1409FD23C (KeInitSystem.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x1409FE3FC (KiIntSteerDetermineSteeringEnabled.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140A221E4 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
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
