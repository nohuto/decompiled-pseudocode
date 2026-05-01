/*
 * XREFs of ?QueryInterface@CAppMemoryReport@System@Windows@@WM@AGJABU_GUID@@PAPAX@Z @ 0x1000D600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::CAppMemoryReport::QueryInterface(int a1, _DWORD *a2, int *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::QueryInterface(
           a1 - 12,
           a2,
           a3);
}
