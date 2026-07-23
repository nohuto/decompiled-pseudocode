/*
 * XREFs of ZwQueryLicenseValue @ 0x1401BAC70
 * Callers:
 *     RtlGetProductInfo @ 0x14018D760 (RtlGetProductInfo.c)
 *     ExpGenuinePolicyPostProcess @ 0x1406A8A40 (ExpGenuinePolicyPostProcess.c)
 *     ExpGetVMActivationStatus @ 0x140705308 (ExpGetVMActivationStatus.c)
 *     ExGetExpirationDate @ 0x1407365EC (ExGetExpirationDate.c)
 *     RtlpGetWindowsPolicy @ 0x1407401B4 (RtlpGetWindowsPolicy.c)
 *     MmCreateMirror @ 0x14084F6D0 (MmCreateMirror.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140895DF0 (RtlpGetPolicyValueForSystemCapability.c)
 *     SepIsLockedDown @ 0x14089C93C (SepIsLockedDown.c)
 *     KIsSideloadingEnabled @ 0x1408DEE54 (KIsSideloadingEnabled.c)
 *     WheapLoadPolicy @ 0x1409AFBE8 (WheapLoadPolicy.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 *     PpmInitIdlePolicy @ 0x1409D92DC (PpmInitIdlePolicy.c)
 *     InitializeDynamicPartitioningPolicy @ 0x1409DFB48 (InitializeDynamicPartitioningPolicy.c)
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
