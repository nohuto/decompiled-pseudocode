/*
 * XREFs of ?Release@ContextualSuggestionsManager@ContentManagement@@WCI@EAAKXZ @ 0x18001DE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::ContextualSuggestionsManager::Release(__int64 a1)
{
  return ContentManagement::PhoneShellNamespaceHelper::Release((ContentManagement::PhoneShellNamespaceHelper *)(a1 - 40));
}
