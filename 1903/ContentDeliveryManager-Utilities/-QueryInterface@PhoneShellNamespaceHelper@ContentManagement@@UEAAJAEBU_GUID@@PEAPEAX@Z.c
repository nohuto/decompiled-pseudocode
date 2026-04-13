/*
 * XREFs of ?QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000F460
 * Callers:
 *     ?QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E190 (-QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E9E0 (-QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001EA50 (-QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::QueryInterface(
        ContentManagement::PhoneShellNamespaceHelper *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IPhoneShellNamespaceHelper>::QueryInterface(
           this,
           a2,
           a3);
}
