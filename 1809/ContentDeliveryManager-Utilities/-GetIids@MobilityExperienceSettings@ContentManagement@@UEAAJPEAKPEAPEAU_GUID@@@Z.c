/*
 * XREFs of ?GetIids@MobilityExperienceSettings@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000EAE0
 * Callers:
 *     ?GetIids@MobilityExperienceSettings@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18001E980 (-GetIids@MobilityExperienceSettings@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::MobilityExperienceSettings::GetIids(
        ContentManagement::MobilityExperienceSettings *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IMobilityExperienceSettings>::GetIids(
           this,
           a2,
           a3);
}
