/*
 * XREFs of ?Release@CMemoryManager@System@Windows@@WBI@AGKXZ @ 0x1000D450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall Windows::System::CMemoryManager::Release(int a1)
{
  return Windows::System::CMemoryManager::Release((Windows::System::CMemoryManager *)(a1 - 24));
}
