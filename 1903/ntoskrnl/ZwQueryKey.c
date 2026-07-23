/*
 * XREFs of ZwQueryKey @ 0x1401C0390
 * Callers:
 *     BiZwQueryKey @ 0x140177AD0 (BiZwQueryKey.c)
 *     PipIs32bitKey @ 0x14029D74C (PipIs32bitKey.c)
 *     BiOpenStoreKeyFromObject @ 0x140348B00 (BiOpenStoreKeyFromObject.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1406D4B8C (IopApplyMutableTagToRegistryKey.c)
 *     RtlpValidateKeyTrust @ 0x1406E69A8 (RtlpValidateKeyTrust.c)
 *     IopGetRegistryKeyInformation @ 0x1406FDDB8 (IopGetRegistryKeyInformation.c)
 *     PiNormalizeDeviceText @ 0x1406FE3AC (PiNormalizeDeviceText.c)
 *     IopGetDriverNameFromKeyNode @ 0x140709878 (IopGetDriverNameFromKeyNode.c)
 *     _RegRtlQueryInfoKey @ 0x14071AC38 (_RegRtlQueryInfoKey.c)
 *     PiRearrangeDeviceInstances @ 0x140734234 (PiRearrangeDeviceInstances.c)
 *     CmpGetAcpiProfileInformation @ 0x14075CC74 (CmpGetAcpiProfileInformation.c)
 *     SepLoadNgenLocations @ 0x140780F2C (SepLoadNgenLocations.c)
 *     SepReadAndPopulateCapes @ 0x14078500C (SepReadAndPopulateCapes.c)
 *     CmpCloneHwProfile @ 0x1408349A8 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140835458 (CmpMoveBiosAliasTable.c)
 *     VrpPostEnumerateKey @ 0x140844004 (VrpPostEnumerateKey.c)
 *     PipCallbackHasDeviceOverrides @ 0x14085CDA8 (PipCallbackHasDeviceOverrides.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140878C3C (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x140884788 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x1408E30A4 (SepReadAndInsertCaps.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408F8708 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     _RegRtlCopyTreeInternal @ 0x14093E8FC (_RegRtlCopyTreeInternal.c)
 *     EmInitSystem @ 0x1409F94D0 (EmInitSystem.c)
 *     PipInitDeviceOverrideCache @ 0x140A1BE74 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
