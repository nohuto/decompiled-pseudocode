/*
 * XREFs of ?GetRuntimeClassName@CAppMemoryReport@System@Windows@@UAGJPAPAUHSTRING__@@@Z @ 0x10010980
 * Callers:
 *     ?GetRuntimeClassName@CAppMemoryReport@System@Windows@@W7AGJPAPAUHSTRING__@@@Z @ 0x1000D570 (-GetRuntimeClassName@CAppMemoryReport@System@Windows@@W7AGJPAPAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CAppMemoryReport@System@Windows@@WM@AGJPAPAUHSTRING__@@@Z @ 0x1000D580 (-GetRuntimeClassName@CAppMemoryReport@System@Windows@@WM@AGJPAPAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall Windows::System::CAppMemoryReport::GetRuntimeClassName(
        Windows::System::CAppMemoryReport *this,
        HSTRING *string)
{
  *string = 0;
  return WindowsCreateString(L"Windows.System.AppMemoryReport", 0x1Eu, string);
}
