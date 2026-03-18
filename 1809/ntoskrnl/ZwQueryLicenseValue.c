/*
 * XREFs of ZwQueryLicenseValue @ 0x1401BAAF0
 * Callers:
 *     RtlGetProductInfo @ 0x14018D600 (RtlGetProductInfo.c)
 *     ExpGenuinePolicyPostProcess @ 0x1406A77C0 (ExpGenuinePolicyPostProcess.c)
 *     ExpGetVMActivationStatus @ 0x140704088 (ExpGetVMActivationStatus.c)
 *     ExGetExpirationDate @ 0x14073541C (ExGetExpirationDate.c)
 *     RtlpGetWindowsPolicy @ 0x14073EFE4 (RtlpGetWindowsPolicy.c)
 *     MmCreateMirror @ 0x14084E490 (MmCreateMirror.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140894BB0 (RtlpGetPolicyValueForSystemCapability.c)
 *     SepIsLockedDown @ 0x14089B6FC (SepIsLockedDown.c)
 *     KIsSideloadingEnabled @ 0x1408DDBB4 (KIsSideloadingEnabled.c)
 *     WheapLoadPolicy @ 0x1409AEBE8 (WheapLoadPolicy.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 *     PpmInitIdlePolicy @ 0x1409D82DC (PpmInitIdlePolicy.c)
 *     InitializeDynamicPartitioningPolicy @ 0x1409DEB48 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryLicenseValue(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
