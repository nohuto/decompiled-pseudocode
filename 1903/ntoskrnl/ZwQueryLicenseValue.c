/*
 * XREFs of ZwQueryLicenseValue @ 0x1401C2A70
 * Callers:
 *     RtlGetProductInfo @ 0x140195CA0 (RtlGetProductInfo.c)
 *     ExpGenuinePolicyPostProcess @ 0x1406D2BB0 (ExpGenuinePolicyPostProcess.c)
 *     ExpGetVMActivationStatus @ 0x14072ADC0 (ExpGetVMActivationStatus.c)
 *     ExGetExpirationDate @ 0x1407607C8 (ExGetExpirationDate.c)
 *     RtlpGetWindowsPolicy @ 0x140766C44 (RtlpGetWindowsPolicy.c)
 *     MmCreateMirror @ 0x14088A320 (MmCreateMirror.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1408D2AA0 (RtlpGetPolicyValueForSystemCapability.c)
 *     SepIsLockedDown @ 0x1408D9E5C (SepIsLockedDown.c)
 *     KIsSideloadingEnabled @ 0x14091B938 (KIsSideloadingEnabled.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 *     PpmInitIdlePolicy @ 0x140A1B618 (PpmInitIdlePolicy.c)
 *     WheapLoadPolicy @ 0x140A1EA7C (WheapLoadPolicy.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140A221E4 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ValueName);
}
