/*
 * XREFs of ?Release@PhoneShellNamespaceHelper@ContentManagement@@UEAAKXZ @ 0x18000BF90
 * Callers:
 *     ?Release@ContextualSuggestionsManager@ContentManagement@@WCI@EAAKXZ @ 0x18001DF60 (-Release@ContextualSuggestionsManager@ContentManagement@@WCI@EAAKXZ.c)
 *     ?Release@ActionHelper@ContentManagement@@WDA@EAAKXZ @ 0x18001E060 (-Release@ActionHelper@ContentManagement@@WDA@EAAKXZ.c)
 *     ?Release@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ @ 0x18001E0D0 (-Release@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::PhoneShellNamespaceHelper::Release(
        ContentManagement::PhoneShellNamespaceHelper *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(this);
}
