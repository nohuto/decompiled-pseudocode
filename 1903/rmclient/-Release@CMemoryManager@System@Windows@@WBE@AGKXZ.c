/*
 * XREFs of ?Release@CMemoryManager@System@Windows@@WBE@AGKXZ @ 0x1000D440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall Windows::System::CMemoryManager::Release(int a1)
{
  return Windows::System::CMemoryManager::Release((Windows::System::CMemoryManager *)(a1 - 20));
}
