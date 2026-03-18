/*
 * XREFs of ZwQueryLicenseValue @ 0x1401C35F0
 * Callers:
 *     RtlGetProductInfo @ 0x140196480 (RtlGetProductInfo.c)
 *     ExpGenuinePolicyPostProcess @ 0x1406D1F10 (ExpGenuinePolicyPostProcess.c)
 *     ExpGetVMActivationStatus @ 0x14072CC60 (ExpGetVMActivationStatus.c)
 *     ExGetExpirationDate @ 0x1407651D0 (ExGetExpirationDate.c)
 *     RtlpGetWindowsPolicy @ 0x14076B744 (RtlpGetWindowsPolicy.c)
 *     MmCreateMirror @ 0x140889B40 (MmCreateMirror.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1408D23A0 (RtlpGetPolicyValueForSystemCapability.c)
 *     SepIsLockedDown @ 0x1408D975C (SepIsLockedDown.c)
 *     KIsSideloadingEnabled @ 0x14091B398 (KIsSideloadingEnabled.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 *     PpmInitIdlePolicy @ 0x140A1B890 (PpmInitIdlePolicy.c)
 *     WheapLoadPolicy @ 0x140A1EC5C (WheapLoadPolicy.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140A222C4 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryLicenseValue(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
