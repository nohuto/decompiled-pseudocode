/*
 * XREFs of ?QueryInterface@MobilityExperienceSettings@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000EAF0
 * Callers:
 *     ?QueryInterface@MobilityExperienceSettings@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E2D0 (-QueryInterface@MobilityExperienceSettings@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MobilityExperienceSettings@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E310 (-QueryInterface@MobilityExperienceSettings@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MobilityExperienceSettings@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E610 (-QueryInterface@MobilityExperienceSettings@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::MobilityExperienceSettings::QueryInterface(
        ContentManagement::MobilityExperienceSettings *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IMobilityExperienceSettings>::QueryInterface(
           this,
           a2,
           a3);
}
