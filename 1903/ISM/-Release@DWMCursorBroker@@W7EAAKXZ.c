/*
 * XREFs of ?Release@DWMCursorBroker@@W7EAAKXZ @ 0x180038870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursorBroker::Release(__int64 a1)
{
  return InputStateManager::Release((InputStateManager *)(a1 - 8));
}
