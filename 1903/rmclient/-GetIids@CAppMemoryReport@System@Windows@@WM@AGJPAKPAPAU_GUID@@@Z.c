/*
 * XREFs of ?GetIids@CAppMemoryReport@System@Windows@@WM@AGJPAKPAPAU_GUID@@@Z @ 0x1000D530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::CAppMemoryReport::GetIids(int a1, int a2, int a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::GetIids(
           a1 - 12,
           a2,
           a3);
}
