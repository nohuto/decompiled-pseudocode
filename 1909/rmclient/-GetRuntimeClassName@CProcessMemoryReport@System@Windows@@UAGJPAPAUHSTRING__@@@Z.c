/*
 * XREFs of ?GetRuntimeClassName@CProcessMemoryReport@System@Windows@@UAGJPAPAUHSTRING__@@@Z @ 0x100109A0
 * Callers:
 *     ?GetRuntimeClassName@CProcessMemoryReport@System@Windows@@W7AGJPAPAUHSTRING__@@@Z @ 0x1000D590 (-GetRuntimeClassName@CProcessMemoryReport@System@Windows@@W7AGJPAPAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall Windows::System::CProcessMemoryReport::GetRuntimeClassName(
        Windows::System::CProcessMemoryReport *this,
        HSTRING *string)
{
  *string = 0;
  return WindowsCreateString(L"Windows.System.ProcessMemoryReport", 0x22u, string);
}
