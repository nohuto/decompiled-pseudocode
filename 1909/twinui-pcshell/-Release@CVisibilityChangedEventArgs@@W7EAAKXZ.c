/*
 * XREFs of ?Release@CVisibilityChangedEventArgs@@W7EAAKXZ @ 0x1800D7180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisibilityChangedEventArgs::Release(__int64 a1)
{
  return ApplicationViewTabInsertionContext::Release((ApplicationViewTabInsertionContext *)(a1 - 8));
}
