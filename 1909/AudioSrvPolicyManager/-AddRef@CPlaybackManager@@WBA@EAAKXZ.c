/*
 * XREFs of ?AddRef@CPlaybackManager@@WBA@EAAKXZ @ 0x18000D020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPlaybackManager::AddRef(__int64 a1)
{
  return CBackgroundSessionCallbacks::AddRef((CBackgroundSessionCallbacks *)(a1 - 16));
}
