/*
 * XREFs of ?AddRef@CMemoryManager@System@Windows@@WBM@AGKXZ @ 0x1000D1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int32 __stdcall Windows::System::CMemoryManager::AddRef(int a1)
{
  return Windows::System::CMemoryManager::AddRef((Windows::System::CMemoryManager *)(a1 - 28));
}
