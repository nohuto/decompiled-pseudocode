/*
 * XREFs of ?s_ThreadMain@CGlobalManipulationManager@@CAKPEAX@Z @ 0x1800E0020
 * Callers:
 *     <none>
 * Callees:
 *     ?ManipulationThreadMain@CGlobalManipulationManager@@AEAAJXZ @ 0x1800E0038 (-ManipulationThreadMain@CGlobalManipulationManager@@AEAAJXZ.c)
 */

__int64 __fastcall CGlobalManipulationManager::s_ThreadMain(CGlobalManipulationManager *Parameter)
{
  CGlobalManipulationManager::ManipulationThreadMain(Parameter);
  return 0LL;
}
