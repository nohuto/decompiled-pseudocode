/*
 * XREFs of ?Release@InputStateManager@@WBA@EAAKXZ @ 0x180054510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputStateManager::Release(__int64 a1)
{
  return DWMLegacyInputTarget::Release((DWMLegacyInputTarget *)(a1 - 16));
}
