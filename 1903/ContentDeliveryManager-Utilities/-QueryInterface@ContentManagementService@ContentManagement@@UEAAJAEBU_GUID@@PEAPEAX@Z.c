/*
 * XREFs of ?QueryInterface@ContentManagementService@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001F320
 * Callers:
 *     ?QueryInterface@ContentManagementService@ContentManagement@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800232F0 (-QueryInterface@ContentManagementService@ContentManagement@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentManagementService@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800234D0 (-QueryInterface@ContentManagementService@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentManagementService@ContentManagement@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023540 (-QueryInterface@ContentManagementService@ContentManagement@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentManagementService@ContentManagement@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023760 (-QueryInterface@ContentManagementService@ContentManagement@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentManagementService@ContentManagement@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800237A0 (-QueryInterface@ContentManagementService@ContentManagement@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentManagementService@ContentManagement@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800239E0 (-QueryInterface@ContentManagementService@ContentManagement@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentManagementService@ContentManagement@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023A10 (-QueryInterface@ContentManagementService@ContentManagement@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentManagementService@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023B90 (-QueryInterface@ContentManagementService@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentManagementService@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023BC0 (-QueryInterface@ContentManagementService@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContentManagementService::QueryInterface(
        ContentManagement::ContentManagementService *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::QueryInterface(
           this,
           a2,
           a3);
}
