/*
 * XREFs of ZwQueryKey @ 0x1401B8430
 * Callers:
 *     BiZwQueryKey @ 0x14016E5D8 (BiZwQueryKey.c)
 *     PipIs32bitKey @ 0x140287558 (PipIs32bitKey.c)
 *     BiOpenStoreKeyFromObject @ 0x1403271E0 (BiOpenStoreKeyFromObject.c)
 *     IopGetDriverNameFromKeyNode @ 0x140680360 (IopGetDriverNameFromKeyNode.c)
 *     RtlpValidateKeyTrust @ 0x1406C7450 (RtlpValidateKeyTrust.c)
 *     IopGetRegistryKeyInformation @ 0x1406F337C (IopGetRegistryKeyInformation.c)
 *     _RegRtlQueryInfoKey @ 0x1406FCD40 (_RegRtlQueryInfoKey.c)
 *     PiNormalizeDeviceText @ 0x1406FDD60 (PiNormalizeDeviceText.c)
 *     PiRearrangeDeviceInstances @ 0x140706130 (PiRearrangeDeviceInstances.c)
 *     CmpGetAcpiProfileInformation @ 0x1407315B4 (CmpGetAcpiProfileInformation.c)
 *     SepReadAndPopulateCapes @ 0x140737098 (SepReadAndPopulateCapes.c)
 *     SepLoadNgenLocations @ 0x14075A028 (SepLoadNgenLocations.c)
 *     CmpCloneHwProfile @ 0x1407FB5FC (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x1407FC020 (CmpMoveBiosAliasTable.c)
 *     VrpPostEnumerateKey @ 0x14080A620 (VrpPostEnumerateKey.c)
 *     PipCallbackHasDeviceOverrides @ 0x140822ABC (PipCallbackHasDeviceOverrides.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083D808 (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408492A8 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x1408A4864 (SepReadAndInsertCaps.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408BBB3C (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     _RegRtlCopyTreeInternal @ 0x140900520 (_RegRtlCopyTreeInternal.c)
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
