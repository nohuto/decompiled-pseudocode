/*
 * XREFs of _lambda_35cedf73a04efee64cd2b082b9370e6e_::_lambda_invoker_cdecl_ @ 0x180236220
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ @ 0x1800A8FC0 (-OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ.c)
 *     ?OnInput@CGlobalManipulationManager@@AEAAXXZ @ 0x180237660 (-OnInput@CGlobalManipulationManager@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_35cedf73a04efee64cd2b082b9370e6e_::_lambda_invoker_cdecl_(CGlobalManipulationManager *this)
{
  *((_BYTE *)this + 176) = 1;
  EnterCriticalSection(&stru_18033D568);
  byte_18033D564 = 1;
  LeaveCriticalSection(&stru_18033D568);
  EnterCriticalSection(&stru_18033D5A8);
  byte_18033D5A4 = 1;
  LeaveCriticalSection(&stru_18033D5A8);
  CGlobalManipulationManager::OnInteractionUpdate(this);
  CGlobalManipulationManager::OnInput(this);
  return 0LL;
}
