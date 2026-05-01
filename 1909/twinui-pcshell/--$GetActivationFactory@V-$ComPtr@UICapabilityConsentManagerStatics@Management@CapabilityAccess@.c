/*
 * XREFs of ??$GetActivationFactory@V?$ComPtr@UICapabilityConsentManagerStatics@Management@CapabilityAccess@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UICapabilityConsentManagerStatics@Management@CapabilityAccess@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801E084C
 * Callers:
 *     ?ApplyDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801E4E8C (-ApplyDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 *     ?RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801E6ECC (-RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::CapabilityAccess::Management::ICapabilityConsentManagerStatics>>(
        __int64 a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return RoGetActivationFactory(a1, &GUID_ef1a89c8_29b1_4ab0_94a7_851b33527a2e, a2);
}
