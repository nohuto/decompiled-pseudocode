/*
 * XREFs of ??0?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x18007BF28
 * Callers:
 *     _dynamic_initializer_for__CManipulationManager::s_InputQueue__ @ 0x180002B10 (_dynamic_initializer_for__CManipulationManager--s_InputQueue__.c)
 * Callees:
 *     <none>
 */

void **CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>()
{
  dword_1803089A0 = 0;
  qword_180308998 = (__int64)&CManipulationManager::s_InputQueue;
  CManipulationManager::s_InputQueue = &CManipulationManager::s_InputQueue;
  byte_1803089A4 = 0;
  InitializeCriticalSection(&stru_1803089A8);
  return &CManipulationManager::s_InputQueue;
}
