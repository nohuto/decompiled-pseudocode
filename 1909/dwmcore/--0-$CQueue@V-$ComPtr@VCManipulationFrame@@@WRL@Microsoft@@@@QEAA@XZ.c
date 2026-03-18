/*
 * XREFs of ??0?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x1800D97D0
 * Callers:
 *     _dynamic_initializer_for__CGlobalManipulationManager::s_InputQueue__ @ 0x1800033E0 (_dynamic_initializer_for__CGlobalManipulationManager--s_InputQueue__.c)
 * Callees:
 *     <none>
 */

void **CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>()
{
  dword_18033D5A0 = 0;
  qword_18033D598 = (__int64)&CGlobalManipulationManager::s_InputQueue;
  CGlobalManipulationManager::s_InputQueue = &CGlobalManipulationManager::s_InputQueue;
  byte_18033D5A4 = 0;
  InitializeCriticalSection(&stru_18033D5A8);
  return &CGlobalManipulationManager::s_InputQueue;
}
