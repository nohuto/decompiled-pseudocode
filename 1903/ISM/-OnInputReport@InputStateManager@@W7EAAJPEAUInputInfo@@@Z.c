/*
 * XREFs of ?OnInputReport@InputStateManager@@W7EAAJPEAUInputInfo@@@Z @ 0x180038830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputStateManager::OnInputReport(__int64 a1, struct InputInfo *a2)
{
  return InputStateManager::OnInputReport((InputStateManager *)(a1 - 8), a2);
}
