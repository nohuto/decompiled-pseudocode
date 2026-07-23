/*
 * XREFs of ZwQueryValueKey @ 0x18009C9C0
 * Callers:
 *     RtlQueryImageMitigationPolicy @ 0x180001140 (RtlQueryImageMitigationPolicy.c)
 *     sub_180003474 @ 0x180003474 (sub_180003474.c)
 *     sub_180003EB8 @ 0x180003EB8 (sub_180003EB8.c)
 *     sub_1800041A8 @ 0x1800041A8 (sub_1800041A8.c)
 *     EtwpGetCpuSpeed_0 @ 0x18000434C (EtwpGetCpuSpeed_0.c)
 *     sub_1800090D4 @ 0x1800090D4 (sub_1800090D4.c)
 *     RtlCapabilityCheck @ 0x18000B770 (RtlCapabilityCheck.c)
 *     sub_18005BEE0 @ 0x18005BEE0 (sub_18005BEE0.c)
 *     sub_18006B63C @ 0x18006B63C (sub_18006B63C.c)
 *     sub_18006C210 @ 0x18006C210 (sub_18006C210.c)
 *     RtlGetPersistedStateLocation @ 0x18006FCC0 (RtlGetPersistedStateLocation.c)
 *     sub_180073374 @ 0x180073374 (sub_180073374.c)
 *     sub_180074F88 @ 0x180074F88 (sub_180074F88.c)
 *     LdrQueryImageFileKeyOption @ 0x180079A80 (LdrQueryImageFileKeyOption.c)
 *     sub_18007A3BC @ 0x18007A3BC (sub_18007A3BC.c)
 *     RtlpNtQueryValueKey @ 0x18007AD10 (RtlpNtQueryValueKey.c)
 *     InitFn @ 0x18007C370 (InitFn.c)
 *     sub_180087EB8 @ 0x180087EB8 (sub_180087EB8.c)
 *     RtlInitializeRXact @ 0x18008A420 (RtlInitializeRXact.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CBF80 (LdrAppxHandleIntegrityFailure.c)
 *     sub_1800CC310 @ 0x1800CC310 (sub_1800CC310.c)
 *     sub_1800D11F4 @ 0x1800D11F4 (sub_1800D11F4.c)
 *     sub_1800D15E0 @ 0x1800D15E0 (sub_1800D15E0.c)
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 *     sub_1800D4B50 @ 0x1800D4B50 (sub_1800D4B50.c)
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 *     sub_1800DD5C0 @ 0x1800DD5C0 (sub_1800DD5C0.c)
 *     sub_1800DDF30 @ 0x1800DDF30 (sub_1800DDF30.c)
 *     sub_1800DF114 @ 0x1800DF114 (sub_1800DF114.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E0BA0 (RtlSetImageMitigationPolicy.c)
 *     sub_1800E1DF8 @ 0x1800E1DF8 (sub_1800E1DF8.c)
 *     sub_1800EAFC8 @ 0x1800EAFC8 (sub_1800EAFC8.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1800EB340 (RtlQueryRegistryValueWithFallback.c)
 *     sub_1800F0CD8 @ 0x1800F0CD8 (sub_1800F0CD8.c)
 *     sub_1800F6F14 @ 0x1800F6F14 (sub_1800F6F14.c)
 *     sub_1800F6FF4 @ 0x1800F6FF4 (sub_1800F6FF4.c)
 *     RtlOsDeploymentState @ 0x1800FB710 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1800FB850 (RtlQueryValidationRunlevel.c)
 *     sub_180100128 @ 0x180100128 (sub_180100128.c)
 *     sub_18010A328 @ 0x18010A328 (sub_18010A328.c)
 *     sub_180115F88 @ 0x180115F88 (sub_180115F88.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  NTSTATUS result; // eax

  result = 23;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
