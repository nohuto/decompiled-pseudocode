/*
 * XREFs of _lambda_35cedf73a04efee64cd2b082b9370e6e_::_lambda_invoker_cdecl_ @ 0x180237930
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ @ 0x1800C3440 (-OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ.c)
 *     ?OnInput@CGlobalManipulationManager@@AEAAXXZ @ 0x180238D70 (-OnInput@CGlobalManipulationManager@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_35cedf73a04efee64cd2b082b9370e6e_::_lambda_invoker_cdecl_(CGlobalManipulationManager *this)
{
  *((_BYTE *)this + 176) = 1;
  EnterCriticalSection(&stru_180340488);
  byte_180340484 = 1;
  LeaveCriticalSection(&stru_180340488);
  EnterCriticalSection(&stru_1803404C8);
  byte_1803404C4 = 1;
  LeaveCriticalSection(&stru_1803404C8);
  CGlobalManipulationManager::OnInteractionUpdate(this);
  CGlobalManipulationManager::OnInput(this);
  return 0LL;
}
