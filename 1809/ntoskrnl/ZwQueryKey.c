/*
 * XREFs of ZwQueryKey @ 0x1401B85B0
 * Callers:
 *     BiZwQueryKey @ 0x14016E6F8 (BiZwQueryKey.c)
 *     PipIs32bitKey @ 0x140287848 (PipIs32bitKey.c)
 *     BiOpenStoreKeyFromObject @ 0x1403274D0 (BiOpenStoreKeyFromObject.c)
 *     IopGetDriverNameFromKeyNode @ 0x140681500 (IopGetDriverNameFromKeyNode.c)
 *     RtlpValidateKeyTrust @ 0x1406C86D0 (RtlpValidateKeyTrust.c)
 *     IopGetRegistryKeyInformation @ 0x1406F45FC (IopGetRegistryKeyInformation.c)
 *     _RegRtlQueryInfoKey @ 0x1406FDFC0 (_RegRtlQueryInfoKey.c)
 *     PiNormalizeDeviceText @ 0x1406FEFE0 (PiNormalizeDeviceText.c)
 *     PiRearrangeDeviceInstances @ 0x1407073B0 (PiRearrangeDeviceInstances.c)
 *     CmpGetAcpiProfileInformation @ 0x140732784 (CmpGetAcpiProfileInformation.c)
 *     SepReadAndPopulateCapes @ 0x140738268 (SepReadAndPopulateCapes.c)
 *     SepLoadNgenLocations @ 0x14075B1F8 (SepLoadNgenLocations.c)
 *     CmpCloneHwProfile @ 0x1407FC7DC (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x1407FD200 (CmpMoveBiosAliasTable.c)
 *     VrpPostEnumerateKey @ 0x14080B800 (VrpPostEnumerateKey.c)
 *     PipCallbackHasDeviceOverrides @ 0x140823C9C (PipCallbackHasDeviceOverrides.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083EA48 (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x14084A4E8 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x1408A5AA4 (SepReadAndInsertCaps.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408BCDDC (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     _RegRtlCopyTreeInternal @ 0x1409017C0 (_RegRtlCopyTreeInternal.c)
 *     EmInitSystem @ 0x1409BE7E0 (EmInitSystem.c)
 *     PipInitDeviceOverrideCache @ 0x1409CB648 (PipInitDeviceOverrideCache.c)
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
