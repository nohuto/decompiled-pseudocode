/*
 * XREFs of ?GetIids@ActionHelper@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000EF60
 * Callers:
 *     ?GetIids@ActionHelper@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18001E4B0 (-GetIids@ActionHelper@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ActionHelper::GetIids(
        ContentManagement::ActionHelper *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IActionHelper>::GetIids(
           this,
           a2,
           a3);
}
