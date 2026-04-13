/*
 * XREFs of ?GetIids@LaunchManager@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000CA00
 * Callers:
 *     ?GetIids@LaunchManager@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18001E080 (-GetIids@LaunchManager@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::LaunchManager::GetIids(
        ContentManagement::LaunchManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::ILaunchManager>::GetIids(
           this,
           a2,
           a3);
}
