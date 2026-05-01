/*
 * XREFs of ?GetIids@CProcessMemoryReport@System@Windows@@W7AGJPAKPAPAU_GUID@@@Z @ 0x1000D540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::CProcessMemoryReport::GetIids(int a1, unsigned int *a2, struct _GUID **a3)
{
  return Windows::System::CProcessMemoryReport::GetIids((Windows::System::CProcessMemoryReport *)(a1 - 8), a2, a3);
}
