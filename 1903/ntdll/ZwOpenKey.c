/*
 * XREFs of ZwOpenKey @ 0x18009C920
 * Callers:
 *     RtlQueryImageMitigationPolicy @ 0x180001140 (RtlQueryImageMitigationPolicy.c)
 *     sub_180003474 @ 0x180003474 (sub_180003474.c)
 *     sub_180003D40 @ 0x180003D40 (sub_180003D40.c)
 *     sub_180003EB8 @ 0x180003EB8 (sub_180003EB8.c)
 *     sub_1800041A8 @ 0x1800041A8 (sub_1800041A8.c)
 *     EtwpGetCpuSpeed_0 @ 0x18000434C (EtwpGetCpuSpeed_0.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180007950 (RtlpLoadMachineUIByPolicy.c)
 *     sub_1800085C8 @ 0x1800085C8 (sub_1800085C8.c)
 *     sub_180008A20 @ 0x180008A20 (sub_180008A20.c)
 *     sub_180008C14 @ 0x180008C14 (sub_180008C14.c)
 *     RtlpLoadUserUIByPolicy @ 0x180009270 (RtlpLoadUserUIByPolicy.c)
 *     RtlCapabilityCheck @ 0x18000B770 (RtlCapabilityCheck.c)
 *     sub_180012E38 @ 0x180012E38 (sub_180012E38.c)
 *     RtlOpenCurrentUser @ 0x180029AC0 (RtlOpenCurrentUser.c)
 *     sub_18005AAF0 @ 0x18005AAF0 (sub_18005AAF0.c)
 *     sub_18005BCFC @ 0x18005BCFC (sub_18005BCFC.c)
 *     sub_18006B63C @ 0x18006B63C (sub_18006B63C.c)
 *     sub_18006C210 @ 0x18006C210 (sub_18006C210.c)
 *     RtlGetPersistedStateLocation @ 0x18006FCC0 (RtlGetPersistedStateLocation.c)
 *     sub_180073150 @ 0x180073150 (sub_180073150.c)
 *     sub_18007330C @ 0x18007330C (sub_18007330C.c)
 *     sub_180073374 @ 0x180073374 (sub_180073374.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180074D60 (RtlpGetDeviceFamilyInfoEnum.c)
 *     sub_18007A3BC @ 0x18007A3BC (sub_18007A3BC.c)
 *     InitFn @ 0x18007C370 (InitFn.c)
 *     RtlpNtOpenKey @ 0x18007D070 (RtlpNtOpenKey.c)
 *     sub_180087EB8 @ 0x180087EB8 (sub_180087EB8.c)
 *     sub_1800883AC @ 0x1800883AC (sub_1800883AC.c)
 *     sub_18008B794 @ 0x18008B794 (sub_18008B794.c)
 *     sub_1800D15E0 @ 0x1800D15E0 (sub_1800D15E0.c)
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 *     sub_1800D9678 @ 0x1800D9678 (sub_1800D9678.c)
 *     sub_1800DD460 @ 0x1800DD460 (sub_1800DD460.c)
 *     sub_1800DD510 @ 0x1800DD510 (sub_1800DD510.c)
 *     sub_1800DDF30 @ 0x1800DDF30 (sub_1800DDF30.c)
 *     sub_1800DF114 @ 0x1800DF114 (sub_1800DF114.c)
 *     sub_1800E0B08 @ 0x1800E0B08 (sub_1800E0B08.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E0BA0 (RtlSetImageMitigationPolicy.c)
 *     sub_1800E1C18 @ 0x1800E1C18 (sub_1800E1C18.c)
 *     sub_1800EAFC8 @ 0x1800EAFC8 (sub_1800EAFC8.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2E0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800ED520 (RtlpSetInstallLanguage.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDBE0 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800F0CD8 @ 0x1800F0CD8 (sub_1800F0CD8.c)
 *     sub_1800F6E70 @ 0x1800F6E70 (sub_1800F6E70.c)
 *     sub_1800F6FF4 @ 0x1800F6FF4 (sub_1800F6FF4.c)
 *     RtlOsDeploymentState @ 0x1800FB710 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1800FB850 (RtlQueryValidationRunlevel.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800FCD80 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     sub_1800FFEAC @ 0x1800FFEAC (sub_1800FFEAC.c)
 *     sub_180100D94 @ 0x180100D94 (sub_180100D94.c)
 *     sub_18010A328 @ 0x18010A328 (sub_18010A328.c)
 *     sub_180115D48 @ 0x180115D48 (sub_180115D48.c)
 *     sub_180115F88 @ 0x180115F88 (sub_180115F88.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 18;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
