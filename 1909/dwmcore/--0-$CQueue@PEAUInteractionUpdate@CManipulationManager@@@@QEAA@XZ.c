/*
 * XREFs of ??0?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@QEAA@XZ @ 0x1800D9818
 * Callers:
 *     _dynamic_initializer_for__CManipulationManager::s_InteractionUpdateQueue__ @ 0x1800033A0 (_dynamic_initializer_for__CManipulationManager--s_InteractionUpdateQueue__.c)
 * Callees:
 *     <none>
 */

void **CQueue<CManipulationManager::InteractionUpdate *>::CQueue<CManipulationManager::InteractionUpdate *>()
{
  dword_18033D560 = 0;
  qword_18033D558 = (__int64)&CManipulationManager::s_InteractionUpdateQueue;
  CManipulationManager::s_InteractionUpdateQueue = &CManipulationManager::s_InteractionUpdateQueue;
  byte_18033D564 = 0;
  InitializeCriticalSection(&stru_18033D568);
  return &CManipulationManager::s_InteractionUpdateQueue;
}
