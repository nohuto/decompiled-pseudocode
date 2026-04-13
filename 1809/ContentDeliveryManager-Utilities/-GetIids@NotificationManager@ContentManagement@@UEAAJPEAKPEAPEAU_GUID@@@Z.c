/*
 * XREFs of ?GetIids@NotificationManager@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000BFB0
 * Callers:
 *     ?GetIids@NotificationManager@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18001E6C0 (-GetIids@NotificationManager@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::NotificationManager::GetIids(
        ContentManagement::NotificationManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::INotificationManager>::GetIids(
           this,
           a2,
           a3);
}
