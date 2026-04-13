/*
 * XREFs of ?QueryInterface@IdentityManager@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000DEE0
 * Callers:
 *     ?QueryInterface@IdentityManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001EA10 (-QueryInterface@IdentityManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@IdentityManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001EA50 (-QueryInterface@IdentityManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@IdentityManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001ED40 (-QueryInterface@IdentityManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::IdentityManager::QueryInterface(
        ContentManagement::IdentityManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IIdentityManager>::QueryInterface(
           this,
           a2,
           a3);
}
