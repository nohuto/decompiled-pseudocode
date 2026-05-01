/*
 * XREFs of ?Release@CCortanaConversationExperienceManager@@WBA@EAAKXZ @ 0x18009E380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCortanaConversationExperienceManager::Release(__int64 a1)
{
  return ApplicationViewTabInsertionContext::Release((ApplicationViewTabInsertionContext *)(a1 - 16));
}
