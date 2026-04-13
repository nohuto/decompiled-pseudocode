/*
 * XREFs of ?QueryInterface@FeatureManager@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000DAF0
 * Callers:
 *     ?QueryInterface@FeatureManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001DF50 (-QueryInterface@FeatureManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@FeatureManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E070 (-QueryInterface@FeatureManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@FeatureManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E3E0 (-QueryInterface@FeatureManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::FeatureManager::QueryInterface(
        ContentManagement::FeatureManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IFeatureManager>::QueryInterface(
           this,
           a2,
           a3);
}
