/*
 * XREFs of ?GetRuntimeClassName@CProcessMemoryReport@System@Windows@@W7AGJPAPAUHSTRING__@@@Z @ 0x1000D590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::CProcessMemoryReport::GetRuntimeClassName(int a1, HSTRING *a2)
{
  return Windows::System::CProcessMemoryReport::GetRuntimeClassName(
           (Windows::System::CProcessMemoryReport *)(a1 - 8),
           a2);
}
