/*
 * XREFs of ?GetIids@IdentityManager@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000D8F0
 * Callers:
 *     ?GetIids@IdentityManager@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18001E140 (-GetIids@IdentityManager@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::IdentityManager::GetIids(
        ContentManagement::IdentityManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IIdentityManager>::GetIids(
           this,
           a2,
           a3);
}
