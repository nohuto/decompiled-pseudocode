/*
 * XREFs of ?GetRuntimeClassName@CMemoryManager@System@Windows@@WCA@AGJPAPAUHSTRING__@@@Z @ 0x1000D2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::CMemoryManager::GetRuntimeClassName(int a1, HSTRING *a2)
{
  return Windows::System::CMemoryManager::GetRuntimeClassName((Windows::System::CMemoryManager *)(a1 - 32), a2);
}
