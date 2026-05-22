/*
 * XREFs of ?AddRef@InputStateManager@@WBA@EAAKXZ @ 0x180054530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputStateManager::AddRef(__int64 a1)
{
  return Win32kInterop::AddRef((Win32kInterop *)(a1 - 16));
}
