/*
 * XREFs of ??$?0$0EG@@StringReference@Internal@Windows@@QEAA@AEAY0EG@$$CBG@Z @ 0x1801C12E8
 * Callers:
 *     ?ApplyDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801C5E6C (-ApplyDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 *     ?RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801C7EAC (-RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(
        HSTRING *string,
        const unsigned __int16 (*a2)[70])
{
  if ( WindowsCreateStringReference(
         L"Windows.Internal.CapabilityAccess.Management.CapabilityConsentManager",
         0x45u,
         (HSTRING_HEADER *)(string + 1),
         string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
