/*
 * XREFs of ??0?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@QEAA@XZ @ 0x18007BF70
 * Callers:
 *     _dynamic_initializer_for__CManipulationManager::s_InteractionUpdateQueue__ @ 0x180002B30 (_dynamic_initializer_for__CManipulationManager--s_InteractionUpdateQueue__.c)
 * Callees:
 *     <none>
 */

void **CQueue<CManipulationManager::InteractionUpdate *>::CQueue<CManipulationManager::InteractionUpdate *>()
{
  dword_1803089E0 = 0;
  qword_1803089D8 = (__int64)&CManipulationManager::s_InteractionUpdateQueue;
  CManipulationManager::s_InteractionUpdateQueue = &CManipulationManager::s_InteractionUpdateQueue;
  byte_1803089E4 = 0;
  InitializeCriticalSection(&stru_1803089E8);
  return &CManipulationManager::s_InteractionUpdateQueue;
}
