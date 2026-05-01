/*
 * XREFs of ?GetRuntimeClassName@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UAGJPAPAUHSTRING__@@@Z @ 0x10010960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __stdcall Windows::System::AppMemoryUsageLimitChangingEventArgs::GetRuntimeClassName(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this,
        HSTRING *string)
{
  *string = 0;
  return WindowsCreateString(L"Windows.System.AppMemoryUsageLimitChangingEventArgs", 0x33u, string);
}
