/*
 * XREFs of ZwQueryKey @ 0x1401B8450
 * Callers:
 *     BiZwQueryKey @ 0x14016E5F8 (BiZwQueryKey.c)
 *     PipIs32bitKey @ 0x140287658 (PipIs32bitKey.c)
 *     BiOpenStoreKeyFromObject @ 0x1403272E0 (BiOpenStoreKeyFromObject.c)
 *     IopGetDriverNameFromKeyNode @ 0x140680340 (IopGetDriverNameFromKeyNode.c)
 *     RtlpValidateKeyTrust @ 0x1406C7430 (RtlpValidateKeyTrust.c)
 *     IopGetRegistryKeyInformation @ 0x1406F335C (IopGetRegistryKeyInformation.c)
 *     _RegRtlQueryInfoKey @ 0x1406FCD20 (_RegRtlQueryInfoKey.c)
 *     PiNormalizeDeviceText @ 0x1406FDD40 (PiNormalizeDeviceText.c)
 *     PiRearrangeDeviceInstances @ 0x140706110 (PiRearrangeDeviceInstances.c)
 *     CmpGetAcpiProfileInformation @ 0x140731594 (CmpGetAcpiProfileInformation.c)
 *     SepReadAndPopulateCapes @ 0x140737078 (SepReadAndPopulateCapes.c)
 *     SepLoadNgenLocations @ 0x14075A008 (SepLoadNgenLocations.c)
 *     CmpCloneHwProfile @ 0x1407FB5DC (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x1407FC000 (CmpMoveBiosAliasTable.c)
 *     VrpPostEnumerateKey @ 0x14080A600 (VrpPostEnumerateKey.c)
 *     PipCallbackHasDeviceOverrides @ 0x140822A9C (PipCallbackHasDeviceOverrides.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083D7E8 (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x140849288 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x1408A4844 (SepReadAndInsertCaps.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408BBB1C (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     _RegRtlCopyTreeInternal @ 0x140900500 (_RegRtlCopyTreeInternal.c)
 *     EmInitSystem @ 0x1409BD7E0 (EmInitSystem.c)
 *     PipInitDeviceOverrideCache @ 0x1409CA648 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&KeyInformationClass, KeyInformation);
}
