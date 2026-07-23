/*
 * XREFs of ZwQueryKey @ 0x1401C0F10
 * Callers:
 *     BiZwQueryKey @ 0x1401781C0 (BiZwQueryKey.c)
 *     PipIs32bitKey @ 0x14029D4AC (PipIs32bitKey.c)
 *     BiOpenStoreKeyFromObject @ 0x140348560 (BiOpenStoreKeyFromObject.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1406D426C (IopApplyMutableTagToRegistryKey.c)
 *     RtlpValidateKeyTrust @ 0x1406E7C34 (RtlpValidateKeyTrust.c)
 *     IopGetRegistryKeyInformation @ 0x1406FFB98 (IopGetRegistryKeyInformation.c)
 *     PiNormalizeDeviceText @ 0x14070018C (PiNormalizeDeviceText.c)
 *     IopGetDriverNameFromKeyNode @ 0x14070B658 (IopGetDriverNameFromKeyNode.c)
 *     _RegRtlQueryInfoKey @ 0x14071CA28 (_RegRtlQueryInfoKey.c)
 *     PiRearrangeDeviceInstances @ 0x140736494 (PiRearrangeDeviceInstances.c)
 *     CmpGetAcpiProfileInformation @ 0x1407613F4 (CmpGetAcpiProfileInformation.c)
 *     SepLoadNgenLocations @ 0x14078328C (SepLoadNgenLocations.c)
 *     SepReadAndPopulateCapes @ 0x14078736C (SepReadAndPopulateCapes.c)
 *     CmpCloneHwProfile @ 0x140834008 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140834AB8 (CmpMoveBiosAliasTable.c)
 *     VrpPostEnumerateKey @ 0x140843678 (VrpPostEnumerateKey.c)
 *     PipCallbackHasDeviceOverrides @ 0x14085C4A8 (PipCallbackHasDeviceOverrides.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14087833C (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x140883E88 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x1408E289C (SepReadAndInsertCaps.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408F80EC (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     _RegRtlCopyTreeInternal @ 0x14093E36C (_RegRtlCopyTreeInternal.c)
 *     EmInitSystem @ 0x1409F93E0 (EmInitSystem.c)
 *     PipInitDeviceOverrideCache @ 0x140A1C050 (PipInitDeviceOverrideCache.c)
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
