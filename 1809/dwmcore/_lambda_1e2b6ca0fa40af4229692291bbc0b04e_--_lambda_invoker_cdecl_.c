/*
 * XREFs of _lambda_1e2b6ca0fa40af4229692291bbc0b04e_::_lambda_invoker_cdecl_ @ 0x1801E9AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18002B4B4 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x1801EAF8C (-OnInput@CManipulationManager@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_1e2b6ca0fa40af4229692291bbc0b04e_::_lambda_invoker_cdecl_(CManipulationManager *this)
{
  *((_BYTE *)this + 32) = 1;
  EnterCriticalSection(&stru_1803089E8);
  byte_1803089E4 = 1;
  LeaveCriticalSection(&stru_1803089E8);
  EnterCriticalSection(&stru_1803089A8);
  byte_1803089A4 = 1;
  LeaveCriticalSection(&stru_1803089A8);
  CManipulationManager::OnInteractionUpdate(this);
  CManipulationManager::OnInput(this);
  return 0LL;
}
