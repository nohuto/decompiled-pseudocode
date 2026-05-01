/*
 * XREFs of ?GetRuntimeClassName@CMemoryManager@System@Windows@@WBE@AGJPAPAUHSTRING__@@@Z @ 0x1000D280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::CMemoryManager::GetRuntimeClassName(int a1, HSTRING *a2)
{
  return Windows::System::CMemoryManager::GetRuntimeClassName((Windows::System::CMemoryManager *)(a1 - 20), a2);
}
