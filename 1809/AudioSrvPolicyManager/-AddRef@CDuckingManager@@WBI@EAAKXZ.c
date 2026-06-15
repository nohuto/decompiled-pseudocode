/*
 * XREFs of ?AddRef@CDuckingManager@@WBI@EAAKXZ @ 0x180010340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDuckingManager::AddRef(__int64 a1)
{
  return CBackgroundSessionCallbacks::AddRef((CBackgroundSessionCallbacks *)(a1 - 24));
}
