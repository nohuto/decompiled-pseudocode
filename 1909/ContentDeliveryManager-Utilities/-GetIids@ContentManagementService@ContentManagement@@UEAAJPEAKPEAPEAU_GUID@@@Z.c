/*
 * XREFs of ?GetIids@ContentManagementService@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18001F850
 * Callers:
 *     ?GetIids@ContentManagementService@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800237A0 (-GetIids@ContentManagementService@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentManagementService@ContentManagement@@WFA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800237F0 (-GetIids@ContentManagementService@ContentManagement@@WFA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentManagementService@ContentManagement@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180023A20 (-GetIids@ContentManagementService@ContentManagement@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentManagementService@ContentManagement@@WFI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180023A90 (-GetIids@ContentManagementService@ContentManagement@@WFI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentManagementService@ContentManagement@@WEA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180023CD0 (-GetIids@ContentManagementService@ContentManagement@@WEA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentManagementService@ContentManagement@@WGA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180023D10 (-GetIids@ContentManagementService@ContentManagement@@WGA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentManagementService@ContentManagement@@WEI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180023F70 (-GetIids@ContentManagementService@ContentManagement@@WEI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContentManagementService::GetIids(
        ContentManagement::ContentManagementService *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::GetIids(
           this,
           a2,
           a3);
}
