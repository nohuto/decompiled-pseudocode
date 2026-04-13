/*
 * XREFs of ?GetIids@ContextualSuggestionsManager@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000BF70
 * Callers:
 *     ?GetIids@ContextualSuggestionsManager@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18001EB10 (-GetIids@ContextualSuggestionsManager@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContextualSuggestionsManager::GetIids(
        ContentManagement::ContextualSuggestionsManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContextualSuggestionsManager>::GetIids(
           this,
           a2,
           a3);
}
