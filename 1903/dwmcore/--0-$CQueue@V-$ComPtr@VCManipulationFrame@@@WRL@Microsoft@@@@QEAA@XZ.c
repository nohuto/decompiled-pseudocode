/*
 * XREFs of ??0?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x1800D9030
 * Callers:
 *     _dynamic_initializer_for__CGlobalManipulationManager::s_InputQueue__ @ 0x180003400 (_dynamic_initializer_for__CGlobalManipulationManager--s_InputQueue__.c)
 * Callees:
 *     <none>
 */

void **CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>()
{
  dword_1803404C0 = 0;
  qword_1803404B8 = (__int64)&CGlobalManipulationManager::s_InputQueue;
  CGlobalManipulationManager::s_InputQueue = &CGlobalManipulationManager::s_InputQueue;
  byte_1803404C4 = 0;
  InitializeCriticalSection(&stru_1803404C8);
  return &CGlobalManipulationManager::s_InputQueue;
}
